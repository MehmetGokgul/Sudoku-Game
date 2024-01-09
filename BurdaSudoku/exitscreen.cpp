#include "exitscreen.h"
#include "ui_exitscreen.h"
#include "mainwindow.h"


ExitScreen::ExitScreen(QWidget *parent) //Providing access to the user interface design, and initializes the initial state and settings during the object creation.
    : QWidget(parent)
    , ui(new Ui::ExitScreen)
{
    ui->setupUi(this);
}

ExitScreen::~ExitScreen()//The destructor
{
    delete ui;
}

void ExitScreen::on_btnExit_clicked() //Closes the application when the "Exit" button is clicked.
{
    QApplication::quit();
}


void ExitScreen::on_btnMenu_clicked() //Displays the main window and hides the exit screen when the "Menu" button is clicked.

{
    foreach (QWidget *w, qApp->topLevelWidgets())
    {
        if (QMainWindow* mainWin = qobject_cast<QMainWindow*>(w))
        {
            mainWin->show();
            this->hide();
        }
    }
}
void ExitScreen::setValue(int time, QString massage) // Sets the displayed values on the exit screen, updating the elapsed time and final message based on the provided parameters.

{
    QTextEdit *txtMassage = ExitScreen::findChild<QTextEdit *>("txtFinal");
    txtMassage->setText(massage);
    QLabel *lblTime = ExitScreen::findChild<QLabel *>("lblTime");
    QString fullTime = "TIME = "+QString::number(time/60)+ ":"+QString::number(time%60);
    lblTime->setText(fullTime);
}

