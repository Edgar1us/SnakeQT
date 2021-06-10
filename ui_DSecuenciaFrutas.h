/********************************************************************************
** Form generated from reading UI file 'DSecuenciaFrutas.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DSECUENCIAFRUTAS_H
#define UI_DSECUENCIAFRUTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollBar>

QT_BEGIN_NAMESPACE

class Ui_DSecuenciaFrutas
{
public:
    QFrame *container;
    QScrollBar *cambiaFruta;

    void setupUi(QDialog *DSecuenciaFrutas)
    {
        if (DSecuenciaFrutas->objectName().isEmpty())
            DSecuenciaFrutas->setObjectName(QStringLiteral("DSecuenciaFrutas"));
        DSecuenciaFrutas->resize(439, 407);
        container = new QFrame(DSecuenciaFrutas);
        container->setObjectName(QStringLiteral("container"));
        container->setGeometry(QRect(30, 30, 381, 181));
        container->setFrameShape(QFrame::StyledPanel);
        container->setFrameShadow(QFrame::Raised);
        cambiaFruta = new QScrollBar(container);
        cambiaFruta->setObjectName(QStringLiteral("cambiaFruta"));
        cambiaFruta->setGeometry(QRect(40, 160, 160, 16));
        cambiaFruta->setOrientation(Qt::Horizontal);

        retranslateUi(DSecuenciaFrutas);

        QMetaObject::connectSlotsByName(DSecuenciaFrutas);
    } // setupUi

    void retranslateUi(QDialog *DSecuenciaFrutas)
    {
        DSecuenciaFrutas->setWindowTitle(QApplication::translate("DSecuenciaFrutas", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DSecuenciaFrutas: public Ui_DSecuenciaFrutas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DSECUENCIAFRUTAS_H
