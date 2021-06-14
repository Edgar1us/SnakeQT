#ifndef DCONTROLSNAKE_H
#define DCONTROLSNAKE_H

#include "ui_DControlSnake.h"
#include <QVector>
#include <QPoint>
#include <QTimer>

class DControlSnake : public QDialog, public Ui::DControlSnake{
    Q_OBJECT
    public:
        DControlSnake(QTimer * temp, QWidget * parent=0);
        QTimer * tempSnake;

    public slots:
        void slotBotonPararSerpiente();
        void slotVelocidadMasSnake();
        void slotVelocidadMenosSnake();
        void slotBotonReanudarSerpiente();
};

#endif