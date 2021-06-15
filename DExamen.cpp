#include "DExamen.h"
#include <QDebug>

DExamen::DExamen(QVector<QPoint> * posiciones, QVector<QString> * teclasR, QWidget * parent) : 
    QDialog(parent), teclas(teclasR), serp(posiciones){
    setupUi(this);

    temp = new QTimer();
    temp->setInterval(50);
    temp->setSingleShot(false);
    temp->start();

    connect(temp, SIGNAL(timeout()),
            this, SLOT(slotMostarDatos()));

}

QString DExamen::getInfoSnake(QPoint posi, QString tecla){
    QString info = "Posición X -> " + QString::number(posi.x()) + ", " + 
                    "Posición Y -> " + QString::number(posi.y()) + ", " + 
                    "tecla -> " + tecla;

    return info;
}

void DExamen::slotMostarDatos(){

    listaExamen->clear();

    for(int i = 0; i < teclas->size(); i++){
        //qDebug() << teclas.at(i);
        //listaExamen->addItem(teclas.at(i));
        listaExamen->addItem(getInfoSnake(serp->at(i), teclas->at(i)));
    }
    //listaExamen->addItem(getInfoSnake(serp));

}