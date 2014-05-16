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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pngconverter
{
public:
    QAction *actionQuit;
    QAction *actionConvert;
    QAction *actionViewer;
    QWidget *centralWidget;
    QPushButton *BT_Quit;
    QPushButton *BT_Viewer;
    QPushButton *BT_Convert;
    QPushButton *BT_Choose_Input_1;
    QPushButton *BT_Choose_Input_2;
    QTextEdit *TE_Input_1;
    QLabel *LB_InputFile_1;
    QLabel *LB_InputFile_2;
    QTextEdit *TE_Input_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *LB_Direction;
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
        actionConvert = new QAction(pngconverter);
        actionConvert->setObjectName(QStringLiteral("actionConvert"));
        actionConvert->setFont(font);
        actionViewer = new QAction(pngconverter);
        actionViewer->setObjectName(QStringLiteral("actionViewer"));
        actionViewer->setFont(font);
        centralWidget = new QWidget(pngconverter);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BT_Quit = new QPushButton(centralWidget);
        BT_Quit->setObjectName(QStringLiteral("BT_Quit"));
        BT_Quit->setGeometry(QRect(60, 430, 150, 50));
        QFont font1;
        font1.setPointSize(14);
        BT_Quit->setFont(font1);
        BT_Viewer = new QPushButton(centralWidget);
        BT_Viewer->setObjectName(QStringLiteral("BT_Viewer"));
        BT_Viewer->setGeometry(QRect(300, 430, 150, 50));
        BT_Viewer->setFont(font1);
        BT_Convert = new QPushButton(centralWidget);
        BT_Convert->setObjectName(QStringLiteral("BT_Convert"));
        BT_Convert->setGeometry(QRect(530, 430, 150, 50));
        BT_Convert->setFont(font1);
        BT_Choose_Input_1 = new QPushButton(centralWidget);
        BT_Choose_Input_1->setObjectName(QStringLiteral("BT_Choose_Input_1"));
        BT_Choose_Input_1->setGeometry(QRect(370, 10, 130, 50));
        QFont font2;
        font2.setPointSize(15);
        BT_Choose_Input_1->setFont(font2);
        BT_Choose_Input_2 = new QPushButton(centralWidget);
        BT_Choose_Input_2->setObjectName(QStringLiteral("BT_Choose_Input_2"));
        BT_Choose_Input_2->setGeometry(QRect(370, 210, 130, 50));
        BT_Choose_Input_2->setFont(font2);
        TE_Input_1 = new QTextEdit(centralWidget);
        TE_Input_1->setObjectName(QStringLiteral("TE_Input_1"));
        TE_Input_1->setGeometry(QRect(50, 90, 471, 81));
        LB_InputFile_1 = new QLabel(centralWidget);
        LB_InputFile_1->setObjectName(QStringLiteral("LB_InputFile_1"));
        LB_InputFile_1->setGeometry(QRect(100, 20, 201, 41));
        LB_InputFile_1->setFont(font1);
        LB_InputFile_1->setAlignment(Qt::AlignCenter);
        LB_InputFile_2 = new QLabel(centralWidget);
        LB_InputFile_2->setObjectName(QStringLiteral("LB_InputFile_2"));
        LB_InputFile_2->setGeometry(QRect(90, 220, 211, 31));
        LB_InputFile_2->setFont(font1);
        LB_InputFile_2->setAlignment(Qt::AlignCenter);
        TE_Input_2 = new QTextEdit(centralWidget);
        TE_Input_2->setObjectName(QStringLiteral("TE_Input_2"));
        TE_Input_2->setGeometry(QRect(50, 280, 471, 91));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(570, 110, 125, 22));
        radioButton->setFont(font2);
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(570, 190, 125, 22));
        radioButton_2->setFont(font2);
        LB_Direction = new QLabel(centralWidget);
        LB_Direction->setObjectName(QStringLiteral("LB_Direction"));
        LB_Direction->setGeometry(QRect(580, 30, 121, 41));
        LB_Direction->setFont(font2);
        LB_Direction->setAlignment(Qt::AlignCenter);
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
        menuFile->addAction(actionConvert);
        menuFile->addAction(actionViewer);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(pngconverter);

        QMetaObject::connectSlotsByName(pngconverter);
    } // setupUi

    void retranslateUi(QMainWindow *pngconverter)
    {
        pngconverter->setWindowTitle(QApplication::translate("pngconverter", "pngconverter", 0));
        actionQuit->setText(QApplication::translate("pngconverter", "Quit", 0));
        actionConvert->setText(QApplication::translate("pngconverter", "Convert", 0));
        actionViewer->setText(QApplication::translate("pngconverter", "Viewer", 0));
        BT_Quit->setText(QApplication::translate("pngconverter", "Quit", 0));
        BT_Viewer->setText(QApplication::translate("pngconverter", "Viewer", 0));
        BT_Convert->setText(QApplication::translate("pngconverter", "Convert", 0));
        BT_Choose_Input_1->setText(QApplication::translate("pngconverter", "Choose", 0));
        BT_Choose_Input_2->setText(QApplication::translate("pngconverter", "Choose", 0));
        LB_InputFile_1->setText(QApplication::translate("pngconverter", "Input file 1", 0));
        LB_InputFile_2->setText(QApplication::translate("pngconverter", "Input file 2", 0));
        radioButton->setText(QApplication::translate("pngconverter", "Vertical", 0));
        radioButton_2->setText(QApplication::translate("pngconverter", "Horizontal", 0));
        LB_Direction->setText(QApplication::translate("pngconverter", "Direction", 0));
        menuFile->setTitle(QApplication::translate("pngconverter", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class pngconverter: public Ui_pngconverter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PNGCONVERTER_H
