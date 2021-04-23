/********************************************************************************
** Form generated from reading UI file 'DControlPad.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCONTROLPAD_H
#define UI_DCONTROLPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_DControlPad
{
public:
    QToolButton *btnArriba;
    QToolButton *btnAbajo;
    QToolButton *btnDerecha;
    QToolButton *btnIzquierda;

    void setupUi(QDialog *DControlPad)
    {
        if (DControlPad->objectName().isEmpty())
            DControlPad->setObjectName(QStringLiteral("DControlPad"));
        DControlPad->resize(400, 300);
        btnArriba = new QToolButton(DControlPad);
        btnArriba->setObjectName(QStringLiteral("btnArriba"));
        btnArriba->setGeometry(QRect(160, 60, 61, 51));
        btnArriba->setIconSize(QSize(16, 16));
        btnArriba->setAutoRaise(false);
        btnArriba->setArrowType(Qt::UpArrow);
        btnAbajo = new QToolButton(DControlPad);
        btnAbajo->setObjectName(QStringLiteral("btnAbajo"));
        btnAbajo->setGeometry(QRect(160, 160, 61, 51));
        btnAbajo->setArrowType(Qt::DownArrow);
        btnDerecha = new QToolButton(DControlPad);
        btnDerecha->setObjectName(QStringLiteral("btnDerecha"));
        btnDerecha->setGeometry(QRect(220, 110, 61, 51));
        btnDerecha->setArrowType(Qt::RightArrow);
        btnIzquierda = new QToolButton(DControlPad);
        btnIzquierda->setObjectName(QStringLiteral("btnIzquierda"));
        btnIzquierda->setGeometry(QRect(100, 110, 61, 51));
        btnIzquierda->setArrowType(Qt::LeftArrow);

        retranslateUi(DControlPad);

        QMetaObject::connectSlotsByName(DControlPad);
    } // setupUi

    void retranslateUi(QDialog *DControlPad)
    {
        DControlPad->setWindowTitle(QApplication::translate("DControlPad", "Dialog", Q_NULLPTR));
        btnArriba->setText(QString());
        btnAbajo->setText(QString());
        btnDerecha->setText(QString());
        btnIzquierda->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DControlPad: public Ui_DControlPad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCONTROLPAD_H
