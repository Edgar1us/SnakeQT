#include "mainWindow.h"
#include <QPainter>

MainWindow::MainWindow(QWidget *parent) : QMainWindow( parent ){

    resize(800, 600);
    posX = posY = 0;

    temporizador = new QTimer();
    temporizador->setInterval(500);
    temporizador->setSingleShot(false);
    temporizador->start();

    connect(temporizador,SIGNAL(timeout()), this, SLOT(slotTemporizador()));

    for (int i=0; i<4 ;i++ )
   	 serpiente.prepend(QPoint(40+40*i, 40));

    direccion = derecha;
    teclaPulsada = Qt::Key_Space;
}

void MainWindow::paintEvent(QPaintEvent * event){

    QPainter pintor(this);
    foreach (QPoint p, serpiente) {
   	 pintor.drawRect(p.x(),p.y(),40,40);
    }


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

void MainWindow::slotTemporizador(){

    
    this->update();

    int xNueva = serpiente.first().x();
    int yNueva = serpiente.first().y();

    serpiente.prepend(
   	 QPoint( xNueva+40,yNueva));
    serpiente.pop_back();

    //Vamos a controlar el movimiento de la serpiente (DIRECCIÓN)
    if ( direccion == derecha )
        xNueva = xNueva + 10;

    if ( direccion == izquierda )
        xNueva = xNueva - 10;

    if ( direccion == arriba )
        yNueva = yNueva + 10;

    if ( direccion == abajo )
        yNueva = yNueva - 10;


    QPoint p(xNueva, yNueva);



}