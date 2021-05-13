#ifndef DCOMIDAS_H
#define DCOMIDAS_H

#include "ui_DComidas.h"
#include "QVector"
#include "Comida.h"
#include "WidgetComida.h"
#include <QDialog>

class DComidas : public QDialog, public Ui::DComidas{
    
    Q_OBJECT
    
    public:    
        DComidas(QVector<Comida*> * recibido, QWidget *parent = 0);
        QVector<Comida*> *pComidas;

    public slots:
        void slotTodasSeleccionadas();
        void slotEliminarComidas();
};

#endif