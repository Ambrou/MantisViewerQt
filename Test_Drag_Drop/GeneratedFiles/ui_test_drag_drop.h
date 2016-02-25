/********************************************************************************
** Form generated from reading UI file 'test_drag_drop.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_DRAG_DROP_H
#define UI_TEST_DRAG_DROP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test_Drag_DropClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test_Drag_DropClass)
    {
        if (Test_Drag_DropClass->objectName().isEmpty())
            Test_Drag_DropClass->setObjectName(QStringLiteral("Test_Drag_DropClass"));
        Test_Drag_DropClass->resize(600, 400);
        centralWidget = new QWidget(Test_Drag_DropClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        Test_Drag_DropClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test_Drag_DropClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        Test_Drag_DropClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test_Drag_DropClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test_Drag_DropClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test_Drag_DropClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test_Drag_DropClass->setStatusBar(statusBar);

        retranslateUi(Test_Drag_DropClass);

        QMetaObject::connectSlotsByName(Test_Drag_DropClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test_Drag_DropClass)
    {
        Test_Drag_DropClass->setWindowTitle(QApplication::translate("Test_Drag_DropClass", "Test_Drag_Drop", 0));
    } // retranslateUi

};

namespace Ui {
    class Test_Drag_DropClass: public Ui_Test_Drag_DropClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_DRAG_DROP_H
