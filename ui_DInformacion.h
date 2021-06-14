/********************************************************************************
** Form generated from reading UI file 'DInformacion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DINFORMACION_H
#define UI_DINFORMACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DInformacion
{
public:
    QLabel *lTamSerp;
    QLabel *lTamVen;
    QLabel *nTamSerp;
    QLabel *nTamVen;

    void setupUi(QDialog *DInformacion)
    {
        if (DInformacion->objectName().isEmpty())
            DInformacion->setObjectName(QStringLiteral("DInformacion"));
        DInformacion->resize(318, 272);
        lTamSerp = new QLabel(DInformacion);
        lTamSerp->setObjectName(QStringLiteral("lTamSerp"));
        lTamSerp->setGeometry(QRect(16, 110, 161, 20));
        lTamVen = new QLabel(DInformacion);
        lTamVen->setObjectName(QStringLiteral("lTamVen"));
        lTamVen->setGeometry(QRect(16, 150, 161, 20));
        nTamSerp = new QLabel(DInformacion);
        nTamSerp->setObjectName(QStringLiteral("nTamSerp"));
        nTamSerp->setGeometry(QRect(190, 110, 67, 17));
        nTamVen = new QLabel(DInformacion);
        nTamVen->setObjectName(QStringLiteral("nTamVen"));
        nTamVen->setGeometry(QRect(190, 150, 67, 17));

        retranslateUi(DInformacion);

        QMetaObject::connectSlotsByName(DInformacion);
    } // setupUi

    void retranslateUi(QDialog *DInformacion)
    {
        DInformacion->setWindowTitle(QApplication::translate("DInformacion", "Dialog", Q_NULLPTR));
        lTamSerp->setText(QApplication::translate("DInformacion", "Tama\303\261o de la serpiente", Q_NULLPTR));
        lTamVen->setText(QApplication::translate("DInformacion", "Tama\303\261o de la Ventana", Q_NULLPTR));
        nTamSerp->setText(QString());
        nTamVen->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DInformacion: public Ui_DInformacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DINFORMACION_H
