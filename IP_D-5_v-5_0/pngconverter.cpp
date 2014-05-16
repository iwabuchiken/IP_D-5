#include "pngconverter.h"
#include "ui_pngconverter.h"

#include <QMessageBox>

pngconverter::pngconverter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pngconverter)
{
    ui->setupUi(this);
}

pngconverter::~pngconverter()
{
    delete ui;
}

void pngconverter::on_BT_Quit_clicked()
{
    QString msg;

    msg += "\nDo you really want to quit?\n";

    QMessageBox messageBox;
    messageBox.setWindowTitle(tr("png converter"));

    messageBox.setText(msg);

    messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    messageBox.setDefaultButton(QMessageBox::No);
    if (messageBox.exec() == QMessageBox::Yes)
        qApp->quit();

}

void pngconverter::on_actionQuit_triggered()
{

    _quit_App();

}

void pngconverter::_quit_App()
{
    QString title = "png converter";

    QString msg;

    msg += "\nDo you really want to quit?\n";

    QMessageBox messageBox;
    messageBox.setWindowTitle(title);
//    messageBox.setWindowTitle(tr("png converter"));

    messageBox.setText(msg);

    messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    messageBox.setDefaultButton(QMessageBox::No);
    if (messageBox.exec() == QMessageBox::Yes)
        qApp->quit();


}
