/********************************************************************************
** Form generated from reading UI file 'mantisviewerihmqt.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANTISVIEWERIHMQT_H
#define UI_MANTISVIEWERIHMQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MantisViewerIHMQtClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox_Projet;
    QLabel *label_2;
    QComboBox *comboBox_Version;
    QTableView *tableView;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MantisViewerIHMQtClass)
    {
        if (MantisViewerIHMQtClass->objectName().isEmpty())
            MantisViewerIHMQtClass->setObjectName(QStringLiteral("MantisViewerIHMQtClass"));
        MantisViewerIHMQtClass->resize(712, 586);
        centralWidget = new QWidget(MantisViewerIHMQtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Onyx"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox_Projet = new QComboBox(centralWidget);
        comboBox_Projet->setObjectName(QStringLiteral("comboBox_Projet"));

        horizontalLayout->addWidget(comboBox_Projet);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBox_Version = new QComboBox(centralWidget);
        comboBox_Version->setObjectName(QStringLiteral("comboBox_Version"));

        horizontalLayout->addWidget(comboBox_Version);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MantisViewerIHMQtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MantisViewerIHMQtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 712, 21));
        MantisViewerIHMQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MantisViewerIHMQtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MantisViewerIHMQtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MantisViewerIHMQtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MantisViewerIHMQtClass->setStatusBar(statusBar);

        retranslateUi(MantisViewerIHMQtClass);
        QObject::connect(comboBox_Projet, SIGNAL(currentTextChanged(QString)), MantisViewerIHMQtClass, SLOT(onModificationProjet(QString)));
        QObject::connect(comboBox_Version, SIGNAL(currentTextChanged(QString)), MantisViewerIHMQtClass, SLOT(onModificationVersion(QString)));

        QMetaObject::connectSlotsByName(MantisViewerIHMQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *MantisViewerIHMQtClass)
    {
        MantisViewerIHMQtClass->setWindowTitle(QApplication::translate("MantisViewerIHMQtClass", "MantisViewerIHMQt", 0));
        label->setText(QApplication::translate("MantisViewerIHMQtClass", "Mon Mantis a moi que j'ai fait toute seule avec mes petites mains", 0));
        label_3->setText(QApplication::translate("MantisViewerIHMQtClass", "Projet", 0));
        label_2->setText(QApplication::translate("MantisViewerIHMQtClass", "Version", 0));
    } // retranslateUi

};

namespace Ui {
    class MantisViewerIHMQtClass: public Ui_MantisViewerIHMQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANTISVIEWERIHMQT_H
