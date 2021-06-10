/********************************************************************************
** Form generated from reading UI file 'DPosicionarDos.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPOSICIONARDOS_H
#define UI_DPOSICIONARDOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DPosicionarDos
{
public:
    QFrame *contenedorDos;

    void setupUi(QDialog *DPosicionarDos)
    {
        if (DPosicionarDos->objectName().isEmpty())
            DPosicionarDos->setObjectName(QStringLiteral("DPosicionarDos"));
        DPosicionarDos->resize(600, 425);
        contenedorDos = new QFrame(DPosicionarDos);
        contenedorDos->setObjectName(QStringLiteral("contenedorDos"));
        contenedorDos->setGeometry(QRect(10, 20, 581, 391));
        contenedorDos->setFrameShape(QFrame::StyledPanel);
        contenedorDos->setFrameShadow(QFrame::Raised);

        retranslateUi(DPosicionarDos);

        QMetaObject::connectSlotsByName(DPosicionarDos);
    } // setupUi

    void retranslateUi(QDialog *DPosicionarDos)
    {
        DPosicionarDos->setWindowTitle(QApplication::translate("DPosicionarDos", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DPosicionarDos: public Ui_DPosicionarDos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DPOSICIONARDOS_H
