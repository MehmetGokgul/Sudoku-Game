
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "game.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    modValue[0] = 37;
    modValue[1] = 26;
    modValue[2] = 21;
    mod = modValue[1];
    QPushButton *modButtons[3];
    modButtons[0] = MainWindow::findChild<QPushButton*>("btnEasy");
    modButtons[1] = MainWindow::findChild<QPushButton*>("btnNormal");
    modButtons[2] = MainWindow::findChild<QPushButton*>("btnHard");
    for(int i = 0; i<3;i++)
    {
        connect(modButtons[i],SIGNAL(released()),this,SLOT(changeMod()));
    }
    modButtons[1]->setStyleSheet("background-color: #C0C0C0;color: #ffffff;border-style:solid;border-width: 5px;border-radius: 10px");
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::changeMod()//Updates the game mode based on the button pressed, changing the visual style of the selected button and resetting the style of others.
{
    QPushButton *modButtons[3];
    QPushButton *pressedOne = (QPushButton *)sender();
    modButtons[0] = MainWindow::findChild<QPushButton*>("btnEasy");
    modButtons[1] = MainWindow::findChild<QPushButton*>("btnNormal");
    modButtons[2] = MainWindow::findChild<QPushButton*>("btnHard");
    for(int i = 0; i<3;i++)
    {
        if(pressedOne == modButtons[i])
        {
            mod = modValue[i];
        }
        modButtons[i]->setStyleSheet("color: #ffffff;border-style:solid;border-width: 5px;border-radius: 10px");
    }
    pressedOne->setStyleSheet("background-color: #C0C0C0;color: #ffffff;border-style:solid;border-width: 5px;border-radius: 10px");

}

void MainWindow::on_btnPlay_clicked()//Hides the main window and displays a new Game window with the chosen difficulty level when the "Play" button is clicked.

{
    this->hide();
    Game *game = new Game();
    game->setMod(mod);
    game->show();
}

