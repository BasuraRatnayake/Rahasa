#include "core.h"

Core::Core(){
}

void Core::zip(QString filename , QString zip_filename){
   QFile infile(filename);
   QFile outfile(zip_filename);

   infile.open(QIODevice::ReadOnly);
   outfile.open(QIODevice::WriteOnly|QIODevice::Truncate);

   QByteArray uncompressed_data = infile.readAll();
   QByteArray compressed_data = qCompress(uncompressed_data, 9);
   compressed_data.remove(0,4);
   compressed_data.remove(0, 2); // Remove Zlib header
   compressed_data.remove(compressed_data.size() - 4, 4); // Remove Zlib trailer

   const unsigned char gzipheader[10]={0x1f,0x8b,8,0,0,0,0,0,2,255};

   int length = infile.size();

   outfile.write((char *)gzipheader,10);
   outfile.write(compressed_data);
   infile.close();
   outfile.close();
}

void Core::unZip(QString zip_filename, QString filename){
   QFile infile(zip_filename);

   QFile outfile(filename);
   infile.open(QIODevice::ReadOnly);
   outfile.open(QIODevice::WriteOnly);

   QByteArray uncompressed_data = infile.readAll();
   QByteArray compressed_data = qUncompress(uncompressed_data);
   compressed_data.remove(0,2);
   compressed_data.remove(0,4);

   outfile.write(compressed_data);
   infile.close();
   outfile.close();
}

void Core::showForm(QWidget *formToShow, QWidget *formToHide){
    formToShow->show();
    formToHide->hide();
}
void Core::showFiledialog(QWidget *belongForm, QString title){
    filename = fileDialog.getOpenFileName(belongForm,title, "", "All Files (*.*)");
}
QString Core::getFilename(){
    return filename;
}

bool Core::isFileAvailable(){
    QFile file(filename);
    return file.exists();
}

bool Core::isFileAvailable(QWidget *belongForm, QLineEdit *label){
    QFile file(filename);
    if(!file.exists())
        QMessageBox::critical(belongForm, "File is Missing","Please Check the availability of the file and try again.");
    else
        label->setText(filename);
    return file.exists();
}

void Core::copyToClipboard(QString text){
    p_Clipboard->setText(text);
}
