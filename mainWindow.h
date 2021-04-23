#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QWidget>
#include <QPaintEvent>
#include <QKeyEvent>
#include <QTimer>
#include <QVector>
#include <QPoint>
#include <QColor>
#include <QAction>
#include "DNombreJugador.h"
#include "DPuntuaciones.h"
#include "DControlPad.h"

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

    QTimer *temporizador;
    int posX,posY;

    int comidaX, comidaY;
    int puntuacion;
    bool haComido;

    QColor color = QColor(random()%256, random()%256, random()%256);

    QVector<QPoint> serpiente;

    typedef enum { derecha, izquierda, arriba, abajo, } direcciones;
    direcciones direccion;
    Qt::Key teclaPulsada;

    QAction * accionControlPad;

    DNombreJugador * dNombreJugador;
    DPuntuaciones * dPuntuaciones;
    DControlPad * dControlPad;

    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent * event);
    void nuevoJugador();
    void mostrarPuntuaciones();
    void guardarPuntuacion(QString, int);
    void inicializarMenu();

public slots:

    void slotTemporizador();
    void slotCambiaDireccion(DControlPad::Direccion);
    void slotPanelDControl();

};
#endif
