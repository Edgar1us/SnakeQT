/********************************************************************************
** Form generated from reading UI file 'WidgetClick.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETCLICK_H
#define UI_WIDGETCLICK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetClick
{
public:

    void setupUi(QWidget *WidgetClick)
    {
        if (WidgetClick->objectName().isEmpty())
            WidgetClick->setObjectName(QStringLiteral("WidgetClick"));
        WidgetClick->resize(400, 300);

        retranslateUi(WidgetClick);

        QMetaObject::connectSlotsByName(WidgetClick);
    } // setupUi

    void retranslateUi(QWidget *WidgetClick)
    {
        WidgetClick->setWindowTitle(QApplication::translate("WidgetClick", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WidgetClick: public Ui_WidgetClick {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETCLICK_H
