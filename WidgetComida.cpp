#include "WidgetComida.h"
#include <QPixmap>

WidgetComida::WidgetComida( Comida c, QWidget *parent) : comida(c), QWidget(parent){
    setupUi(this);    

    //TRANSFORMAR QLABEL EN IMAGE PARA PODER PONER UNA IMAGEN EN CADA QWIDGET
    QPixmap pixmap;
    pixmap.convertFromImage(comida.imagen);
    lImagen->setPixmap(pixmap);

    
}

