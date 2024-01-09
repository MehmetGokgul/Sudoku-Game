/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *mainLine;
    QPushButton *btnPlay;
    QPushButton *btnEasy;
    QPushButton *btnNormal;
    QPushButton *btnHard;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(821, 583);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color : #000000;\n"
"}"));
        mainLine = new QLineEdit(centralwidget);
        mainLine->setObjectName("mainLine");
        mainLine->setGeometry(QRect(100, 10, 601, 191));
        QFont font;
        font.setPointSize(48);
        mainLine->setFont(font);
        mainLine->setAutoFillBackground(false);
        mainLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: #ffffff;\n"
"	border: none;\n"
"}"));
        mainLine->setAlignment(Qt::AlignCenter);
        mainLine->setReadOnly(true);
        btnPlay = new QPushButton(centralwidget);
        btnPlay->setObjectName("btnPlay");
        btnPlay->setGeometry(QRect(330, 340, 141, 101));
        QFont font1;
        font1.setPointSize(18);
        btnPlay->setFont(font1);
        btnPlay->setStyleSheet(QString::fromUtf8("QPushButton#btnPlay{\n"
"	color:#ffffff;\n"
"	border-style: solid;\n"
"	border-width: 5px;\n"
"	border-radius : 50%;\n"
"}"));
        btnEasy = new QPushButton(centralwidget);
        btnEasy->setObjectName("btnEasy");
        btnEasy->setGeometry(QRect(132, 268, 111, 51));
        QFont font2;
        font2.setPointSize(14);
        btnEasy->setFont(font2);
        btnEasy->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 5px;\n"
"	border-radius: 10px;\n"
"}"));
        btnNormal = new QPushButton(centralwidget);
        btnNormal->setObjectName("btnNormal");
        btnNormal->setGeometry(QRect(340, 210, 111, 51));
        btnNormal->setFont(font2);
        btnNormal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 5px;\n"
"	border-radius: 10px;\n"
"}"));
        btnHard = new QPushButton(centralwidget);
        btnHard->setObjectName("btnHard");
        btnHard->setGeometry(QRect(560, 270, 111, 51));
        btnHard->setFont(font2);
        btnHard->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 5px;\n"
"	border-radius: 10px;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 821, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Sudoku", nullptr));
        mainLine->setText(QCoreApplication::translate("MainWindow", "Sudoku Game", nullptr));
        mainLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Sudoku Game", nullptr));
        btnPlay->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        btnEasy->setText(QCoreApplication::translate("MainWindow", "Easy", nullptr));
        btnNormal->setText(QCoreApplication::translate("MainWindow", "Normal", nullptr));
        btnHard->setText(QCoreApplication::translate("MainWindow", "Hard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
