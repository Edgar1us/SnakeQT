#include "DExamenDibujo.h"
#include <QBrush>
#include <QPainter>

DExamenDibujo::DExamenDibujo(QVector<QString> *recibido, QWidget * parent)
 : QDialog(parent) , flechas(recibido){
    setupUi(this);



}

void DExamenDibujo::paintEvent(QPaintEvent *event){

    //listaExamen2 = recoger();

    QString ruta = "./flechas/derecha.png";
    QImage imagen;
    QBrush brush(color);
    QPainter pintor(this);
    pintor.setBrush(brush);
    pintor.drawImage(QRect(5,5,40,40),QImage(ruta));

    /*for(int i = 0; i < listaExamen2->size(); i++){
        if(listaExamen2->at(i)==QString("derecha")){
            ruta = ruta + "derecha.png";
            pintor.drawImage(QRect(5,5,40,40),QImage(ruta));
        }
            
    }*/

}


/*QListWidget* DExamenDibujo::recoger(){
    listaExamen2->clear();

    for(int i = 0; i < flechas->size(); i++){
        listaExamen2->addItem(flechas->at(i));
    }
    return listaExamen2;

}*/