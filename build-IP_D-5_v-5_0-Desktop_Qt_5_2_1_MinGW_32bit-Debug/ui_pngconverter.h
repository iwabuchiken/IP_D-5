/********************************************************************************
** Form generated from reading UI file 'pngconverter.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PNGCONVERTER_H
#define UI_PNGCONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pngconverter
{
public:
    QAction *actionQuit;
    QWidget *centralWidget;
    QPushButton *BT_Quit;
    QPushButton *BT_Viewer;
    QPushButton *BT_Convert;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *pngconverter)
    {
        if (pngconverter->objectName().isEmpty())
            pngconverter->setObjectName(QStringLiteral("pngconverter"));
        pngconverter->resize(742, 595);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(74);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pngconverter->sizePolicy().hasHeightForWidth());
        pngconverter->setSizePolicy(sizePolicy);
        actionQuit = new QAction(pngconverter);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QFont font;
        font.setPointSize(12);
        actionQuit->setFont(font);
        centralWidget = new QWidget(pngconverter);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BT_Quit = new QPushButton(centralWidget);
        BT_Quit->setObjectName(QStringLiteral("BT_Quit"));
        BT_Quit->setGeometry(QRect(570, 430, 150, 50));
        QFont font1;
        font1.setPointSize(14);
        BT_Quit->setFont(font1);
        BT_Viewer = new QPushButton(centralWidget);
        BT_Viewer->setObjectName(QStringLiteral("BT_Viewer"));
        BT_Viewer->setGeometry(QRect(570, 360, 150, 50));
        BT_Viewer->setFont(font1);
        BT_Convert = new QPushButton(centralWidget);
        BT_Convert->setObjectName(QStringLiteral("BT_Convert"));
        BT_Convert->setGeometry(QRect(570, 290, 150, 50));
        BT_Convert->setFont(font1);
        pngconverter->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(pngconverter);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 742, 42));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(74);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(menuBar->sizePolicy().hasHeightForWidth());
        menuBar->setSizePolicy(sizePolicy1);
        menuBar->setMinimumSize(QSize(742, 42));
        menuBar->setFont(font);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        pngconverter->setMenuBar(menuBar);
        mainToolBar = new QToolBar(pngconverter);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        pngconverter->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(pngconverter);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        pngconverter->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);

        retranslateUi(pngconverter);

        QMetaObject::connectSlotsByName(pngconverter);
    } // setupUi

    void retranslateUi(QMainWindow *pngconverter)
    {
        pngconverter->setWindowTitle(QApplication::translate("pngconverter", "pngconverter", 0));
        actionQuit->setText(QApplication::translate("pngconverter", "Quit", 0));
        BT_Quit->setText(QApplication::translate("pngconverter", "Quit", 0));
        BT_Viewer->setText(QApplication::translate("pngconverter", "Viewer", 0));
        BT_Convert->setText(QApplication::translate("pngconverter", "Convert", 0));
        menuFile->setTitle(QApplication::translate("pngconverter", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class pngconverter: public Ui_pngconverter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PNGCONVERTER_H
