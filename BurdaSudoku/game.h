#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QPushButton>
#include "table.h"
namespace Ui {
class Game;
}

class Game : public QWidget
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    void setMod(int mod);
    ~Game();

private:
    Ui::Game *ui;
    double mod;
    QPushButton *pressedAreaButton;
    Table *table;
    QPushButton *gameArea[9][9];
    void showArea();
    void exitGame();
    int error;
    int hint;
    int time;
    QTimer *timer;
private slots:
    void updateTime();
    void areaPressed();
    void numberPressed();
    void on_btnEraser_released();
    void on_btnHint_released();
    void on_btnStop_clicked();
};

#endif // GAME_H
