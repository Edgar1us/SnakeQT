/********************************************************************************
** Form generated from reading UI file 'WidgetImagenFruta.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETIMAGENFRUTA_H
#define UI_WIDGETIMAGENFRUTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetImagenFruta
{
public:
    QLabel *lImg;

    void setupUi(QWidget *WidgetImagenFruta)
    {
        if (WidgetImagenFruta->objectName().isEmpty())
            WidgetImagenFruta->setObjectName(QStringLiteral("WidgetImagenFruta"));
        WidgetImagenFruta->resize(400, 300);
        lImg = new QLabel(WidgetImagenFruta);
        lImg->setObjectName(QStringLiteral("lImg"));
        lImg->setGeometry(QRect(160, 120, 67, 17));

        retranslateUi(WidgetImagenFruta);

        QMetaObject::connectSlotsByName(WidgetImagenFruta);
    } // setupUi

    void retranslateUi(QWidget *WidgetImagenFruta)
    {
        WidgetImagenFruta->setWindowTitle(QApplication::translate("WidgetImagenFruta", "Form", Q_NULLPTR));
        lImg->setText(QApplication::translate("WidgetImagenFruta", "imagen", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WidgetImagenFruta: public Ui_WidgetImagenFruta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETIMAGENFRUTA_H
