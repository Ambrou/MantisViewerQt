/********************************************************************************
** Form generated from reading UI file 'mantisviewerihm_connexion.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANTISVIEWERIHM_CONNEXION_H
#define UI_MANTISVIEWERIHM_CONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Connexiondialog
{
public:
    QFormLayout *formLayout;
    QLabel *label__user;
    QLineEdit *lineEdit_user;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Connexiondialog)
    {
        if (Connexiondialog->objectName().isEmpty())
            Connexiondialog->setObjectName(QStringLiteral("Connexiondialog"));
        Connexiondialog->resize(241, 94);
        formLayout = new QFormLayout(Connexiondialog);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label__user = new QLabel(Connexiondialog);
        label__user->setObjectName(QStringLiteral("label__user"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label__user);

        lineEdit_user = new QLineEdit(Connexiondialog);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));
        lineEdit_user->setEchoMode(QLineEdit::Normal);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_user);

        label_password = new QLabel(Connexiondialog);
        label_password->setObjectName(QStringLiteral("label_password"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_password);

        lineEdit_password = new QLineEdit(Connexiondialog);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_password);

        buttonBox = new QDialogButtonBox(Connexiondialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(2, QFormLayout::FieldRole, buttonBox);


        retranslateUi(Connexiondialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Connexiondialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Connexiondialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Connexiondialog);
    } // setupUi

    void retranslateUi(QDialog *Connexiondialog)
    {
        Connexiondialog->setWindowTitle(QApplication::translate("Connexiondialog", "Connexion", 0));
        label__user->setText(QApplication::translate("Connexiondialog", "User", 0));
        label_password->setText(QApplication::translate("Connexiondialog", "Password", 0));
    } // retranslateUi

};

namespace Ui {
    class Connexiondialog: public Ui_Connexiondialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANTISVIEWERIHM_CONNEXION_H
