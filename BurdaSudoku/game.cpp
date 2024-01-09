#include "game.h"
#include "ui_game.h"
#include <qtimer.h>
#include "exitscreen.h"


Game::Game(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Game)
{
    ui->setupUi(this);
    QPushButton *number[9];
    for(int i = 0;i<9;i++)
    {
        QString numberName = "btn"+ QString::number(i+1);
        number[i] = Game::findChild<QPushButton*>(numberName);
        connect(number[i],SIGNAL(released()),this,SLOT(numberPressed()));
        for(int j = 0;j<9;j++)
        {
            QString areaName= "pushButton_"+QString::number(i*9+j);
            gameArea[i][j] = Game::findChild<QPushButton*>(areaName);
            connect(gameArea[i][j],SIGNAL(released()),this,SLOT(areaPressed()));
        }
    }
    error = 0;
    hint = 0;
    time = 0;
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, QOverload<>::of(&Game::updateTime));
    timer->start(1000);
    pressedAreaButton = gameArea[0][0];
}
Game::~Game()
{
    delete ui;
}
void Game::setMod(int mod) //Initializes the game based on the specified game mode and updates the display structure accordingly
{
    this->mod = mod;
    table = new Table(mod);
    showArea();

}
void Game::showArea()//Updates the Sudoku game area, displaying the table on the screen, and checks the error count.
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9;j++)
        {
            int number = table->getTable(i,j);
            if(number == 0)
            {
                gameArea[i][j]->setText("");
                continue;
            }
            QFont font = gameArea[i][j]->font();
            font.setPointSize(18);
            gameArea[i][j]->setFont(font);

            gameArea[i][j]->setText(QString::number(number));
            gameArea[i][j]->setStyleSheet("color: blue;");
        }
    }
    QLabel *lblError = Game::findChild<QLabel*>("lblError");

    QFont fontError = lblError->font();
    fontError.setPointSize(18);
    lblError->setFont(fontError);

    lblError->setText("Error = "+QString::number(error));

    if(error == 3 || table->isFinish() == 1)
    {
        exitGame();
    }

}
void Game::areaPressed() //Tracks the game area button pressed by the user.
{
    pressedAreaButton = (QPushButton *)sender();
}
int    getLastTwoInt(std::string tmp)
{
    int number = 0;
    for (int i=11; tmp[i]; i++)
        number = (tmp[i] - 48) + (number * 10);
    return number;
}
void Game::numberPressed() //Updates the game table with the number button pressed by the user and checks for errors.

{
    int number = getLastTwoInt(pressedAreaButton->objectName().toStdString());
    QPushButton *pressedButton =(QPushButton *)sender();
    int control = table->addNumber(number/9 +1,number%9+1,pressedButton->text().toInt());
    if(control <0)
        error++;
    showArea();
}

void Game::on_btnEraser_released() //Allows deletion of numbers in the game area using the eraser button.
{
    int number = getLastTwoInt(pressedAreaButton->objectName().toStdString());
    table->deleteNumber(number/9+1,number%9+1);
    showArea();
}


void Game::on_btnHint_released() //Adds and displays a random number to the game as a hint using the hint button.
{
    if(hint<3)
    {
        table->setRandomNumber(1);
        hint++;
        showArea();
    }
}
void Game::updateTime()//Updates the game time in seconds and displays it on the screen.
{
    time += 1;
    QLabel *lblTime = Game::findChild<QLabel *>("lblTime");

    QFont font = lblTime->font();
    font.setPointSize(18);
    lblTime->setFont(font);

    lblTime->setText("Time = " + QString::number(time/60) + ":" + QString::number(time%60));
}

void Game::exitGame()//Terminates the game, determines the game outcome, and displays an exit screen with the appropriate message and elapsed time.

{
    ExitScreen *exit = new ExitScreen();
    timer->stop();
    QString message;
    if (table->isFinish() == 1)
    {
        message = R"(  CONGRATULATIONS !!!)";
    }
    else
    {
        message = R"(         YOU FAILED !!!)";
    }

    exit->setValue(time, message);

    QFont exitScreenFont;
    exitScreenFont.setPointSize(18);
    exit->setFont(exitScreenFont);

    // Set text color to black
    exit->setStyleSheet("color: black;");

    exit->show();
    this->hide();
}

void Game::on_btnStop_clicked() //Toggles the game timer on and off when the "Stop" button is clicked.
{
    if(timer->isActive())
    {
        timer->stop();
    }else
    {
        timer->start(1000);
    }

}

