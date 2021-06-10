#ifndef DPOSICIONARDOS_H
#define  DPOSICIONARDOS_H

#include "ui_DPosicionarDos.h"
#include <QDialog>
#include "WPosicionarDos.h"
#include <QHBoxLayout>

class DPosicionarDos : public QDialog, public Ui::DPosicionarDos{
    Q_OBJECT
    public:
        DPosicionarDos(QWidget * parent=0);
        WPosicionarDos * wPosicionarDos;

};

#endif