#include "DComidas.h"
#include <QDebug>

DComidas::DComidas(QVector<Comida*> * comidas, QWidget *parent) : pComidas(comidas), QDialog(parent){
    setupUi(this);

    for (int i=0; i< pComidas->size(); i++)
        tabComidas->addTab(new WidgetComida(comidas->at(i)),QString::number(i));

    connect(btnTodas,SIGNAL(clicked()),
   	    this, SLOT(slotTodasSeleccionadas()));
    connect(btnMenos,SIGNAL(clicked()),
   	    this, SLOT(slotEliminarComidas()));
}


void DComidas::slotTodasSeleccionadas(){

    for (int i=0; i<tabComidas->count(); i++){
        WidgetComida * w; 
        w = dynamic_cast<WidgetComida*>(tabComidas->widget(i));
        w->cSeleccionable->setChecked(true);
    }
}

void DComidas::slotEliminarComidas(){
    int index = tabComidas->currentIndex();
    WidgetComida * wc =qobject_cast <WidgetComida*>(tabComidas->widget(index));
    Comida *comidaABorrar = wc->comida;

    for(int i = 0; i < pComidas->size(); i++){
        if(pComidas->at(i)==comidaABorrar){
            delete pComidas->at(i);
            pComidas->remove(i);
            break;
        }  
    }
    tabComidas->removeTab(index);

}