#include "DInformacionDetallada.h"

DInformacionDetallada::DInformacionDetallada(QVector<QPoint> serpienteRecogida, QWidget * parent) : serpiente(serpienteRecogida), QDialog(parent){
    setupUi(this);

    temp = new QTimer();
    temp->setInterval(200);
    temp->setSingleShot(false);
    temp->start();

    connect(temp, SIGNAL(timeout()),
            this, SLOT(slotMostrarInfo()));
}

QString DInformacionDetallada::getInfoSnake(QVector<QPoint> serp){
    QString info = "Posición X -> " + QString::number(serp.first().x()) + ", " + 
                    "Posición Y -> " + QString::number(serp.first().y());

    return info;
}


void DInformacionDetallada::slotMostrarInfo(){

    list->clear();

    list->addItem(getInfoSnake(serpiente));

}