#ifndef DEXAMENDIBUJO_H
#define DEXAMENDIBUJO_H

#include "ui_DExamenDibujo.h"
#include <QColor>

class DExamenDibujo : public QDialog, public Ui::DExamenDibujo{
    Q_OBJECT
    public:
        DExamenDibujo(QVector<QString> *recibido, QWidget * parent = 0);
        QVector<QString> * flechas;
        QColor color = QColor(random()%256, random()%256, random()%256);

        void paintEvent(QPaintEvent *event);
        //QListWidget* recoger();

    public slots:
        //void slotMostrarFlechas();
};

#endif