#include "mainWindow.h"
#include <QPainter>
#include <QBrush>
#include <QColor>
#include <QMessageBox>
#include <QDebug>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QMimeData>
#include <QSound>
#include <QChart>
#include <QChartView>
#include <QPieSeries> 


MainWindow::MainWindow(QWidget *parent, Qt::WindowFlags flags) : QMainWindow(parent, flags){

    resize(800, 800);
    posX = posY = 0;

    temporizador = new QTimer();
    temporizador->setInterval(200);
    temporizador->setSingleShot(false);
    temporizador->start();

    inicializarMenu();
    inicializaComidas();

    connect(temporizador,SIGNAL(timeout()), this, SLOT(slotTemporizador()));
   

    for (int i=0; i<4 ;i++ )
   	    serpiente.prepend(QPoint(40+40*i, 40));
    posiciones.append(QPoint(40+40*0, 40));       

    direccion = derecha;
    teclaPulsada = Qt::Key_Space;

    comidaX = ((random() % width()) /40 ) * 40;
    comidaY = ((random() % height()) /40 ) * 40;
    haComido = false;
    segmentosQuedan = 0;

    dNombreJugador = NULL;
    dPuntuaciones = NULL;
    dControlPad = NULL;
    dComidas = NULL;
    dPosicionFruta = NULL;
    dSecuenciaFrutas = NULL;
    dPosicionarDos = NULL;
    dListaFrutas = NULL;
    dInformacion = NULL;
    dControlSnake = NULL;
    dExamen = NULL;
    dExamenDibujo = NULL;

    puntuacion = 0;

    textBarra = new QLabel();
    QString posicion = QString("Posicion X= ") + QString::number(serpiente.first().x())+
    QString(" Y= ") + QString::number(serpiente.first().y());
    
    textBarra->setText(posicion);
    statusBar()->addWidget(textBarra, 200);

    spritesSnake = QImage("./snake-graphics.png");
    spritesSnake = spritesSnake.scaledToWidth(TAM*5);

    setAcceptDrops(true);

    this->grabKeyboard();

    chart = new QChart();
    chartView = new QChartView(chart,this);

    

    vecesComidas[0] = 2;
    vecesComidas[1] = 2;
    vecesComidas[2] = 2;

    serie = new QPieSeries(); 

    serie->append(QString("Naranja"),vecesComidas[0]);   
    serie->append(QString("Limon"),vecesComidas[1]);
    serie->append(QString("Manzana"),vecesComidas[2]);

    chart->addSeries(serie);

}

