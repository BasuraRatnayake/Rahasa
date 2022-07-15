#ifndef CORE_H
#define CORE_H
#include <QWidget>
#include <QFileDialog>
#include <QString>
#include <QMessageBox>
#include <QDebug>
#include <QLineEdit>
#include <encryption.h>
#include <QClipboard>
#include <QApplication>

class Core: public Encryption{
    public:
        Core();
        void showForm(QWidget *, QWidget *);
        void showFiledialog(QWidget *, QString);
        QString getFilename();
        bool isFileAvailable();
        bool isFileAvailable(QWidget *, QLineEdit *);
        void copyToClipboard(QString);
        void zip(QString, QString);
        void unZip(QString, QString);

    private:
        QFileDialog fileDialog;
        QString filename;
        QClipboard *p_Clipboard = QApplication::clipboard();
};
#endif // CORE_H
