#include "DInformacion.h"
#include <QDebug>

DInformacion::DInformacion(int tamanyoSerpiente, QWidget * parent) : QDialog(parent){
    setupUi(this);

    tamSerpiente = tamanyoSerpiente;

    int x = width();
    int y = height();

    QString tamVentana = QString::number(x) + " x " + QString::number(y);

    //qDebug() << tamSerpiente;

    nTamVen->setText(QString(tamVentana));
    nTamSerp->setText(QString::number(tamSerpiente));
}