void MainWindow::paintEvent(QPaintEvent * event){

    QBrush brush(color);

    QPainter pintor(this);
    pintor.setBrush(brush);

    /*pintamos la cabeza*/
    QPoint cabeza = serpiente.at(0);
    if (direccion == derecha )  pintor.drawImage(cabeza,spritesSnake,QRect(4*TAM,0*TAM,TAM,TAM));
    if (direccion == izquierda )  pintor.drawImage(cabeza,spritesSnake,QRect(3*TAM,1*TAM,TAM,TAM)); ;    
    if (direccion == arriba )  pintor.drawImage(cabeza,spritesSnake,QRect(3*TAM,0*TAM,TAM,TAM));
    if (direccion == abajo ) pintor.drawImage(cabeza,spritesSnake,QRect(4*TAM,1*TAM,TAM,TAM));
    
    /* pintamos el cuerpo ( la cola no) */
    int tx = 0,ty = 0 ;
    for (int i= 1; i< serpiente.size() - 1; i++) {
   	 QPoint previo =serpiente.at(i-1);
   	 QPoint actual =serpiente.at(i);
    	QPoint siguiente = serpiente.at(i+1);

    	if (previo.x() < actual.x() && siguiente.x() > actual.x() ||
   		  siguiente.x() < actual.x() && previo.x() > actual.x()) {
                	// Horizontal Left-Right
                	tx = 1; ty = 0;
    	} else if (previo.x() < actual.x() && siguiente.y() > actual.y() ||
   			  siguiente.x() < actual.x() && previo.y() > actual.y()) {
               	// Angle Left-Down
                	tx = 2; ty = 0;
    	} else if (previo.y() < actual.y() && siguiente.y() > actual.y() ||
   				  siguiente.y() < actual.y() && previo.y() > actual.y()) {
                	// Vertical Up-Down
                	tx = 2; ty = 1;
   	 } else if (previo.y() < actual.y() && siguiente.x() < actual.x() ||
   			  siguiente.y() < actual.y() && previo.x() < actual.x()) {
                	// Angle Top-Left
                	tx = 2; ty = 2;
   	 } else if (previo.x() > actual.x() && siguiente.y() < actual.y() ||
   			  siguiente.x() > actual.x() && previo.y() < actual.y()) {
                	// Angle Right-Up
                	tx = 0; ty = 1;
   	 } else if (previo.y() > actual.y() && siguiente.x() > actual.x() ||
   			  siguiente.y() > actual.y() && previo.x() > actual.x()) {
                	// Angle Down-Right
                	tx = 0; ty = 0;
   	 }
   	 pintor.drawImage(actual,spritesSnake,QRect(tx*TAM,ty*TAM,TAM,TAM));
    }
    /* pintamos la cola*/
    QPoint ultimo = serpiente.last();
    QPoint penultimo = serpiente.at(serpiente.length()-2);    
	if (penultimo.y() < ultimo.y()) {
   	 // Up
   	 tx = 3; ty = 2;
	} else if (penultimo.x() > ultimo.x()) {
   	 // Right
   	 tx = 4; ty = 2;
    } else if (penultimo.y() > ultimo.y()) {
   	 // Down
   	 tx = 4; ty = 3;
    } else if (penultimo.x() < ultimo.x()) {
   	 // Left
   	 tx = 3; ty = 3;
    }    
    pintor.drawImage(ultimo,spritesSnake,QRect(tx*TAM,ty*TAM,TAM,TAM));

    pintor.setBrush(Qt::red);
    pintor.drawRect(QRect(comidaX,comidaY,TAM,TAM));
    pintor.drawImage(QRect(comidaX,comidaY,TAM,TAM),comidaActual->imagen);
  
}
void MainWindow::dragEnterEvent ( QDragEnterEvent * event ) {
    event->acceptProposedAction();
}


void MainWindow::dropEvent(QDropEvent * event){

    Comida * nuevaComida = new Comida();

    if ( ! event->mimeData()->hasUrls() ) return;
    QString text = (event->mimeData()->urls()).first().path();

    /*QMessageBox::warning(this, tr("DropEvent triggered"),
                                tr("El archivo arrastrado es") + text,
                                QMessageBox::Save | QMessageBox::Discard,
                                QMessageBox::Cancel,
                                QMessageBox::Save);*/

    nuevaComida->imagen = QImage(text);
    nuevaComida->alimento = 4; 
    nuevaComida->seleccionable = false;

    comidas.append(nuevaComida); 

    if (dComidas != NULL ) {
         dComidas->addComida(nuevaComida); 

    }
}


