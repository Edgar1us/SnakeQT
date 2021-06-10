#ifndef DPOSICIONFRUTA_H
#define DPOSICIONFRUTA_H

#include "ui_DPosicionFruta.h"
#include <QDialog>
#include "WidgetClick.h"

class DPosicionFruta : public QDialog, public Ui::DPosicionFruta {

    Q_OBJECT

    public:
        DPosicionFruta(QWidget * parent = 0);
        int frutaX, frutaY;
        WidgetClick * widgetClick;

};

#endif