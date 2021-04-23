#ifndef DNOMBREJUGADOR_H
#define DNOMBREJUGADOR_H

#include <QDialog>
#include <ui_DNombreJugador.h>
#include <QString>

class DNombreJugador : public QDialog, public Ui::DNombreJugador{

    Q_OBJECT
    public:
        DNombreJugador(QWidget * parent = 0);

        

        void guardar(QString ruta);
        //void establecerFicheroActual(const QString &);

    public slots:

       // void slotmostrarPuntuacion(int);

};
#endif