#include "DControlPad.h"

DControlPad::DControlPad(QWidget * parent) : QDialog(parent)
{
    setupUi(this);

    
    connect(btnAbajo,SIGNAL(clicked()),
   	    this, SLOT(slotDireccionAbajo()));   

    connect(btnDerecha,SIGNAL(clicked()),
   	    this, SLOT(slotDireccionDerecha())); 

}

void DControlPad::slotDireccionAbajo(){
    emit cambioDireccion(Direccion::abajo);
}

void DControlPad::slotDireccionDerecha(){
    emit cambioDireccion(Direccion::derecha);
}

