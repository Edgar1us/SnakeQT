#ifndef WPOSICIONARDOS_H
#define WPOSICIONARDOS_H

#include "ui_WPosicionarDos.h"
#include <QMouseEvent>

class WPosicionarDos : public QWidget, Ui::WPosicionarDos{
    Q_OBJECT
    public:
        WPosicionarDos(QWidget * parent = 0);

        void mousePressEvent(QMouseEvent * event);

    signals:
        void enviarClickRaton(int, int);

};

#endif