void MainWindow::inicializarMenu(){
    QMenu *menu = menuBar()->addMenu("Opciones");
    QMenu *menuInformacion = menuBar()->addMenu("Información");
    QMenu *menuExamen = menuBar()->addMenu("Examen");

    accionControlPad = new QAction("Panel de control", this);
    accionControlPad->setToolTip("Panel de control"); 
    accionControlPad->setStatusTip("Panel de control");

    connect(accionControlPad, SIGNAL(triggered()),
            this, SLOT(slotPanelDControl()));

    accionDComidas = new QAction("Comidas", this);
    accionDComidas->setToolTip("Comidas"); 
    accionDComidas->setStatusTip("Comidas");

    connect(accionDComidas, SIGNAL(triggered()),
            this, SLOT(slotDComidas()));

    accionDPosicionFruta = new QAction("Posicionar Comida", this);
    accionDPosicionFruta->setToolTip("Posicionando");
    accionDPosicionFruta->setStatusTip("Posicionando");

    connect(accionDPosicionFruta, SIGNAL(triggered()),
            this, SLOT(slotDPosicionFruta()));

    accionDSecuenciaFruta = new QAction("Elegir secuencia frutas", this);
    accionDSecuenciaFruta->setToolTip("Secuencia frutas");
    accionDSecuenciaFruta->setStatusTip("Secuencia frutas");

    connect(accionDSecuenciaFruta, SIGNAL(triggered()),
            this, SLOT(slotDSecuenciaFrutas()));

    accionDPosicionarDos = new QAction("POSICIONAR DOS", this);
    accionDPosicionarDos->setToolTip("POsicionado");
    accionDPosicionarDos->setStatusTip("POsicionando");

    connect(accionDPosicionarDos, SIGNAL(triggered()),
            this, SLOT(slotDPosicionarDos()));

    accionDListaFrutas = new QAction("Lista frutas", this);
    accionDListaFrutas->setToolTip("Listado");
    accionDListaFrutas->setStatusTip("Listado");

    connect(accionDListaFrutas, SIGNAL(triggered()),
            this, SLOT(slotDListaFrutas()));


    accionDInformacion = new QAction("Información snake", this);
    accionDInformacion->setToolTip("Información");
    accionDInformacion->setStatusTip("Información");

    connect(accionDInformacion, SIGNAL(triggered()),
            this, SLOT(slotDInformacion()));

    accionDControlSnake = new QAction("Controles snake", this);
    accionDControlSnake->setToolTip("Modificar snake");
    accionDControlSnake->setStatusTip("Modificar");

    connect(accionDControlSnake, SIGNAL(triggered()),
            this, SLOT(slotDControlSnake()));

    accionDInfDetallada = new QAction("Informacion detallada", this);
    accionDInfDetallada->setToolTip("Informacion detallada");
    accionDInfDetallada->setStatusTip("Informacion detallada");

    connect(accionDInfDetallada, SIGNAL(triggered()),
            this, SLOT(slotDInfDetallada()));   


    accionDExamen = new QAction("Examen", this);
    accionDExamen->setToolTip("Examen");
    accionDExamen->setStatusTip("Examen");

    connect(accionDExamen, SIGNAL(triggered()),
            this, SLOT(slotDExamen())); 

    accionDExamenDibujo = new QAction("Examen Dibujo", this);
    accionDExamenDibujo->setToolTip("Examen dibujo");
    accionDExamenDibujo->setStatusTip("Examen dibujo");

    connect(accionDExamenDibujo, SIGNAL(triggered()),
            this, SLOT(slotDExamenDibujo()));             

    menu->addAction(accionControlPad);
    menu->addAction(accionDComidas);
    menu->addAction(accionDPosicionFruta);
    menu->addAction(accionDSecuenciaFruta);
    menu->addAction(accionDPosicionarDos);
    menu->addAction(accionDListaFrutas);
    menu->addAction(accionDControlSnake);

    menuInformacion->addAction(accionDInformacion);
    menuInformacion->addAction(accionDInfDetallada);

    menuExamen->addAction(accionDExamen);
    menuExamen->addAction(accionDExamenDibujo);

}

void MainWindow::keyPressEvent(QKeyEvent * event){

    switch (event->key()) {    
        case Qt::Key_Right :
 	        if ( direccion != izquierda ) teclaPulsada = Qt::Key_Right;
 	        break;

        case Qt::Key_Up :
	        if (direccion != abajo ) teclaPulsada = Qt::Key_Up;
	        break;

        case Qt::Key_Left :
 	        if ( direccion != derecha ) teclaPulsada = Qt::Key_Left;
 	        break;

        case Qt::Key_Down :
	        if (direccion != arriba ) teclaPulsada = Qt::Key_Down ;
	        break;
 }


}


void MainWindow::mostrarPuntuaciones(){

    if (dPuntuaciones == NULL){
            dPuntuaciones = new DPuntuaciones(this);    
    }

    dPuntuaciones->exec();

}

void MainWindow::guardarPuntuacion(QString nombre, int puntuacion) {

    QFile fichero("./puntuaciones");
    fichero.open(QIODevice::Append);

    QTextStream stream(&fichero);

    
    stream << nombre << " "  << QString::number(puntuacion)<<endl;
}

void MainWindow::inicializaComidas(){

    QStringList frutas;
    frutas  << "naranja.png" << "limon.png"<< "manzana.png" ;

    for (int i=0; i<frutas.length(); i++){

   	    QString ruta = "./imagenes/";
   	    ruta = ruta + frutas.at(i);
        Comida * c;
        c = new Comida(QImage(ruta),2*i+1,true);
   	    comidas.append(c);
    }
    
    comidaActual = comidas.at(0);

}

