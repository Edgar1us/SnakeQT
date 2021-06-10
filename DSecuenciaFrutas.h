#ifndef _DSECUENCIAFRUTAS
#define _DSECUENCIAFRUTAS

#include "ui_DSecuenciaFrutas.h"
#include "ui_WidgetImagenFruta.h"
#include "Comida.h"
#include <QColor>

class DSecuenciaFrutas : public QDialog , public Ui::DSecuenciaFrutas{
    Q_OBJECT
    public:
        DSecuenciaFrutas(QVector<Comida*> comidas, QWidget * parent=0);
        QVector<Comida*> vComidas;

};

class WidgetImagenFruta : public QWidget, public Ui::WidgetImagenFruta{
    Q_OBJECT
    public:
        WidgetImagenFruta(Comida * c, QWidget * parent=0);
        WidgetImagenFruta(QWidget * parent=0);
        Comida * comida;

        QColor color = QColor(random()%256, random()%256, random()%256);

        void paintEvent(QPaintEvent * event);

};

#endif