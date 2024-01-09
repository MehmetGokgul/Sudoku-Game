/********************************************************************************
** Form generated from reading UI file 'exitscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITSCREEN_H
#define UI_EXITSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExitScreen
{
public:
    QLabel *lblTime;
    QTextEdit *txtFinal;
    QPushButton *btnMenu;
    QPushButton *btnExit;
    QTextEdit *textEdit;

    void setupUi(QWidget *ExitScreen)
    {
        if (ExitScreen->objectName().isEmpty())
            ExitScreen->setObjectName("ExitScreen");
        ExitScreen->resize(843, 538);
        lblTime = new QLabel(ExitScreen);
        lblTime->setObjectName("lblTime");
        lblTime->setGeometry(QRect(360, 280, 171, 31));
        txtFinal = new QTextEdit(ExitScreen);
        txtFinal->setObjectName("txtFinal");
        txtFinal->setEnabled(false);
        txtFinal->setGeometry(QRect(280, 210, 281, 121));
        txtFinal->setAutoFillBackground(false);
        btnMenu = new QPushButton(ExitScreen);
        btnMenu->setObjectName("btnMenu");
        btnMenu->setGeometry(QRect(130, 380, 201, 101));
        btnExit = new QPushButton(ExitScreen);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(502, 378, 181, 101));
        btnExit->setAutoFillBackground(false);
        textEdit = new QTextEdit(ExitScreen);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(240, 20, 361, 141));
        textEdit->setReadOnly(true);
        txtFinal->raise();
        btnMenu->raise();
        btnExit->raise();
        lblTime->raise();
        textEdit->raise();

        retranslateUi(ExitScreen);

        QMetaObject::connectSlotsByName(ExitScreen);
    } // setupUi

    void retranslateUi(QWidget *ExitScreen)
    {
        ExitScreen->setWindowTitle(QCoreApplication::translate("ExitScreen", "Form", nullptr));
        lblTime->setText(QString());
        txtFinal->setHtml(QCoreApplication::translate("ExitScreen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        btnMenu->setText(QCoreApplication::translate("ExitScreen", "BACK TO MENU", nullptr));
        btnExit->setText(QCoreApplication::translate("ExitScreen", "EXIT", nullptr));
        textEdit->setHtml(QCoreApplication::translate("ExitScreen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; font-weight:700;\">SUDOKU GAME</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExitScreen: public Ui_ExitScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITSCREEN_H
