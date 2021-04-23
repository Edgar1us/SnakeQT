#include "DPuntuaciones.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>
#include <algorithm>

DPuntuaciones::DPuntuaciones( QWidget *parent) : QDialog(parent)
{
    setupUi(this);    

	ModeloPuntuaciones *mp = new ModeloPuntuaciones();	
	tablaPuntuaciones->setModel(mp);

	connect(btnBorrar,SIGNAL(clicked()), this, SLOT(slotBorrar()));

}

/************** SLOTS DPuntuaciones********************************************************/
void DPuntuaciones::slotBorrar(){

	QModelIndexList seleccion;
	seleccion = tablaPuntuaciones->selectionModel()->selectedRows();


	ModeloPuntuaciones * mp ;
    mp = dynamic_cast<ModeloPuntuaciones * > (
   		 tablaPuntuaciones->model()
   	 );

	QList<int> seleccionadasOrdenadas;
	for (int i=0 ; i < seleccion.count() ; i++)
   		seleccionadasOrdenadas.append(seleccion.at(i).row());

	std::sort(seleccionadasOrdenadas.begin(), seleccionadasOrdenadas.end());

	for (int i=seleccionadasOrdenadas.count()-1 ; i>=0 ; i--)
   		mp->puntuaciones.remove(seleccionadasOrdenadas.at(i));
	mp->reescribirFicheroPuntuaciones();

	mp->actualizar();
	tablaPuntuaciones->clearSelection();
}

ModeloPuntuaciones::ModeloPuntuaciones(QObject *parent){

    QFile fichero("./puntuaciones");
	if (!fichero.open(QIODevice::ReadOnly)) {
       	QMessageBox::warning(nullptr, tr("Editor"),
                    	tr("Cannot read file %1:\n%2.")
                    	.arg(fichero.fileName())
                    	.arg(fichero.errorString()),
   					 QMessageBox::Cancel,
   					 QMessageBox::Cancel);
     	return;
	}
    	QTextStream stream(&fichero);

    	while (!stream.atEnd()){
            	puntuaciones.append(stream.readLine());
   	}
	fichero.close();
}

int ModeloPuntuaciones::rowCount (const QModelIndex & p)const  {
    return puntuaciones.size();
}

int ModeloPuntuaciones::columnCount ( const QModelIndex & p)const  {
    return 2;
}

QVariant ModeloPuntuaciones::data ( const QModelIndex & i, int role)const  {
    if (role != Qt::DisplayRole )  return QVariant();

    int linea = i.row();
    int num_palabra = i.column();

	return QVariant(puntuaciones
				.at(linea)
				.split(" ")
				.at(num_palabra));

}



void ModeloPuntuaciones::actualizar(){
	QModelIndex topLeft = index(0, 0);
 	QModelIndex bottomRight =index(puntuaciones.size(), 2);
	
	beginResetModel();
    emit layoutChanged();
    emit dataChanged(topLeft,bottomRight);

}

void ModeloPuntuaciones::reescribirFicheroPuntuaciones(){
	
	QFile fichero("./puntuaciones");
    fichero.open(QIODevice::WriteOnly);

	QTextStream stream(&fichero);
	for (int i=0 ; i < puntuaciones.size() ; i++)
		stream << puntuaciones.at(i) << "\n";
		
}

