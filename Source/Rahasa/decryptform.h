#ifndef DECRYPTFORM_H
#define DECRYPTFORM_H

#include <QWidget>
#include "core.h"

namespace Ui {
    class DecryptForm;
}

class DecryptForm : public QWidget{
    Q_OBJECT

    public:
        explicit DecryptForm(QWidget *parent = 0);
        ~DecryptForm();

    private slots:
        void on_btnHome_clicked();
        void on_btnBrowse_clicked();
        void on_btnDecrypt_clicked();

    private:
        Ui::DecryptForm *ui;
        Core core;
        void readFile();
        QString decryptSettings();
        QString decryptData();
        void storeSettings();
        int attempts=5;

    protected:
        QStringList dataLine;
        QString fileEx;
        QString createD;
        QString userKey;
        QString prime1;
        QString prime2;
        QString expire;
        QString maxView;
        QString viewC;
        QString lastView;

};
#endif // DECRYPTFORM_H
