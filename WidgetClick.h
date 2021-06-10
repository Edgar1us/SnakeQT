#ifndef WIDGETCLICK
#define WIDGETCLICK

#include "ui_WidgetClick.h"
#include <QMouseEvent>

class WidgetClick : public QWidget, public Ui::WidgetClick{
    Q_OBJECT

public:
    WidgetClick(QWidget *parent = 0);

    int frutaX, frutaY;
    int anchoVentana, altoVentana;

    float fX, fY;  
    float anchoWindow, altoWindow;

    void mousePressEvent(QMouseEvent *event);

signals:
    void senyalClickRaton(float frutaX, float frutaY);

};



#endif