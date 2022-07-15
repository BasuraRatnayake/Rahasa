/********************************************************************************
** Form generated from reading UI file 'startup.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTUP_H
#define UI_STARTUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartUp
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *lblEntrance;
    QPushButton *btnEnter;
    QPushButton *btnRTruth;
    QLabel *label_6;

    void setupUi(QWidget *StartUp)
    {
        if (StartUp->objectName().isEmpty())
            StartUp->setObjectName(QStringLiteral("StartUp"));
        StartUp->resize(527, 218);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StartUp->sizePolicy().hasHeightForWidth());
        StartUp->setSizePolicy(sizePolicy);
        StartUp->setMinimumSize(QSize(527, 218));
        StartUp->setMaximumSize(QSize(527, 218));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Key.png"), QSize(), QIcon::Normal, QIcon::Off);
        StartUp->setWindowIcon(icon);
        StartUp->setAutoFillBackground(false);
        StartUp->setStyleSheet(QStringLiteral("background-color: rgb(17, 17, 17);"));
        label = new QLabel(StartUp);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 90, 181, 51));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(StartUp);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 130, 81, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(StartUp);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 190, 101, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(8);
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(StartUp);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 190, 241, 16));
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(StartUp);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 80, 121, 16));
        label_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lblEntrance = new QLabel(StartUp);
        lblEntrance->setObjectName(QStringLiteral("lblEntrance"));
        lblEntrance->setGeometry(QRect(110, 90, 98, 53));
        lblEntrance->setPixmap(QPixmap(QString::fromUtf8(":/images/Logo.png")));
        btnEnter = new QPushButton(StartUp);
        btnEnter->setObjectName(QStringLiteral("btnEnter"));
        btnEnter->setGeometry(QRect(400, 20, 111, 23));
        btnEnter->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        btnRTruth = new QPushButton(StartUp);
        btnRTruth->setObjectName(QStringLiteral("btnRTruth"));
        btnRTruth->setGeometry(QRect(10, 20, 111, 23));
        btnRTruth->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_6 = new QLabel(StartUp);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(310, 260, 101, 21));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label_6->setFont(font3);
        label_6->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(StartUp);

        QMetaObject::connectSlotsByName(StartUp);
    } // setupUi

    void retranslateUi(QWidget *StartUp)
    {
        StartUp->setWindowTitle(QApplication::translate("StartUp", "Rahasa 1.0 - Customizable Encryption", 0));
        label->setText(QApplication::translate("StartUp", "RAHASA ", 0));
        label_2->setText(QApplication::translate("StartUp", "The Secret", 0));
        label_3->setText(QApplication::translate("StartUp", "Version 1.0.0.0", 0));
        label_4->setText(QApplication::translate("StartUp", "Copyright(c) 2016 ForeRunner. All rights reserved.", 0));
        label_5->setText(QApplication::translate("StartUp", "Customizable Encryption", 0));
        lblEntrance->setText(QString());
        btnEnter->setText(QApplication::translate("StartUp", "Hide Truth", 0));
        btnRTruth->setText(QApplication::translate("StartUp", "Reveal Truth", 0));
        label_6->setText(QApplication::translate("StartUp", "The Secret", 0));
    } // retranslateUi

};

namespace Ui {
    class StartUp: public Ui_StartUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUP_H
