#ifndef EXITSCREEN_H
#define EXITSCREEN_H

#include <QWidget>

namespace Ui {
class ExitScreen;
}

class ExitScreen : public QWidget
{
    Q_OBJECT

public:
    explicit ExitScreen(QWidget *parent = nullptr);
    ~ExitScreen();
    void setValue(int time, QString massage);
private slots:
    void on_btnExit_clicked();

    void on_btnMenu_clicked();

private:
    Ui::ExitScreen *ui;
};

#endif // EXITSCREEN_H
