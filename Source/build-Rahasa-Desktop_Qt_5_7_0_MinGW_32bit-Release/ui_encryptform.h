/********************************************************************************
** Form generated from reading UI file 'encryptform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCRYPTFORM_H
#define UI_ENCRYPTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EncryptForm
{
public:
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *le_filename;
    QPushButton *btnBrowse;
    QPushButton *btnEncrypt;
    QGroupBox *groupBox_2;
    QCheckBox *chkTime;
    QLabel *label_4;
    QDateTimeEdit *dtExpire;
    QLabel *label_7;
    QCheckBox *chkViews;
    QSpinBox *sbTimes;
    QLabel *label_6;
    QPushButton *btnGenPass;
    QLineEdit *le_pass;
    QLabel *label;
    QPushButton *btnHome;

    void setupUi(QWidget *EncryptForm)
    {
        if (EncryptForm->objectName().isEmpty())
            EncryptForm->setObjectName(QStringLiteral("EncryptForm"));
        EncryptForm->resize(481, 310);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EncryptForm->sizePolicy().hasHeightForWidth());
        EncryptForm->setSizePolicy(sizePolicy);
        EncryptForm->setMinimumSize(QSize(481, 310));
        EncryptForm->setMaximumSize(QSize(481, 310));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Key.png"), QSize(), QIcon::Normal, QIcon::Off);
        EncryptForm->setWindowIcon(icon);
        EncryptForm->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(EncryptForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-10, 0, 501, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(EncryptForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 50, 211, 16));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral(""));
        le_filename = new QLineEdit(EncryptForm);
        le_filename->setObjectName(QStringLiteral("le_filename"));
        le_filename->setGeometry(QRect(20, 70, 331, 21));
        le_filename->setStyleSheet(QStringLiteral(""));
        le_filename->setReadOnly(true);
        btnBrowse = new QPushButton(EncryptForm);
        btnBrowse->setObjectName(QStringLiteral("btnBrowse"));
        btnBrowse->setGeometry(QRect(360, 70, 75, 23));
        btnEncrypt = new QPushButton(EncryptForm);
        btnEncrypt->setObjectName(QStringLiteral("btnEncrypt"));
        btnEncrypt->setEnabled(true);
        btnEncrypt->setGeometry(QRect(350, 260, 121, 31));
        btnEncrypt->setFont(font1);
        btnEncrypt->setCursor(QCursor(Qt::CrossCursor));
        btnEncrypt->setIcon(icon);
        groupBox_2 = new QGroupBox(EncryptForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 190, 321, 101));
        groupBox_2->setFont(font1);
        chkTime = new QCheckBox(groupBox_2);
        chkTime->setObjectName(QStringLiteral("chkTime"));
        chkTime->setGeometry(QRect(10, 70, 101, 17));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        chkTime->setFont(font2);
        chkTime->setChecked(true);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 20, 131, 21));
        label_4->setFont(font1);
        dtExpire = new QDateTimeEdit(groupBox_2);
        dtExpire->setObjectName(QStringLiteral("dtExpire"));
        dtExpire->setEnabled(false);
        dtExpire->setGeometry(QRect(10, 40, 141, 31));
        dtExpire->setFont(font2);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(190, 20, 121, 21));
        label_7->setFont(font1);
        chkViews = new QCheckBox(groupBox_2);
        chkViews->setObjectName(QStringLiteral("chkViews"));
        chkViews->setGeometry(QRect(190, 70, 101, 17));
        chkViews->setFont(font2);
        chkViews->setChecked(true);
        sbTimes = new QSpinBox(groupBox_2);
        sbTimes->setObjectName(QStringLiteral("sbTimes"));
        sbTimes->setEnabled(false);
        sbTimes->setGeometry(QRect(190, 40, 101, 31));
        sbTimes->setMinimum(1);
        sbTimes->setMaximum(100);
        label_6 = new QLabel(EncryptForm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 110, 411, 31));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6->setWordWrap(true);
        btnGenPass = new QPushButton(EncryptForm);
        btnGenPass->setObjectName(QStringLiteral("btnGenPass"));
        btnGenPass->setGeometry(QRect(320, 150, 121, 23));
        le_pass = new QLineEdit(EncryptForm);
        le_pass->setObjectName(QStringLiteral("le_pass"));
        le_pass->setGeometry(QRect(130, 150, 181, 21));
        le_pass->setStyleSheet(QStringLiteral(""));
        le_pass->setMaxLength(32767);
        le_pass->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        le_pass->setReadOnly(false);
        le_pass->setClearButtonEnabled(true);
        label = new QLabel(EncryptForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 150, 61, 21));
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btnHome = new QPushButton(EncryptForm);
        btnHome->setObjectName(QStringLiteral("btnHome"));
        btnHome->setGeometry(QRect(10, 10, 41, 23));
        label_2->raise();
        label_5->raise();
        le_filename->raise();
        btnBrowse->raise();
        btnEncrypt->raise();
        groupBox_2->raise();
        label->raise();
        label_6->raise();
        btnGenPass->raise();
        le_pass->raise();
        label->raise();
        btnHome->raise();

        retranslateUi(EncryptForm);

        QMetaObject::connectSlotsByName(EncryptForm);
    } // setupUi

    void retranslateUi(QWidget *EncryptForm)
    {
        EncryptForm->setWindowTitle(QApplication::translate("EncryptForm", "Hide Truth - Encrypt File", 0));
        label_2->setText(QApplication::translate("EncryptForm", "Encrypt File", 0));
        label_5->setText(QApplication::translate("EncryptForm", "<html><head/><body><p>Browse and Select a File to Encrypt*</p></body></html>", 0));
        le_filename->setText(QString());
        btnBrowse->setText(QApplication::translate("EncryptForm", "Browse File", 0));
        btnEncrypt->setText(QApplication::translate("EncryptForm", "Encrypt File", 0));
        groupBox_2->setTitle(QApplication::translate("EncryptForm", "Advanced Features (Optional)", 0));
        chkTime->setText(QApplication::translate("EncryptForm", "Never Expire", 0));
        label_4->setText(QApplication::translate("EncryptForm", "File Expirary Date/Time", 0));
        label_7->setText(QApplication::translate("EncryptForm", "Number of File Views", 0));
        chkViews->setText(QApplication::translate("EncryptForm", "Unlimited", 0));
        label_6->setText(QApplication::translate("EncryptForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The settings of the file cannot be changed after file encryption. Therefore, Check the settings twice before clicking '<span style=\" font-weight:600;\">Encrypt File</span>'</p></body></html>", 0));
        btnGenPass->setText(QApplication::translate("EncryptForm", "Generate Password", 0));
        le_pass->setInputMask(QString());
        le_pass->setText(QString());
        label->setText(QApplication::translate("EncryptForm", "<html><head/><body><p>Password*</p></body></html>", 0));
        btnHome->setText(QApplication::translate("EncryptForm", "Home", 0));
    } // retranslateUi

};

namespace Ui {
    class EncryptForm: public Ui_EncryptForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCRYPTFORM_H
