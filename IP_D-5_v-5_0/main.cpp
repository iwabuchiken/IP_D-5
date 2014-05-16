#include "pngconverter.h"
#include <QApplication>

#include <QMessageBox>

//#define UBUNTU


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pngconverter w;
    w.show();

#ifdef UBUNTU

    QString title = "UBUNTU";

    QMessageBox messageBox;
    messageBox.setWindowTitle(title);
//    messageBox.setWindowTitle(tr("png converter"));

    QString msg = "UBUNTU";

    messageBox.setText(msg);

    messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    messageBox.setDefaultButton(QMessageBox::No);
    if (messageBox.exec() == QMessageBox::Yes)
        qApp->quit();


#endif


    return a.exec();
}
