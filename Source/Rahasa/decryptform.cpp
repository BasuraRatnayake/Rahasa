#include "decryptform.h"
#include "ui_decryptform.h"
#include "QDebug"
#include "startup.h"
#include "QDateTime"

DecryptForm::DecryptForm(QWidget *parent) : QWidget(parent), ui(new Ui::DecryptForm){
    ui->setupUi(this);
    ui->lblData->setVisible(false);
}

DecryptForm::~DecryptForm(){
    delete ui;
}

void DecryptForm::on_btnBrowse_clicked(){
    core.showFiledialog(this, "Select File to Decrypt");
    core.isFileAvailable(this, ui->le_filename);
}

void DecryptForm::on_btnHome_clicked(){
    core.showForm(new StartUp(), this);
}

void DecryptForm::readFile(){
    QFile file(core.getFilename());
    if(core.isFileAvailable() && file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QString s = core.getFilename();
        QTextStream in(&file);
        while(!in.atEnd()){
            QString line = in.readLine();
            dataLine.append(line);
        }
        in.flush();
        file.close();
    }else{
        QMessageBox::critical(this, "Filling Missing", "File is Missing","Please Check the availability of the file and try again.");
        return;
    }
}

QString DecryptForm::decryptSettings(){
    Core core2;
    core2.generateKeys(core.getSysPrime1(), core.getSysPrime2());
    QString settings = "";
    for(int i=0;i<dataLine.size();i++){
        QString line = dataLine.at(i);
        line =core2.decrypt(line);
        settings += line;

        if(line.contains("<-DATA-/>"))
            break;
    }
    dataLine.removeAt(0);
    dataLine.append(settings.split("<-DATA-/>")[1]);
    settings = settings.split("<-DATA-/>")[0];
    settings = settings.replace("<-SETTINGS->", "").replace("<-SETTINGS-/>","").replace("<-DATA-/>","").replace("<-DATA->","");
    dataLine.append(settings);
    return settings;
}

QString DecryptForm::decryptData(){
    QString data = "";

    int p1 = prime1.toInt();
    int p2 = prime2.toInt();

    QFile file(core.getFilename());
    if(core.isFileAvailable() && file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);
        while(!in.atEnd()){
            QString line = in.readLine();
            data += line;
        }
        in.flush();
        file.close();
    }

    core.generateKeys(p1, p2);

    data = core.decrypt(data);
    data = data.split("<-SECRET->")[1];
    data = data.replace("<-SECRET-/>", "");
    qDebug()<<data;

    return data;
}

void DecryptForm::on_btnDecrypt_clicked(){
    if(userKey == NULL || userKey == ""){
        readFile();
        storeSettings();
    }else{
        if(ui->lblPassword->text() == userKey){
            attempts = 5;
            QString data = decryptData();
            ui->lblData->setText(data);
            ui->lblData->setVisible(true);
        }else{
            attempts--;
            QMessageBox::critical(this, "Decryption Error", "Incorrect Password, You have only "+QString::number(attempts)+" attempts remaining","Ok");
            if(attempts <= 0){
                core.generateKeys(0,0);
                QFile file(core.getFilename());
                QString corData = "";
                if(core.isFileAvailable() && file.open(QIODevice::ReadOnly | QIODevice::Text)){
                    QTextStream in(&file);
                    while(!in.atEnd()){
                        QString line = in.readLine();
                        corData += core.encrypt(line);
                    }
                    in.flush();
                    file.close();
                }
                QFile enFile(core.getFilename());
                while(enFile.open(QIODevice::ReadWrite)){
                    QTextStream stream(&enFile);
                    stream<<corData<<endl;
                }
                enFile.close();

                QMessageBox::critical(this, "File Corrupted", "Password Attempts Expired, You File is now Corrupted.","Ok");
                core.showForm(new StartUp(), this);
            }
        }
        ui->lblAttempts->setText("<html><head/><body><p>Enter the Password to Begin the Decryption Process, if the maximum number of password attempts are reached the file will be corrupted forever.</p><p>Maximum Number of Attempt Available: <span style=\" font-weight:600;\">"+QString::number(attempts)+"</span></p></body></html>");
    }
}

void DecryptForm::storeSettings(){
    QVector<QString> settings = decryptSettings().split(";").toVector();
    settings.removeAt(settings.size()-1);
    for(int i=0;i<settings.size();i++){
        QString property = settings[i].split("=").at(0);
        QString value = settings[i].split("=").at(1);

        if(property == "fileExtension")
            fileEx = value;
        else if(property == "createdOn")
            createD = value;
        else if(property == "userKey")
            userKey = value;
        else if(property == "primes"){
            QVector<QString> values = value.split("|").toVector();
            prime1 = values[0];
            prime2 = values[1];
        }else if(property == "settings"){
            QVector<QString> values = value.split("|").toVector();
            foreach(QString val, values){
                property = val.split(":")[0];
                value = val.split(":")[1];

                if(property == "expireOn"){
                    expire = value;
                    ui->lbDateT->setText("<html><head/><body><p><span style=\" font-weight:400;\">File Expirary Date/Time: </span>"+expire+"</p></body></html>");
                }else if(property == "maxViewCount"){
                    maxView = value;
                    ui->lblTimes->setText("<html><head/><body><p><span style=\" font-weight:400;\">Number of File Views Remaining: </span>"+maxView+"</p></body></html>");
                }else if(property == "viewCount"){
                    value[0] = value[0].toUpper();
                    viewC = value;
                }else if(property == "lastViewed")
                    lastView = value;
            }
        }
    }
}
