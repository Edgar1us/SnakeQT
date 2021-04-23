/********************************************************************************
** Form generated from reading UI file 'DPuntuaciones.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPUNTUACIONES_H
#define UI_DPUNTUACIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DPuntuaciones
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *lPuntuaciones;
    QTableView *tablaPuntuaciones;
    QPushButton *btnBorrar;

    void setupUi(QDialog *DPuntuaciones)
    {
        if (DPuntuaciones->objectName().isEmpty())
            DPuntuaciones->setObjectName(QStringLiteral("DPuntuaciones"));
        DPuntuaciones->resize(400, 300);
        buttonBox = new QDialogButtonBox(DPuntuaciones);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(60, 270, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lPuntuaciones = new QLabel(DPuntuaciones);
        lPuntuaciones->setObjectName(QStringLiteral("lPuntuaciones"));
        lPuntuaciones->setGeometry(QRect(40, 20, 101, 17));
        tablaPuntuaciones = new QTableView(DPuntuaciones);
        tablaPuntuaciones->setObjectName(QStringLiteral("tablaPuntuaciones"));
        tablaPuntuaciones->setGeometry(QRect(40, 40, 256, 192));
        btnBorrar = new QPushButton(DPuntuaciones);
        btnBorrar->setObjectName(QStringLiteral("btnBorrar"));
        btnBorrar->setGeometry(QRect(40, 240, 251, 25));

        retranslateUi(DPuntuaciones);
        QObject::connect(buttonBox, SIGNAL(accepted()), DPuntuaciones, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DPuntuaciones, SLOT(reject()));

        QMetaObject::connectSlotsByName(DPuntuaciones);
    } // setupUi

    void retranslateUi(QDialog *DPuntuaciones)
    {
        DPuntuaciones->setWindowTitle(QApplication::translate("DPuntuaciones", "Dialog", Q_NULLPTR));
        lPuntuaciones->setText(QApplication::translate("DPuntuaciones", "Puntuaciones", Q_NULLPTR));
        btnBorrar->setText(QApplication::translate("DPuntuaciones", "Borrar Seleccionadas", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DPuntuaciones: public Ui_DPuntuaciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DPUNTUACIONES_H
