#ifndef WIDGETCOMIDA_H
#define WIDGETCOMIDA_H

#include "ui_WidgetComida.h"
#include <QWidget>

class WidgetComida : public QWidget, public Ui::WidgetComida{
 	Q_OBJECT

	public:    
		WidgetComida(Comida c, QWidget * parent = 0);
		Comida comida;

};

#endif