void MainWindow::actualizarDatosGrafico(){

    chartView->repaint();
    chart->removeSeries(serie);
    delete serie;
    serie = new QPieSeries();		 

    serie->append(QString("Naranja"),vecesComidas[0]);   
    serie->append(QString("Limon"),vecesComidas[1]);
    serie->append(QString("Manzana"),vecesComidas[2]);

    chart->addSeries(serie);
}


/***************************SLOTS********************************************************/
void MainWindow::slotTemporizador(){

    this->update();

    destX = 900;
    destY = 200;

    chartView->resize(200,200);

    xNueva = serpiente.first().x();
    yNueva = serpiente.first().y();

    //Vamos a controlar el movimiento de la serpiente (DIRECCIÓN)
    QString * direct;
    QPoint position;
    switch (teclaPulsada){

        case Qt::Key_Up : 
            direccion=arriba; 
            qDebug() << "Tecla pulsada arriba";
            teclas.append(QString("arriba"));
            position.setX(xNueva);
            position.setY(yNueva);
            posiciones.append(position);
            /*posiciones.first().setX(xNueva);
            posiciones.first().setY(yNueva);*/
            break;

   	    case Qt::Key_Down : 
           direccion=abajo; 
            teclas.append(QString("abajo"));
            position.setX(xNueva);
            position.setY(yNueva);
            posiciones.append(position);
           /*posiciones.first().setX(xNueva);
           posiciones.first().setY(yNueva);*/
           break;

   	    case Qt::Key_Left : 
           direccion=izquierda; 
            teclas.append(QString("izquierda"));
            position.setX(xNueva);
            position.setY(yNueva);
            posiciones.append(position);
           //qDebug() << "Tecla pulsada izquierda";
           /*posiciones.first().setX(xNueva);
            posiciones.first().setY(yNueva);*/
           break;

   	    case Qt::Key_Right : 
           direccion=derecha; 
            teclas.append(QString("derecha"));
            position.setX(xNueva);
            position.setY(yNueva);
            posiciones.append(position);
           //teclas.append(QString("derecha"));
           /*posiciones.first().setX(xNueva);
            posiciones.first().setY(yNueva);*/
           break;

    }

    teclaPulsada=Qt::Key_Space ; 

    if ( direccion == derecha ){
        xNueva = xNueva + 40;
        destX = 100;
        if(destX<posiX)
            posiX-=20;
        
    }
        

    if ( direccion == izquierda ){
        xNueva = xNueva - 40;
        if(destX>posiX)
            posiX+=20;
        
    }
        

    if ( direccion == arriba ){
        yNueva = yNueva - 40;
        destY=900;
        if(destY>posiY)
            posiY+=20;
    }
        

    if ( direccion == abajo ){
        yNueva = yNueva + 40;
        destY=100;
        if(destY<posiY)
            posiY-=20;
    }
        

    chartView->move(posiX,posiY);
    if ( (xNueva == comidaX ) && (yNueva == comidaY) ) {

        segmentosQuedan = comidaActual->alimento;
        QSound::play("./nyam.wav");

        for(int i = 0; i < comidas.size(); i++){
            if(comidas.at(i)==comidaActual){
                indComida = i;
                //qDebug() << "Indice fruta comida: " << indComida;
            }
        }
        if(indComida!=-1)
            vecesComidas[indComida]+=1;
        
        actualizarDatosGrafico();
        comidaX = ((random() % width()) /TAM ) * TAM ;
        comidaY = ((random() % height()) /TAM ) * TAM ;
        int nuevo = random() % comidas.length();
        comidaActual=comidas.at(nuevo);
    
        while (true){
            comidaX = ((random() % (width()-40)) /40 ) * 40;
   	        comidaY = ((random() % (height()-80)) /40 ) * 40;

            if ( !serpiente.contains(QPoint(comidaX,comidaY) ))
                break;
        } 

    }
   	    
    QString posicion = QString("Posicion X= ") + QString::number(xNueva)+
    QString(" Y= ") + QString::number(yNueva);
    
    textBarra->setText(posicion);
    

    if ( serpiente.contains(QPoint(xNueva,yNueva) )) {
   	    temporizador->stop();

        puntuacion = serpiente.size();
        tamanyoSerpiente = puntuacion;      
       // qDebug() << "Tmaño srpiente: " << tamanyoSerpiente;


        if (dNombreJugador == NULL){
            dNombreJugador = new DNombreJugador(this);    
        }

        dNombreJugador->exec();
        QString nombre = dNombreJugador->edtJugador->text();
        //qDebug() << "Nombre: " << nombre;

        guardarPuntuacion(nombre, puntuacion);
        mostrarPuntuaciones();
    }
    QPoint p(xNueva, yNueva);
    serpiente.prepend(p);
    if (segmentosQuedan == 0 )
   	    serpiente.pop_back();
    else
        segmentosQuedan--;




}

