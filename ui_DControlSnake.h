/********************************************************************************
** Form generated from reading UI file 'DControlSnake.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCONTROLSNAKE_H
#define UI_DCONTROLSNAKE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_DControlSnake
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *btnParar;
    QPushButton *btnReanudar;
    QToolButton *btnMas;
    QToolButton *btnMenos;
    QLabel *label;

    void setupUi(QDialog *DControlSnake)
    {
        if (DControlSnake->objectName().isEmpty())
            DControlSnake->setObjectName(QStringLiteral("DControlSnake"));
        DControlSnake->resize(513, 422);
        buttonBox = new QDialogButtonBox(DControlSnake);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(160, 390, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        btnParar = new QPushButton(DControlSnake);
        btnParar->setObjectName(QStringLiteral("btnParar"));
        btnParar->setGeometry(QRect(200, 120, 89, 25));
        btnReanudar = new QPushButton(DControlSnake);
        btnReanudar->setObjectName(QStringLiteral("btnReanudar"));
        btnReanudar->setGeometry(QRect(200, 170, 89, 25));
        btnMas = new QToolButton(DControlSnake);
        btnMas->setObjectName(QStringLiteral("btnMas"));
        btnMas->setGeometry(QRect(290, 240, 26, 24));
        btnMenos = new QToolButton(DControlSnake);
        btnMenos->setObjectName(QStringLiteral("btnMenos"));
        btnMenos->setGeometry(QRect(170, 240, 26, 24));
        btnMenos->setArrowType(Qt::NoArrow);
        label = new QLabel(DControlSnake);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 240, 67, 17));

        retranslateUi(DControlSnake);
        QObject::connect(buttonBox, SIGNAL(accepted()), DControlSnake, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DControlSnake, SLOT(reject()));

        QMetaObject::connectSlotsByName(DControlSnake);
    } // setupUi

    void retranslateUi(QDialog *DControlSnake)
    {
        DControlSnake->setWindowTitle(QApplication::translate("DControlSnake", "Dialog", Q_NULLPTR));
        btnParar->setText(QApplication::translate("DControlSnake", "Parar", Q_NULLPTR));
        btnReanudar->setText(QApplication::translate("DControlSnake", "Reanudar", Q_NULLPTR));
        btnMas->setText(QApplication::translate("DControlSnake", "+", Q_NULLPTR));
        btnMenos->setText(QApplication::translate("DControlSnake", "-", Q_NULLPTR));
        label->setText(QApplication::translate("DControlSnake", "Velocidad", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DControlSnake: public Ui_DControlSnake {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCONTROLSNAKE_H
