#include "DPosicionarDos.h"

DPosicionarDos::DPosicionarDos(QWidget * parent) : QDialog(parent){
    setupUi(this);

    wPosicionarDos = new WPosicionarDos();

    QHBoxLayout * layout = new QHBoxLayout();
    contenedorDos->setLayout(layout);
    layout->addWidget(wPosicionarDos);

}