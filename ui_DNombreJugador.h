/********************************************************************************
** Form generated from reading UI file 'DNombreJugador.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DNOMBREJUGADOR_H
#define UI_DNOMBREJUGADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DNombreJugador
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *lPuntucion;
    QLabel *lJugador;
    QLineEdit *edtJugador;
    QLineEdit *edtPuntuacion;

    void setupUi(QDialog *DNombreJugador)
    {
        if (DNombreJugador->objectName().isEmpty())
            DNombreJugador->setObjectName(QStringLiteral("DNombreJugador"));
        DNombreJugador->resize(400, 300);
        buttonBox = new QDialogButtonBox(DNombreJugador);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lPuntucion = new QLabel(DNombreJugador);
        lPuntucion->setObjectName(QStringLiteral("lPuntucion"));
        lPuntucion->setGeometry(QRect(50, 70, 81, 17));
        lJugador = new QLabel(DNombreJugador);
        lJugador->setObjectName(QStringLiteral("lJugador"));
        lJugador->setGeometry(QRect(50, 110, 81, 17));
        edtJugador = new QLineEdit(DNombreJugador);
        edtJugador->setObjectName(QStringLiteral("edtJugador"));
        edtJugador->setGeometry(QRect(140, 110, 113, 25));
        edtPuntuacion = new QLineEdit(DNombreJugador);
        edtPuntuacion->setObjectName(QStringLiteral("edtPuntuacion"));
        edtPuntuacion->setGeometry(QRect(140, 70, 113, 25));

        retranslateUi(DNombreJugador);
        QObject::connect(buttonBox, SIGNAL(accepted()), DNombreJugador, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DNombreJugador, SLOT(reject()));

        QMetaObject::connectSlotsByName(DNombreJugador);
    } // setupUi

    void retranslateUi(QDialog *DNombreJugador)
    {
        DNombreJugador->setWindowTitle(QApplication::translate("DNombreJugador", "Dialog", Q_NULLPTR));
        lPuntucion->setText(QApplication::translate("DNombreJugador", "Puntuaci\303\263n", Q_NULLPTR));
        lJugador->setText(QApplication::translate("DNombreJugador", "Jugador", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DNombreJugador: public Ui_DNombreJugador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DNOMBREJUGADOR_H
