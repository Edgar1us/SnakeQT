#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QWidget>
#include <QPaintEvent>
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

    void paintEvent(QPaintEvent *event);

public slots:

    void slotTemporizador();

};
#endif
