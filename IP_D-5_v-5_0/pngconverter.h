#ifndef PNGCONVERTER_H
#define PNGCONVERTER_H

#include <QMainWindow>

namespace Ui {
class pngconverter;
}

class pngconverter : public QMainWindow
{
    Q_OBJECT

public:
    explicit pngconverter(QWidget *parent = 0);
    ~pngconverter();

//    void _quit_App(void);

private slots:
    void on_BT_Quit_clicked();

    void on_actionQuit_triggered();

private:
    Ui::pngconverter *ui;

    void _quit_App(void);

};

#endif // PNGCONVERTER_H
