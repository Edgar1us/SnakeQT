#include "DControlSnake.h"

DControlSnake::DControlSnake(QTimer * temp, QWidget * parent) : tempSnake(temp), QDialog(parent){

    setupUi(this);

    connect(btnParar,SIGNAL(clicked()), this, SLOT(slotBotonPararSerpiente()));
    connect(btnReanudar,SIGNAL(clicked()), this, SLOT(slotBotonReanudarSerpiente()));
    connect(btnMas,SIGNAL(clicked()), this, SLOT(slotVelocidadMasSnake()));
    connect(btnMenos,SIGNAL(clicked()), this, SLOT(slotVelocidadMenosSnake()));

}

void DControlSnake::slotBotonPararSerpiente(){
    tempSnake->stop();
}

void DControlSnake::slotBotonReanudarSerpiente(){
    tempSnake->start();
}

void DControlSnake::slotVelocidadMasSnake(){
    int vel = 200;
    tempSnake->setInterval(vel-=150);
}

void DControlSnake::slotVelocidadMenosSnake(){    
    int vel = 200;
    tempSnake->setInterval(vel+=200);
    
}