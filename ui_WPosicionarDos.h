/********************************************************************************
** Form generated from reading UI file 'WPosicionarDos.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WPOSICIONARDOS_H
#define UI_WPOSICIONARDOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WPosicionarDos
{
public:

    void setupUi(QWidget *WPosicionarDos)
    {
        if (WPosicionarDos->objectName().isEmpty())
            WPosicionarDos->setObjectName(QStringLiteral("WPosicionarDos"));
        WPosicionarDos->resize(400, 300);

        retranslateUi(WPosicionarDos);

        QMetaObject::connectSlotsByName(WPosicionarDos);
    } // setupUi

    void retranslateUi(QWidget *WPosicionarDos)
    {
        WPosicionarDos->setWindowTitle(QApplication::translate("WPosicionarDos", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WPosicionarDos: public Ui_WPosicionarDos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WPOSICIONARDOS_H
