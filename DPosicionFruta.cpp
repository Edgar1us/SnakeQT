#include "DPosicionFruta.h"
#include <QHBoxLayout>

DPosicionFruta::DPosicionFruta(QWidget * parent) : QDialog(parent){
        setupUi(this);

        widgetClick = new WidgetClick();

        QHBoxLayout * layout = new QHBoxLayout();
        contenedor->setLayout(layout);
        layout->addWidget(widgetClick);
} 