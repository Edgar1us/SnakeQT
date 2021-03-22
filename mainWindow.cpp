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

}

void MainWindow::paintEvent(QPaintEvent * event){

    QPainter pintor(this);
    foreach (QPoint p, serpiente) {
   	 pintor.drawRect(p.x(),p.y(),40,40);
    }


}

void MainWindow::slotTemporizador(){

    
    this->update();

    serpiente.prepend(
   	 QPoint( serpiente.first().x()+40,serpiente.first().y()));
    serpiente.pop_back();

}