#include "mainWindow.h"
#include <QPainter>
#include <QBrush>
#include <QColor>
#include <QMessageBox>
#include <QDebug>
#include <QMenu>
#include <QMenuBar>

MainWindow::MainWindow(QWidget *parent) : QMainWindow( parent ){

    resize(800, 800);
    posX = posY = 0;

    temporizador = new QTimer();
    temporizador->setInterval(200);
    temporizador->setSingleShot(false);
    temporizador->start();

    inicializarMenu();

    connect(temporizador,SIGNAL(timeout()), this, SLOT(slotTemporizador()));
    

    for (int i=0; i<4 ;i++ )
   	 serpiente.prepend(QPoint(40+40*i, 40));

    direccion = derecha;
    teclaPulsada = Qt::Key_Space;

    comidaX = ((random() % width()) /40 ) * 40;
    comidaY = ((random() % height()) /40 ) * 40;
    haComido = false;

    dNombreJugador = NULL;
    dPuntuaciones = NULL;
    dControlPad = NULL;

    puntuacion = 0;

}

void MainWindow::paintEvent(QPaintEvent * event){

    QBrush brush(color);

    QPainter pintor(this);
    pintor.setBrush(brush);

    foreach (QPoint p, serpiente) {
        pintor.setBrush(Qt::green);
   	    pintor.drawRect(p.x(),p.y(),40,40);
     
    }
    pintor.setBrush(Qt::red);
    pintor.drawRect(comidaX, comidaY, 40, 40 );
  
}

void MainWindow::inicializarMenu(){
    QMenu *menu = menuBar()->addMenu("Opciones");

    accionControlPad = new QAction("Panel de control", this);
    accionControlPad->setToolTip("Panel de control"); 
    accionControlPad->setStatusTip("Panel de control");

    connect(accionControlPad, SIGNAL(triggered()),
            this, SLOT(slotPanelDControl()));

    menu->addAction(accionControlPad);

}

void MainWindow::keyPressEvent(QKeyEvent * event){

    switch (event->key()) {    
        case Qt::Key_Right :
 	        if ( direccion != izquierda ) teclaPulsada = Qt::Key_Right;
 	        break;

        case Qt::Key_Up :
	        if (direccion != abajo ) teclaPulsada = Qt::Key_Up;
	        break;

        case Qt::Key_Left :
 	        if ( direccion != derecha ) teclaPulsada = Qt::Key_Left;
 	        break;

        case Qt::Key_Down :
	        if (direccion != arriba ) teclaPulsada = Qt::Key_Down ;
	        break;
 }


}

/*void MainWindow::nuevoJugador(){

    if (dNombreJugador == NULL){
            dNombreJugador = new DNombreJugador(this);    
    }

    

}*/

void MainWindow::mostrarPuntuaciones(){

    if (dPuntuaciones == NULL){
            dPuntuaciones = new DPuntuaciones(this);    
    }

    dPuntuaciones->exec();

}

void MainWindow::guardarPuntuacion(QString nombre, int puntuacion) {

    QFile fichero("./puntuaciones");
    fichero.open(QIODevice::Append);

    QTextStream stream(&fichero);

    
    stream << nombre << " "  << QString::number(puntuacion)<<endl;
}

/***************************SLOTS********************************************************/

void MainWindow::slotTemporizador(){

    this->update();

    int xNueva = serpiente.first().x();
    int yNueva = serpiente.first().y();

    //Vamos a controlar el movimiento de la serpiente (DIRECCIÓN)
    
    switch (teclaPulsada){

        case Qt::Key_Up : 
            direccion=arriba; 
            break;

   	    case Qt::Key_Down : 
           direccion=abajo; 
           break;

   	    case Qt::Key_Left : 
           direccion=izquierda; 
           break;

   	    case Qt::Key_Right : 
           direccion=derecha; 
           break;

    }

    teclaPulsada=Qt::Key_Space ; 

    if ( direccion == derecha )
        xNueva = xNueva + 40;

    if ( direccion == izquierda )
        xNueva = xNueva - 40;

    if ( direccion == arriba )
        yNueva = yNueva - 40;

    if ( direccion == abajo )
        yNueva = yNueva + 40;


    if ( (xNueva == comidaX ) && (yNueva == comidaY) ) {

   	    haComido = true;
   	    
        while (true){
            comidaX = ((random() % (width()-40)) /40 ) * 40;
   	        comidaY = ((random() % (height()-80)) /40 ) * 40;

            if ( !serpiente.contains(QPoint(comidaX,comidaY) ))
                break;
        }   
    }

    if ( serpiente.contains(QPoint(xNueva,yNueva) )) {
   	    temporizador->stop();

        puntuacion = serpiente.size();
        //qDebug() << "Puntuacion: " << puntuacion;


        if (dNombreJugador == NULL){
            dNombreJugador = new DNombreJugador(this);    
        }

        dNombreJugador->exec();
        QString nombre = dNombreJugador->edtJugador->text();
        //qDebug() << "Nombre: " << nombre;

        guardarPuntuacion(nombre, puntuacion);

        mostrarPuntuaciones();
        
        
    }

    QPoint p(xNueva, yNueva);

    serpiente.prepend(p);
    
    
    

    if ( !haComido ) {
        serpiente.pop_back();
        
    }
    haComido=false;

}

void MainWindow::slotCambiaDireccion(DControlPad::Direccion dir){

    switch(dir){
       case DControlPad::derecha :
 	        teclaPulsada = Qt::Key_Right;
 	        break;

        case DControlPad::izquierda :
	        teclaPulsada = Qt::Key_Left;
	        break;

        case DControlPad::arriba :
 	        teclaPulsada = Qt::Key_Up;
 	        break;

        case DControlPad::abajo :
	        teclaPulsada = Qt::Key_Down;
	        break; 
    }

}

void MainWindow::slotPanelDControl(){

    if (dControlPad == NULL){
            dControlPad = new DControlPad(this);    
        }

        dControlPad->show();
}