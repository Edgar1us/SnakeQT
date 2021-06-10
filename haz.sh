#!/bin/bash
make clean
rm *.pro
qmake -project
fichero=$( ls *.pro )
#echo "QT += widgets multimedia multimediawidgets" >> $fichero
#echo "QT += widgets charts" >> $fichero
echo "QT += widgets multimedia charts" >> $fichero
echo "CONFIG += warn_off" >>$fichero
qmake
make

