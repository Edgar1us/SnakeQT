#ifndef _COMIDA_H_
#define _COMIDA_H_

#include <QImage>

class Comida {

public:
    Comida(QImage, int, bool);
    Comida();

    QImage imagen;
    int alimento;
    bool seleccionable;
};

#endif
