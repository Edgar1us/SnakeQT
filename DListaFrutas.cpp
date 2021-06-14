#include "DListaFrutas.h"
#include <QHBoxLayout>
#include <QPainter>
#include <QBrush>

DListaFrutas::DListaFrutas(QVector<Comida*> recibido, QWidget * parent) : comidas(recibido), QDialog(parent){
    setupUi(this);

    QHBoxLayout * layout = new QHBoxLayout();
    container2->setLayout(layout);
    for(int i = 0; i < comidas.size(); i++){
        layout->addWidget(new WidgetLista(comidas.at(i)));
    }


}

WidgetLista::WidgetLista(Comida * comida, QWidget * parent) : c(comida), QWidget(parent){


    

}

void WidgetLista::paintEvent(QPaintEvent * event){

    QBrush brush(color);
    QPainter pintor(this);
    pintor.setBrush(brush);
    pintor.drawImage(QRect(5,5,40,40),c->imagen);

}