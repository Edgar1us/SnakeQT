#include "WidgetClick.h"
#include <QDebug>

WidgetClick::WidgetClick(QWidget *parent) : QWidget(parent){
    setupUi(this);

    

}

void WidgetClick::mousePressEvent(QMouseEvent *event){   

    frutaX = event->x();
    frutaY = event->y();

    fX = (float) frutaX;
    fY = (float) frutaY;

    anchoVentana = width();
    altoVentana = height();

    anchoWindow = (float) anchoVentana;
    altoWindow = (float) altoVentana;
    
    float dimensionX = fX / anchoWindow;
    float dimensionY = fY / altoWindow;

    //qDebug() << "Posicion fruta: " << dimensionX << " " << dimensionY;
    emit senyalClickRaton(dimensionX,dimensionY);


}