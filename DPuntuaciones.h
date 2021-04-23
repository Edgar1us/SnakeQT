#ifndef DPUNTUACIONES_H
#define DPUNTUACIONES_H
#include "ui_DPuntuaciones.h"
#include <QVector>

class DPuntuaciones : public QDialog, public Ui::DPuntuaciones
{
 	Q_OBJECT

 	public:    
 		DPuntuaciones(QWidget *parent = 0);


	public slots:

		void slotBorrar();
};

class ModeloPuntuaciones : public QAbstractTableModel {

	
	public:
	
		QVector<QString> puntuaciones;

		ModeloPuntuaciones(QObject *p= nullptr);
		int rowCount ( const QModelIndex & p = QModelIndex() )const  ;
		int columnCount ( const QModelIndex & p = QModelIndex() )const  ;
		QVariant data ( const QModelIndex & i, int role = Qt::DisplayRole )const  ;


		void actualizar();
		void reescribirFicheroPuntuaciones();

		
};


#endif
