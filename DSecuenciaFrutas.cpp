#include "DSecuenciaFrutas.h"
#include <QHBoxLayout>
#include <QPainter>
#include <QBrush>


DSecuenciaFrutas::DSecuenciaFrutas(QVector<Comida*> comidas, QWidget * parent): vComidas(comidas), QDialog(parent){
    setupUi(this);

        QHBoxLayout * layout = new QHBoxLayout();
        container->setLayout(layout);
        for (int i=0; i< vComidas.size(); i++){
            layout->addWidget(new WidgetImagenFruta(vComidas.at(i)));
        }

}

WidgetImagenFruta::WidgetImagenFruta(Comida * c, QWidget *parent): comida(c) , QWidget(parent){
    setupUi(this);

}

WidgetImagenFruta::WidgetImagenFruta(QWidget *parent) : QWidget(parent){}


void WidgetImagenFruta::paintEvent(QPaintEvent * event){
    QBrush brush(color);
    QPainter pintor(this);
    pintor.setBrush(brush);
    pintor.drawImage(QRect(5,5,40,40),comida->imagen);
}