/********************************************************************************
** Form generated from reading UI file 'DListaFrutas.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLISTAFRUTAS_H
#define UI_DLISTAFRUTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollBar>

QT_BEGIN_NAMESPACE

class Ui_DListaFrutas
{
public:
    QFrame *container2;
    QScrollBar *horizontalScrollBar;

    void setupUi(QDialog *DListaFrutas)
    {
        if (DListaFrutas->objectName().isEmpty())
            DListaFrutas->setObjectName(QStringLiteral("DListaFrutas"));
        DListaFrutas->resize(561, 455);
        container2 = new QFrame(DListaFrutas);
        container2->setObjectName(QStringLiteral("container2"));
        container2->setGeometry(QRect(60, 30, 441, 111));
        container2->setFrameShape(QFrame::StyledPanel);
        container2->setFrameShadow(QFrame::Raised);
        horizontalScrollBar = new QScrollBar(container2);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(10, 90, 160, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        retranslateUi(DListaFrutas);

        QMetaObject::connectSlotsByName(DListaFrutas);
    } // setupUi

    void retranslateUi(QDialog *DListaFrutas)
    {
        DListaFrutas->setWindowTitle(QApplication::translate("DListaFrutas", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DListaFrutas: public Ui_DListaFrutas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLISTAFRUTAS_H
