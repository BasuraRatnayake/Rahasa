#ifndef ENCRYPTFORM_H
#define ENCRYPTFORM_H

#include <QWidget>
#include "core.h"

namespace Ui {
    class EncryptForm;
}

class EncryptForm : public QWidget{
    Q_OBJECT

    public:
        explicit EncryptForm(QWidget *parent = 0);
        ~EncryptForm();

    private slots:
        void on_btnHome_clicked();
        void on_btnBrowse_clicked();
        void on_btnGenPass_clicked();
        void on_chkViews_stateChanged();
        void on_chkTime_stateChanged();
        void on_btnEncrypt_clicked();
        void on_le_pass_textChanged();

    private:
        Ui::EncryptForm *ui;
        Core core;
};
#endif // ENCRYPTFORM_H
