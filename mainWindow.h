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
#include <QImage>
#include "DNombreJugador.h"
#include "DPuntuaciones.h"
#include "DControlPad.h"
#include "Comida.h"
#include "DComidas.h"
#include "DPosicionFruta.h"
#include <QChart>
#include <QChartView>
#include <QLineSeries>
#include <QPieSeries> 
#include "WidgetClick.h"
#include "DSecuenciaFrutas.h"
#include "DPosicionarDos.h"
#include "DListaFrutas.h"
#include "DInformacion.h"
#include "DControlSnake.h"
#include "DInformacionDetallada.h"
#include "DExamen.h"

QT_CHARTS_USE_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    MainWindow(QWidget *parent = 0, Qt::WindowFlags flags = 0);

    QImage spritesSnake;

    QTimer *temporizador;
    int posX, posY;

    int posiX = 400, posiY = 200, destX, destY;
    int comidaX, comidaY;
    int xNueva, yNueva;
    int indComida = -1; 
    static const int TAM=40;
    int puntuacion, tamanyoSerpiente;
    bool haComido;
    int segmentosQuedan;

    QLabel * textBarra;

    QPushButton *boton;

    QColor color = QColor(random()%256, random()%256, random()%256);

    QVector<QPoint> serpiente;
    QVector<Comida*> comidas;

    QVector<QPoint> posiciones;
    QVector<QString> teclas;

    int vecesComidas[3];


    typedef enum { derecha, izquierda, arriba, abajo, } direcciones;
    direcciones direccion;
    Qt::Key teclaPulsada;

    QAction * accionControlPad, * accionDComidas, *accionDPosicionFruta, *accionDSecuenciaFruta;
    QAction * accionDPosicionarDos, *accionDListaFrutas, *accionDInformacion, *accionDControlSnake;
    QAction * accionDInfDetallada, * accionDExamen;

    DNombreJugador * dNombreJugador;
    DPuntuaciones * dPuntuaciones;
    DControlPad * dControlPad;
    DComidas * dComidas;
    DPosicionFruta * dPosicionFruta;
    DSecuenciaFrutas * dSecuenciaFrutas;
    DPosicionarDos * dPosicionarDos;
    DListaFrutas * dListaFrutas;
    DInformacion * dInformacion;
    DControlSnake * dControlSnake;
    DInformacionDetallada * dInfDetallada;
    DExamen * dExamen;
    
    Comida * comidaActual;
    QChart * chart;
    QChartView *chartView;
    QPieSeries * serie;

    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent * event);
    void nuevoJugador();
    void mostrarPuntuaciones();
    void guardarPuntuacion(QString, int);
    void inicializarMenu();
    void inicializaComidas();
    void dropEvent(QDropEvent * event);
    void dragEnterEvent(QDragEnterEvent * event);
    void actualizarDatosGrafico();


public slots:

    void slotTemporizador();
    void slotCambiaDireccion(DControlPad::Direccion);
    void slotPanelDControl();
    void slotDComidas();
    void slotDPosicionFruta();
    void slotDPosicionarDos();
    void slotDSecuenciaFrutas();
    void slotDListaFrutas();
    void slotDInformacion();
    void slotDControlSnake();
    void slotDInfDetallada();
    void slotDExamen();
    void slotRecogerPosicionFruta(float, float);
    void slotRecogerPosicionDos(int, int);
    

};
#endif
