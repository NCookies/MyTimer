/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *DigitalClock;
    QHBoxLayout *horizontalLayout;
    QLineEdit *limitHour;
    QLabel *label;
    QLineEdit *limitMinute;
    QLabel *label_2;
    QLineEdit *limitSecond;
    QVBoxLayout *verticalLayout_4;
    QPushButton *startButton;
    QPushButton *stopButton;
    QPushButton *close;
    QMenuBar *menuBar;
    QMenu *menuFuckingTimer;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(620, 432);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 0, 561, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        DigitalClock = new QLabel(verticalLayoutWidget);
        DigitalClock->setObjectName(QStringLiteral("DigitalClock"));
        QFont font;
        font.setPointSize(40);
        DigitalClock->setFont(font);

        verticalLayout->addWidget(DigitalClock);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        limitHour = new QLineEdit(verticalLayoutWidget);
        limitHour->setObjectName(QStringLiteral("limitHour"));
        limitHour->setCursorPosition(2);
        limitHour->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(limitHour);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        limitMinute = new QLineEdit(verticalLayoutWidget);
        limitMinute->setObjectName(QStringLiteral("limitMinute"));
        limitMinute->setCursorPosition(2);
        limitMinute->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(limitMinute);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        limitSecond = new QLineEdit(verticalLayoutWidget);
        limitSecond->setObjectName(QStringLiteral("limitSecond"));
        limitSecond->setCursorPosition(2);
        limitSecond->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(limitSecond);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        startButton = new QPushButton(verticalLayoutWidget);
        startButton->setObjectName(QStringLiteral("startButton"));

        verticalLayout_4->addWidget(startButton);

        stopButton = new QPushButton(verticalLayoutWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        verticalLayout_4->addWidget(stopButton);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        close = new QPushButton(centralWidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(380, 330, 204, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 620, 25));
        menuFuckingTimer = new QMenu(menuBar);
        menuFuckingTimer->setObjectName(QStringLiteral("menuFuckingTimer"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFuckingTimer->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        DigitalClock->setText(QApplication::translate("MainWindow", "Work Work!!", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        limitHour->setToolTip(QApplication::translate("MainWindow", "hour", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        limitHour->setText(QApplication::translate("MainWindow", "00", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", ":", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        limitMinute->setToolTip(QApplication::translate("MainWindow", "hour", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        limitMinute->setText(QApplication::translate("MainWindow", "00", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", ":", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        limitSecond->setToolTip(QApplication::translate("MainWindow", "hour", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        limitSecond->setText(QApplication::translate("MainWindow", "00", Q_NULLPTR));
        startButton->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        stopButton->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        close->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        menuFuckingTimer->setTitle(QApplication::translate("MainWindow", "FuckingTimer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
