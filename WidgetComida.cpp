#include "WidgetComida.h"
#include <QPixmap>

WidgetComida::WidgetComida( Comida c, QWidget *parent) : comida(c), QWidget(parent){
    setupUi(this);    

    /*QPixmap pixmap;
    pixmap.convertFromImage(comida.imagen);
    lImagen->setPixmap(pixmap);*/
}