void MainWindow::slotCambiaDireccion(DControlPad::Direccion dir){

    switch(dir){
       case DControlPad::derecha :
 	        teclaPulsada = Qt::Key_Right;
 	        break;

        case DControlPad::izquierda :
	        teclaPulsada = Qt::Key_Left;
	        break;

        case DControlPad::arriba :
 	        teclaPulsada = Qt::Key_Up;
 	        break;

        case DControlPad::abajo :
	        teclaPulsada = Qt::Key_Down;
	        break; 
    }

}

void MainWindow::slotRecogerPosicionFruta(float frutaX, float frutaY){

    //qDebug() << "Posicion fruta: " << frutaX << " " << frutaY;

    float ancho = (float)width();
    float alto = (float)height();

    float coorX = frutaX * ancho;
    float coorY = frutaY * alto;

    int nuevaFrutaX = (int)coorX;
    int nuevaFrutaY = (int)coorY;

    comidaX = nuevaFrutaX;
    comidaY = nuevaFrutaY;

}

void MainWindow::slotRecogerPosicionDos(int frutaX, int frutaY){

    comidaX = frutaX;
    comidaY = frutaY;

}

void MainWindow::slotPanelDControl(){

    if (dControlPad == NULL){
            dControlPad = new DControlPad(this);    
        }

        dControlPad->show();
}

void MainWindow::slotDComidas(){

    if (dComidas == NULL){
            dComidas = new DComidas(&comidas);    
        }

        dComidas->exec();
}

void MainWindow::slotDPosicionFruta(){

    if(dPosicionFruta == NULL){
        dPosicionFruta = new DPosicionFruta(this);
    }
    connect(dPosicionFruta->widgetClick, SIGNAL(senyalClickRaton(float, float)), this, SLOT(slotRecogerPosicionFruta(float, float)));
    dPosicionFruta->show();

}

void MainWindow::slotDSecuenciaFrutas(){

    if(dSecuenciaFrutas == NULL){
        dSecuenciaFrutas = new DSecuenciaFrutas(comidas);
    }
    dSecuenciaFrutas->show();

}

void MainWindow::slotDPosicionarDos(){

    if(dPosicionarDos == NULL){
        dPosicionarDos = new DPosicionarDos(this);
        connect(dPosicionarDos->wPosicionarDos, SIGNAL(enviarClickRaton(int, int)), this, SLOT(slotRecogerPosicionDos(int, int)));
    }
    dPosicionarDos->show();

}

void MainWindow::slotDListaFrutas(){

    if(dListaFrutas == NULL){
        dListaFrutas = new DListaFrutas(comidas);
    }
    dListaFrutas->show();

}

void MainWindow::slotDInformacion(){
    tamanyoSerpiente = serpiente.size();
    if(dInformacion == NULL){
        dInformacion = new DInformacion(tamanyoSerpiente, this);

    }
    //qDebug() << "Serpiente tam: " << tamanyoSerpiente;
    dInformacion->show();

}

void MainWindow::slotDControlSnake(){
    if(dControlSnake == NULL){
        dControlSnake = new DControlSnake(temporizador);

    }
    dControlSnake->show();

}

void MainWindow::slotDInfDetallada(){
    if(dInfDetallada == NULL){
        dInfDetallada = new DInformacionDetallada(serpiente);
    }
    dInfDetallada->show();
}

void MainWindow::slotDExamen(){

    /*qDebug() << "tamanyo vector teclas" << teclas.size();
    for(int i = 0; i < teclas.size(); i++){
        qDebug() << teclas.at(i);
    }*/
    if(dExamen == NULL){
        //QVector<QString*> * punteroAteclas = teclas;
        dExamen = new DExamen(&posiciones, &teclas);
    }
    dExamen->show();
}

void MainWindow::slotDExamenDibujo(){
    if(dExamenDibujo == NULL){
        dExamenDibujo = new DExamenDibujo(&teclas);
    }
    dExamenDibujo->show();
}