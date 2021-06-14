#ifndef DLISTAFRUTAS_H
#define DLISTAFRUTAS_H

#include "ui_DListaFrutas.h"
#include <QVector>
#include "Comida.h"
#include <QColor>

class DListaFrutas : public QDialog, public Ui::DListaFrutas{

    Q_OBJECT
    public:
        DListaFrutas(QVector<Comida*> recibido, QWidget * parent = 0);
        QVector<Comida*> comidas;

};


class WidgetLista : public QWidget{

    public:
        WidgetLista(Comida * comida, QWidget * parent = 0);
        Comida * c;
        QColor color = QColor(random()%256, random()%256, random()%256);

        void paintEvent(QPaintEvent * event);

};

#endif