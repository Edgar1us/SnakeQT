/********************************************************************************
** Form generated from reading UI file 'DExamenDibujo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEXAMENDIBUJO_H
#define UI_DEXAMENDIBUJO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_DExamenDibujo
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *listaExamen2;

    void setupUi(QDialog *DExamenDibujo)
    {
        if (DExamenDibujo->objectName().isEmpty())
            DExamenDibujo->setObjectName(QStringLiteral("DExamenDibujo"));
        DExamenDibujo->resize(515, 428);
        buttonBox = new QDialogButtonBox(DExamenDibujo);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(0, 370, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        listaExamen2 = new QListWidget(DExamenDibujo);
        listaExamen2->setObjectName(QStringLiteral("listaExamen2"));
        listaExamen2->setGeometry(QRect(60, 30, 391, 261));

        retranslateUi(DExamenDibujo);
        QObject::connect(buttonBox, SIGNAL(accepted()), DExamenDibujo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DExamenDibujo, SLOT(reject()));

        QMetaObject::connectSlotsByName(DExamenDibujo);
    } // setupUi

    void retranslateUi(QDialog *DExamenDibujo)
    {
        DExamenDibujo->setWindowTitle(QApplication::translate("DExamenDibujo", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DExamenDibujo: public Ui_DExamenDibujo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEXAMENDIBUJO_H
