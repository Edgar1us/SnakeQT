#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QWidget>
#include <QPaintEvent>
#include <QKeyEvent>
#include <QTimer>
#include <QVector>
#include <QPoint>

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

    QTimer *temporizador;
    int posX,posY;
    QVector<QPoint> serpiente;

    typedef enum { derecha, izquierda, arriba, abajo, } direcciones;
    direcciones direccion;
    Qt::Key teclaPulsada;

    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent * event);

public slots:

    void slotTemporizador();

};
#endif
