#ifndef DCONTROLPAD_H
#define DCONTROLPAD_H

#include <ui_DControlPad.h>
#include <QDialog>

class DControlPad : public QDialog, public Ui::DControlPad{
    Q_OBJECT

    public:
        DControlPad(QWidget * parent = 0);

        typedef enum {derecha, izquierda, arriba, abajo} Direccion;

        Direccion direccionPulsada = izquierda;
        

    signals:
        void cambioDireccion(DControlPad::Direccion);

    public slots:
        void slotDireccionAbajo();
        void slotDireccionDerecha();
        
};
#endif