#include "DComidas.h"

DComidas::DComidas(QVector<Comida> * comidas, QWidget * parent) : pComidas(comidas), QDialog(parent)
{
    setupUi(this);
    for (int i=0; i< pComidas->size(); i++)
        tabComidas->addTab(new WidgetComida(),QString::number(i));

}
