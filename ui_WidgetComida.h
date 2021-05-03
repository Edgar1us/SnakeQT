/********************************************************************************
** Form generated from reading UI file 'WidgetComida.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETCOMIDA_H
#define UI_WIDGETCOMIDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widgetComida
{
public:
    QFrame *frame;
    QLabel *lImagen;
    QPushButton *btnCargarImagen;
    QCheckBox *cSeleccionable;
    QLabel *label_2;
    QSpinBox *spinBox;

    void setupUi(QWidget *widgetComida)
    {
        if (widgetComida->objectName().isEmpty())
            widgetComida->setObjectName(QStringLiteral("widgetComida"));
        widgetComida->resize(400, 300);
        frame = new QFrame(widgetComida);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 50, 201, 181));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lImagen = new QLabel(frame);
        lImagen->setObjectName(QStringLiteral("lImagen"));
        lImagen->setGeometry(QRect(10, 10, 181, 161));
        btnCargarImagen = new QPushButton(widgetComida);
        btnCargarImagen->setObjectName(QStringLiteral("btnCargarImagen"));
        btnCargarImagen->setGeometry(QRect(240, 50, 101, 25));
        cSeleccionable = new QCheckBox(widgetComida);
        cSeleccionable->setObjectName(QStringLiteral("cSeleccionable"));
        cSeleccionable->setGeometry(QRect(240, 80, 121, 23));
        label_2 = new QLabel(widgetComida);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 180, 67, 17));
        spinBox = new QSpinBox(widgetComida);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(240, 200, 91, 26));

        retranslateUi(widgetComida);

        QMetaObject::connectSlotsByName(widgetComida);
    } // setupUi

    void retranslateUi(QWidget *widgetComida)
    {
        widgetComida->setWindowTitle(QApplication::translate("widgetComida", "Form", Q_NULLPTR));
        lImagen->setText(QApplication::translate("widgetComida", "etiqueta", Q_NULLPTR));
        btnCargarImagen->setText(QApplication::translate("widgetComida", "Cargar Imagen", Q_NULLPTR));
        cSeleccionable->setText(QApplication::translate("widgetComida", "Seleccionable", Q_NULLPTR));
        label_2->setText(QApplication::translate("widgetComida", "Cuadritos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class widgetComida: public Ui_widgetComida {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETCOMIDA_H
