#include "WPosicionarDos.h"

WPosicionarDos::WPosicionarDos(QWidget * parent) : QWidget(parent){
    setupUi(this);
}

void WPosicionarDos::mousePressEvent(QMouseEvent * event){

    int frutaX = event->x();
    int frutaY = event->y();

    emit enviarClickRaton(frutaX, frutaY);

}