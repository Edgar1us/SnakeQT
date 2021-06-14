#ifndef DINFORMACIONDETALLADA_H
#define DINFORMACIONDETALLADA_H

#include "ui_DInformacionDetallada.h"
#include <QPoint>
#include <QTimer>

class DInformacionDetallada : public QDialog, public Ui::DInformacionDetallada{
    Q_OBJECT

    public:
        DInformacionDetallada(QVector<QPoint> serpienteRecogida, QWidget * parent = 0);
        QVector<QPoint> serpiente;

        QTimer * temp;

        QString getInfoSnake(QVector<QPoint> serp);

    public slots:
        void slotMostrarInfo();


};

#endif