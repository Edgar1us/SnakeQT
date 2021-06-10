/********************************************************************************
** Form generated from reading UI file 'DPosicionFruta.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPOSICIONFRUTA_H
#define UI_DPOSICIONFRUTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DPosicionFruta
{
public:
    QFrame *contenedor;

    void setupUi(QDialog *DPosicionFruta)
    {
        if (DPosicionFruta->objectName().isEmpty())
            DPosicionFruta->setObjectName(QStringLiteral("DPosicionFruta"));
        DPosicionFruta->resize(518, 459);
        contenedor = new QFrame(DPosicionFruta);
        contenedor->setObjectName(QStringLiteral("contenedor"));
        contenedor->setGeometry(QRect(29, 19, 471, 431));
        contenedor->setFrameShape(QFrame::StyledPanel);
        contenedor->setFrameShadow(QFrame::Raised);

        retranslateUi(DPosicionFruta);

        QMetaObject::connectSlotsByName(DPosicionFruta);
    } // setupUi

    void retranslateUi(QDialog *DPosicionFruta)
    {
        DPosicionFruta->setWindowTitle(QApplication::translate("DPosicionFruta", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DPosicionFruta: public Ui_DPosicionFruta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DPOSICIONFRUTA_H
