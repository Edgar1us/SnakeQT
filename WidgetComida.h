#ifndef WIDGETCOMIDA_H
#define WIDGETCOMIDA_H

#include "ui_WidgetComida.h"
#include <QWidget>
#include "Comida.h"

class WidgetComida : public QWidget, public Ui::WidgetComida{
 	Q_OBJECT

	public:    
		WidgetComida(Comida * c, QWidget * parent = 0);
		Comida * comida;

	signals:
		void signalSpin(int);

	public slots:
		void slotSpin(int);
		void slotSeleccionable(int);
		void slotCargarImagen();

};

#endif
