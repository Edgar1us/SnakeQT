/********************************************************************************
** Form generated from reading UI file 'DInformacionDetallada.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DINFORMACIONDETALLADA_H
#define UI_DINFORMACIONDETALLADA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_DInformacionDetallada
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *list;

    void setupUi(QDialog *DInformacionDetallada)
    {
        if (DInformacionDetallada->objectName().isEmpty())
            DInformacionDetallada->setObjectName(QStringLiteral("DInformacionDetallada"));
        DInformacionDetallada->resize(573, 382);
        buttonBox = new QDialogButtonBox(DInformacionDetallada);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 330, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        list = new QListWidget(DInformacionDetallada);
        list->setObjectName(QStringLiteral("list"));
        list->setGeometry(QRect(30, 30, 521, 231));

        retranslateUi(DInformacionDetallada);
        QObject::connect(buttonBox, SIGNAL(accepted()), DInformacionDetallada, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DInformacionDetallada, SLOT(reject()));

        QMetaObject::connectSlotsByName(DInformacionDetallada);
    } // setupUi

    void retranslateUi(QDialog *DInformacionDetallada)
    {
        DInformacionDetallada->setWindowTitle(QApplication::translate("DInformacionDetallada", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DInformacionDetallada: public Ui_DInformacionDetallada {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DINFORMACIONDETALLADA_H
