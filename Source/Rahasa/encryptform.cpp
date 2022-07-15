#include "encryptform.h"
#include "ui_encryptform.h"
#include "startup.h"
#include "QDebug"
#include <QProcess>

EncryptForm::EncryptForm(QWidget *parent) : QWidget(parent), ui(new Ui::EncryptForm){
    ui->setupUi(this);

    QDateTime dt;
    dt.currentDateTime();

    ui->dtExpire->setDateTime(dt.currentDateTime());
}

EncryptForm::~EncryptForm(){
    delete ui;
}

void EncryptForm::on_btnHome_clicked(){
    core.showForm(new StartUp(), this);
}

void EncryptForm::on_btnBrowse_clicked(){
    core.showFiledialog(this, "Select File to Encrypt");
    core.isFileAvailable(this,ui->le_filename);
}

void EncryptForm::on_btnGenPass_clicked(){
    core.setPassword(core.generatePassword(10));
    ui->le_pass->setText(core.getPassword());
    core.copyToClipboard("Password: "+core.getPassword());

    QMessageBox::about(this, "Password Generated", "The new generated password is: "+ core.getPassword()+" and it is copied to the clipboard");
}

void EncryptForm::on_le_pass_textChanged(){
    core.setPassword(ui->le_pass->text());
}

void EncryptForm::on_chkViews_stateChanged(){
    if(!ui->chkViews->isChecked())
        ui->sbTimes->setEnabled(true);
    else
        ui->sbTimes->setEnabled(false);
}

void EncryptForm::on_chkTime_stateChanged(){
    if(!ui->chkTime->isChecked())
        ui->dtExpire->setEnabled(true);
    else
        ui->dtExpire->setEnabled(false);
}

void EncryptForm::on_btnEncrypt_clicked(){
    if(core.isFileAvailable() && core.getPassword() == ui->le_pass->text()){
        QString finalData[4] = {
            core.getFilename(), core.getPassword(), "true", "true"
        };
        finalData[2] = (ui->chkTime->isChecked() != true)?ui->dtExpire->dateTime().toString():"unlimited";
        finalData[3] = (ui->chkViews->isChecked() != true)?QString::number(ui->sbTimes->value()):"unlimited";

        core.generateKeys(0,0);
        int prime1 = core.getPrime1();
        int prime2 = core.getPrime2();

        QDateTime dt = QDateTime::fromString(QDateTime::currentDateTime().toString(),"dd MMM yyyy hh:mm");
        QString dateT = dt.toString().replace(":", "");

        QString data = "<-SECRET->";
        QFile file(core.getFilename());
        if(core.isFileAvailable() && file.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream in(&file);
            while(!in.atEnd()){
                QString line = in.readLine();
                data+=line;
            }
            in.flush();
            file.close();
        }else{
            QMessageBox::critical(this, "Filling Missing", "File is Missing","Please Check the availability of the file and try again.");
            return;
        }
        data +="<-SECRET-/>";
        data = core.encrypt(data);

        Core core2;
        core2.generateKeys(core2.getSysPrime1(), core2.getSysPrime2());
        QString settings ="<-SETTINGS->";
        settings += "fileExtension="+file.fileName()+";";
        settings += "createdOn="+dateT+";";
        settings += "userKey="+finalData[1]+";";
        settings += "primes="+QString::number(prime1)+"|"+QString::number(prime2)+";";
        settings += "settings=expireOn:"+finalData[2]+"|maxViewCount:"+finalData[3]+";";
        settings += "<-SETTINGS-/><-DATA->viewCount=0;lastViewed="+dateT+";<-DATA-/>";
        settings = core2.encrypt(settings);

        data = settings+data;

        QString enFilename =file.fileName();
        enFilename = enFilename.split(".")[0]+".rashFile";
        QFile enFile(enFilename);
        while(enFile.open(QIODevice::ReadWrite)){
            QTextStream stream(&enFile);
            stream<<data<<endl;
        }
        enFile.close();

        QString ZipFile = enFilename.split(".")[0]+".rahasa";
        QStringList files;
        files.append(enFilename);

//        core.zip(enFilename, ZipFile);

//        QStringList arguments;// /c windows -c linux
//        arguments << "/c explorer d:";
//        QProcess exec;
//        exec.start("cmd.exe", arguments);
//        exec.waitForFinished();
//        qDebug() << exec.readAllStandardOutput();

        QMessageBox::about(this, "Rahasa 1.0", "File Successfully Encrypted.");
        core.showForm(new StartUp(), this);

        //QString decData = core.decrypt("NTMSTMKHLHSDC2$33(-&2# 3 UHDVNTMSK@RS5HDVDC3GTÿ#DBÿÿÿ# 3 ");
        //qDebug()<<decData;

    }else{
        QMessageBox::critical(this, "Insuffient Information", "Provide all the information requested.");
    }
}
