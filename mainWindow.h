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
#include "Comida.h"
#include "DComidas.h"

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

    QTimer *temporizador;
    int posX,posY;

    int comidaX, comidaY;
    int xNueva, yNueva;
    static const int TAM=40;
    int puntuacion;
    bool haComido;
    int segmentosQuedan;

    QColor color = QColor(random()%256, random()%256, random()%256);

    QVector<QPoint> serpiente;
    QVector<Comida> comidas;

    typedef enum { derecha, izquierda, arriba, abajo, } direcciones;
    direcciones direccion;
    Qt::Key teclaPulsada;

    QAction * accionControlPad, * accionDComidas;

    DNombreJugador * dNombreJugador;
    DPuntuaciones * dPuntuaciones;
    DControlPad * dControlPad;
    //DComidas * dComidas;
    
    Comida comidaActual;


    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent * event);
    void nuevoJugador();
    void mostrarPuntuaciones();
    void guardarPuntuacion(QString, int);
    void inicializarMenu();
    void inicializaComidas();

public slots:

    void slotTemporizador();
    void slotCambiaDireccion(DControlPad::Direccion);
    void slotPanelDControl();
    void slotDComidas();
    

};
#endif
