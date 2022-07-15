/********************************************************************************
** Form generated from reading UI file 'decryptform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECRYPTFORM_H
#define UI_DECRYPTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DecryptForm
{
public:
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QLabel *lbDateT;
    QLabel *lblTimes;
    QPushButton *btnBrowse;
    QPushButton *btnDecrypt;
    QLineEdit *le_filename;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *lblPassword;
    QLabel *lblAttempts;
    QLabel *lblWarning;
    QPushButton *btnHome;
    QLabel *lblData;

    void setupUi(QWidget *DecryptForm)
    {
        if (DecryptForm->objectName().isEmpty())
            DecryptForm->setObjectName(QStringLiteral("DecryptForm"));
        DecryptForm->resize(477, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DecryptForm->sizePolicy().hasHeightForWidth());
        DecryptForm->setSizePolicy(sizePolicy);
        DecryptForm->setMinimumSize(QSize(477, 300));
        DecryptForm->setMaximumSize(QSize(477, 300));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Key.png"), QSize(), QIcon::Normal, QIcon::Off);
        DecryptForm->setWindowIcon(icon);
        DecryptForm->setStyleSheet(QStringLiteral("background-color: rgb(235, 235, 235);"));
        label_2 = new QLabel(DecryptForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 501, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);
        groupBox_2 = new QGroupBox(DecryptForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(false);
        groupBox_2->setGeometry(QRect(30, 220, 281, 71));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        groupBox_2->setFont(font1);
        lbDateT = new QLabel(groupBox_2);
        lbDateT->setObjectName(QStringLiteral("lbDateT"));
        lbDateT->setGeometry(QRect(10, 20, 201, 21));
        lbDateT->setFont(font1);
        lblTimes = new QLabel(groupBox_2);
        lblTimes->setObjectName(QStringLiteral("lblTimes"));
        lblTimes->setGeometry(QRect(10, 40, 241, 21));
        lblTimes->setFont(font1);
        lbDateT->raise();
        lblTimes->raise();
        btnBrowse = new QPushButton(DecryptForm);
        btnBrowse->setObjectName(QStringLiteral("btnBrowse"));
        btnBrowse->setGeometry(QRect(370, 70, 75, 23));
        btnDecrypt = new QPushButton(DecryptForm);
        btnDecrypt->setObjectName(QStringLiteral("btnDecrypt"));
        btnDecrypt->setEnabled(true);
        btnDecrypt->setGeometry(QRect(340, 240, 121, 31));
        btnDecrypt->setFont(font1);
        btnDecrypt->setCursor(QCursor(Qt::CrossCursor));
        btnDecrypt->setIcon(icon);
        le_filename = new QLineEdit(DecryptForm);
        le_filename->setObjectName(QStringLiteral("le_filename"));
        le_filename->setGeometry(QRect(30, 70, 331, 21));
        le_filename->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        le_filename->setReadOnly(true);
        label_5 = new QLabel(DecryptForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 50, 211, 16));
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral(""));
        label = new QLabel(DecryptForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 180, 91, 21));
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblPassword = new QLineEdit(DecryptForm);
        lblPassword->setObjectName(QStringLiteral("lblPassword"));
        lblPassword->setGeometry(QRect(130, 180, 181, 21));
        lblPassword->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lblPassword->setMaxLength(32767);
        lblPassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        lblPassword->setReadOnly(false);
        lblPassword->setClearButtonEnabled(true);
        lblAttempts = new QLabel(DecryptForm);
        lblAttempts->setObjectName(QStringLiteral("lblAttempts"));
        lblAttempts->setGeometry(QRect(30, 110, 421, 51));
        lblAttempts->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblAttempts->setWordWrap(true);
        lblWarning = new QLabel(DecryptForm);
        lblWarning->setObjectName(QStringLiteral("lblWarning"));
        lblWarning->setGeometry(QRect(320, 180, 111, 21));
        lblWarning->setFont(font1);
        lblWarning->setStyleSheet(QStringLiteral("color: rgb(235, 235, 235);"));
        lblWarning->setTextFormat(Qt::AutoText);
        lblWarning->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btnHome = new QPushButton(DecryptForm);
        btnHome->setObjectName(QStringLiteral("btnHome"));
        btnHome->setGeometry(QRect(10, 10, 41, 23));
        lblData = new QLabel(DecryptForm);
        lblData->setObjectName(QStringLiteral("lblData"));
        lblData->setGeometry(QRect(10, 50, 461, 241));
        lblData->setFocusPolicy(Qt::NoFocus);
        lblData->setAutoFillBackground(false);
        lblData->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lblData->setFrameShape(QFrame::StyledPanel);
        lblData->setTextFormat(Qt::RichText);
        lblData->setScaledContents(true);
        lblData->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblData->setWordWrap(true);

        retranslateUi(DecryptForm);

        QMetaObject::connectSlotsByName(DecryptForm);
    } // setupUi

    void retranslateUi(QWidget *DecryptForm)
    {
        DecryptForm->setWindowTitle(QApplication::translate("DecryptForm", "Reveal Truth - Decrypt File", 0));
        label_2->setText(QApplication::translate("DecryptForm", "Decrypt File", 0));
        groupBox_2->setTitle(QApplication::translate("DecryptForm", "Additional Information", 0));
        lbDateT->setText(QApplication::translate("DecryptForm", "<html><head/><body><p><span style=\" font-weight:400;\">File Expirary Date/Time: </span>Unlimited</p></body></html>", 0));
        lblTimes->setText(QApplication::translate("DecryptForm", "<html><head/><body><p><span style=\" font-weight:400;\">Number of File Views Remaining: </span>Unlimited</p></body></html>", 0));
        btnBrowse->setText(QApplication::translate("DecryptForm", "Browse File", 0));
        btnDecrypt->setText(QApplication::translate("DecryptForm", "Decrypt File", 0));
        le_filename->setText(QString());
        label_5->setText(QApplication::translate("DecryptForm", "Browse and Select a File to Decrypt", 0));
        label->setText(QApplication::translate("DecryptForm", "Enter Password", 0));
        lblPassword->setInputMask(QString());
        lblPassword->setText(QString());
        lblAttempts->setText(QApplication::translate("DecryptForm", "<html><head/><body><p>Enter the Password to Begin the Decryption Process, if the maximum number of password attempts are reached the file will be corrupted forever.</p><p>Maximum Number of Attempt Available: <span style=\" font-weight:600;\">5</span></p></body></html>", 0));
        lblWarning->setText(QApplication::translate("DecryptForm", "Incorrect Password", 0));
        btnHome->setText(QApplication::translate("DecryptForm", "Home", 0));
        lblData->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DecryptForm: public Ui_DecryptForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECRYPTFORM_H
