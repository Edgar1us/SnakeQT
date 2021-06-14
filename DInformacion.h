#ifndef DINFORMACION_H
#define DINFORMACION_H

#include "ui_DInformacion.h"

class DInformacion : public QDialog, public Ui::DInformacion{
    Q_OBJECT
    public:
        DInformacion(int tamanyoSerpiente, QWidget * parent);
        int tamSerpiente;
};


#endif