/********************************************************************************
** Form generated from reading UI file 'DExamen.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEXAMEN_H
#define UI_DEXAMEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_DExamen
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *listaExamen;

    void setupUi(QDialog *DExamen)
    {
        if (DExamen->objectName().isEmpty())
            DExamen->setObjectName(QStringLiteral("DExamen"));
        DExamen->resize(534, 420);
        buttonBox = new QDialogButtonBox(DExamen);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 350, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        listaExamen = new QListWidget(DExamen);
        listaExamen->setObjectName(QStringLiteral("listaExamen"));
        listaExamen->setGeometry(QRect(50, 20, 431, 301));

        retranslateUi(DExamen);
        QObject::connect(buttonBox, SIGNAL(accepted()), DExamen, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DExamen, SLOT(reject()));

        QMetaObject::connectSlotsByName(DExamen);
    } // setupUi

    void retranslateUi(QDialog *DExamen)
    {
        DExamen->setWindowTitle(QApplication::translate("DExamen", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DExamen: public Ui_DExamen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEXAMEN_H
