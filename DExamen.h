#ifndef DEXAMEN_H
#define DEXAMEN_H

#include "ui_DExamen.h"
#include <QTimer>
#include <QPoint>

class DExamen : public QDialog, public Ui::DExamen{

    Q_OBJECT
    public:
        DExamen(QVector<QPoint>* posiciones, QVector<QString>* teclasR, QWidget * parent = 0);
        QVector<QString>* teclas;
        QVector<QPoint>* serp;

        QTimer * temp;

        QString getInfoSnake(QPoint posi, QString tecla);

    public slots:
        void slotMostarDatos();    

};

#endif