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

private slots:
    void on_pushButton_clicked();

private:
    Ui::pngconverter *ui;
};

#endif // PNGCONVERTER_H
