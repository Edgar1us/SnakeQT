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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogComidas
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabComidas;
    QWidget *tab;
    QWidget *tab_2;
    QPushButton *btnTodas;
    QPushButton *btnMenos;
    QPushButton *btnMas;

    void setupUi(QDialog *dialogComidas)
    {
        if (dialogComidas->objectName().isEmpty())
            dialogComidas->setObjectName(QStringLiteral("dialogComidas"));
        dialogComidas->resize(532, 301);
        buttonBox = new QDialogButtonBox(dialogComidas);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(160, 260, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabComidas = new QTabWidget(dialogComidas);
        tabComidas->setObjectName(QStringLiteral("tabComidas"));
        tabComidas->setGeometry(QRect(40, 10, 461, 211));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabComidas->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabComidas->addTab(tab_2, QString());
        btnTodas = new QPushButton(dialogComidas);
        btnTodas->setObjectName(QStringLiteral("btnTodas"));
        btnTodas->setGeometry(QRect(40, 240, 121, 25));
        btnMenos = new QPushButton(dialogComidas);
        btnMenos->setObjectName(QStringLiteral("btnMenos"));
        btnMenos->setGeometry(QRect(170, 240, 51, 31));
        btnMas = new QPushButton(dialogComidas);
        btnMas->setObjectName(QStringLiteral("btnMas"));
        btnMas->setGeometry(QRect(230, 240, 51, 31));

        retranslateUi(dialogComidas);
        QObject::connect(buttonBox, SIGNAL(accepted()), dialogComidas, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dialogComidas, SLOT(reject()));

        QMetaObject::connectSlotsByName(dialogComidas);
    } // setupUi

    void retranslateUi(QDialog *dialogComidas)
    {
        dialogComidas->setWindowTitle(QApplication::translate("dialogComidas", "Dialog", Q_NULLPTR));
        tabComidas->setTabText(tabComidas->indexOf(tab), QApplication::translate("dialogComidas", "Tab 1", Q_NULLPTR));
        tabComidas->setTabText(tabComidas->indexOf(tab_2), QApplication::translate("dialogComidas", "Tab 2", Q_NULLPTR));
        btnTodas->setText(QApplication::translate("dialogComidas", "Seleccionar todas", Q_NULLPTR));
        btnMenos->setText(QApplication::translate("dialogComidas", "-", Q_NULLPTR));
        btnMas->setText(QApplication::translate("dialogComidas", "+", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialogComidas: public Ui_dialogComidas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCOMIDAS_H
