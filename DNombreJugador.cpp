#include "DNombreJugador.h"

#include <QLineEdit>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>


DNombreJugador::DNombreJugador(QWidget * parent) : QDialog(parent){
    setupUi(this);




}

/*void MainWindow::establecerFicheroActual(const QString & nuevaRuta){

        nomFichRec.removeAll(nuevaRuta);
        nomFichRec.prepend(nuevaRuta);

        rutaArchivo = nuevaRuta;

        //QString nombreCorto = QFileInfo(nuevaRuta).fileName();
        for (int i = 0; i < MAX_FICHEROS_RECIENTES; i++){
                accionesFicherosRecientes[i]->setVisible(false);
        }

        for (int i = 0; i < nomFichRec.length() && i < MAX_FICHEROS_RECIENTES; i++){
                QString rutaMirada = nomFichRec[i];
                QString nombreCorto = QFileInfo(rutaMirada).fileName();
                accionesFicherosRecientes[i]->setText(nombreCorto);
                accionesFicherosRecientes[i]->setVisible(true);

                QVariant dato(rutaMirada);
                accionesFicherosRecientes[i]->setData(dato);
        }
        
        foreach(QString nombre, nomFichRec){
                qDebug() << "Nombre archivo: " << nombre;
        }
}*/



void DNombreJugador::guardar(QString ruta){


        QString texto = edtJugador->text();
        QFile archivo(ruta);
        if (!archivo.open(QIODevice::Append))
        {
                QMessageBox::warning(this, "Editor error",
                                     QString("No se ha podido guardar el archivo\n"),
                                     QMessageBox::Yes);
        }

        QTextStream stream(&archivo);

        //stream << edtJugador->document()->toPlainText()  << QString::number(puntuacion);
        //establecerFicheroActual(ruta);
        archivo.close();

}

/*void DNombreJugador::slotmostrarPuntuacion(int puntuacion){

        edtPuntuacion->setText(puntuacion);

}*/
