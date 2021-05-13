/********************************************************************************
** Form generated from reading UI file 'DComidas.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCOMIDAS_H
#define UI_DCOMIDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>

QT_BEGIN_NAMESPACE

class Ui_DComidas
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabComidas;
    QPushButton *btnTodas;
    QPushButton *btnMenos;
    QPushButton *btnMas;

    void setupUi(QDialog *DComidas)
    {
        if (DComidas->objectName().isEmpty())
            DComidas->setObjectName(QStringLiteral("DComidas"));
        DComidas->resize(532, 428);
        buttonBox = new QDialogButtonBox(DComidas);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(150, 390, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabComidas = new QTabWidget(DComidas);
        tabComidas->setObjectName(QStringLiteral("tabComidas"));
        tabComidas->setGeometry(QRect(40, 10, 461, 341));
        btnTodas = new QPushButton(DComidas);
        btnTodas->setObjectName(QStringLiteral("btnTodas"));
        btnTodas->setGeometry(QRect(40, 360, 121, 25));
        btnMenos = new QPushButton(DComidas);
        btnMenos->setObjectName(QStringLiteral("btnMenos"));
        btnMenos->setGeometry(QRect(170, 360, 51, 31));
        btnMas = new QPushButton(DComidas);
        btnMas->setObjectName(QStringLiteral("btnMas"));
        btnMas->setGeometry(QRect(230, 360, 51, 31));

        retranslateUi(DComidas);
        QObject::connect(buttonBox, SIGNAL(accepted()), DComidas, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DComidas, SLOT(reject()));

        QMetaObject::connectSlotsByName(DComidas);
    } // setupUi

    void retranslateUi(QDialog *DComidas)
    {
        DComidas->setWindowTitle(QApplication::translate("DComidas", "Dialog", Q_NULLPTR));
        btnTodas->setText(QApplication::translate("DComidas", "Seleccionar todas", Q_NULLPTR));
        btnMenos->setText(QApplication::translate("DComidas", "-", Q_NULLPTR));
        btnMas->setText(QApplication::translate("DComidas", "+", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DComidas: public Ui_DComidas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCOMIDAS_H
