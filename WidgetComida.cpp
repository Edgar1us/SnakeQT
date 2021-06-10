#include "WidgetComida.h"
#include <QPixmap>
#include <QDebug>
#include <QFileDialog>

WidgetComida::WidgetComida( Comida * c, QWidget *parent) : comida(c), QWidget(parent){
    setupUi(this);    

    //TRANSFORMAR QLABEL EN IMAGE PARA PODER PONER UNA IMAGEN EN CADA QWIDGET
    comida = c;
    QPixmap pixmap;
    pixmap.convertFromImage(comida->imagen);
    lImagen->setPixmap(pixmap);

    spinBoxAlimento->setValue(comida->alimento);

    cSeleccionable->setChecked(comida->seleccionable);
    
    int valor = spinBoxAlimento->value();

    connect(spinBoxAlimento,SIGNAL(valueChanged(int)),
   	    this, SLOT(slotSpin(int)));

    connect(cSeleccionable,SIGNAL(stateChanged(int)),
   	    this, SLOT(slotSeleccionable(int)));

    connect(btnCargarImagen,SIGNAL(clicked()),
   	    this, SLOT(slotCargarImagen()));

    

}

void WidgetComida::slotSpin(int valor){

    comida->alimento=valor;

}

void WidgetComida::slotSeleccionable(int estado){

    if(cSeleccionable->isChecked())
        comida->seleccionable=true;
    else{
        comida->seleccionable=false;
    }

}

void WidgetComida::slotCargarImagen(){

    QString rutaFruta = QFileDialog::getOpenFileName(this, tr("Open File"), "./imagenes", 
    tr("Images (*.png)"));

    comida->imagen = QImage(rutaFruta);
    QPixmap pixmap;
    pixmap.convertFromImage(comida->imagen);
    lImagen->setPixmap(pixmap);


}

