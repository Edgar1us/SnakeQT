/****************************************************************************
** Meta object code from reading C++ file 'mainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "slotTemporizador"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "slotCambiaDireccion"
QT_MOC_LITERAL(4, 49, 22), // "DControlPad::Direccion"
QT_MOC_LITERAL(5, 72, 17), // "slotPanelDControl"
QT_MOC_LITERAL(6, 90, 12), // "slotDComidas"
QT_MOC_LITERAL(7, 103, 18), // "slotDPosicionFruta"
QT_MOC_LITERAL(8, 122, 18), // "slotDPosicionarDos"
QT_MOC_LITERAL(9, 141, 20), // "slotDSecuenciaFrutas"
QT_MOC_LITERAL(10, 162, 16), // "slotDListaFrutas"
QT_MOC_LITERAL(11, 179, 16), // "slotDInformacion"
QT_MOC_LITERAL(12, 196, 17), // "slotDControlSnake"
QT_MOC_LITERAL(13, 214, 17), // "slotDInfDetallada"
QT_MOC_LITERAL(14, 232, 11), // "slotDExamen"
QT_MOC_LITERAL(15, 244, 17), // "slotDExamenDibujo"
QT_MOC_LITERAL(16, 262, 24), // "slotRecogerPosicionFruta"
QT_MOC_LITERAL(17, 287, 22) // "slotRecogerPosicionDos"

    },
    "MainWindow\0slotTemporizador\0\0"
    "slotCambiaDireccion\0DControlPad::Direccion\0"
    "slotPanelDControl\0slotDComidas\0"
    "slotDPosicionFruta\0slotDPosicionarDos\0"
    "slotDSecuenciaFrutas\0slotDListaFrutas\0"
    "slotDInformacion\0slotDControlSnake\0"
    "slotDInfDetallada\0slotDExamen\0"
    "slotDExamenDibujo\0slotRecogerPosicionFruta\0"
    "slotRecogerPosicionDos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    1,   90,    2, 0x0a /* Public */,
       5,    0,   93,    2, 0x0a /* Public */,
       6,    0,   94,    2, 0x0a /* Public */,
       7,    0,   95,    2, 0x0a /* Public */,
       8,    0,   96,    2, 0x0a /* Public */,
       9,    0,   97,    2, 0x0a /* Public */,
      10,    0,   98,    2, 0x0a /* Public */,
      11,    0,   99,    2, 0x0a /* Public */,
      12,    0,  100,    2, 0x0a /* Public */,
      13,    0,  101,    2, 0x0a /* Public */,
      14,    0,  102,    2, 0x0a /* Public */,
      15,    0,  103,    2, 0x0a /* Public */,
      16,    2,  104,    2, 0x0a /* Public */,
      17,    2,  109,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotTemporizador(); break;
        case 1: _t->slotCambiaDireccion((*reinterpret_cast< DControlPad::Direccion(*)>(_a[1]))); break;
        case 2: _t->slotPanelDControl(); break;
        case 3: _t->slotDComidas(); break;
        case 4: _t->slotDPosicionFruta(); break;
        case 5: _t->slotDPosicionarDos(); break;
        case 6: _t->slotDSecuenciaFrutas(); break;
        case 7: _t->slotDListaFrutas(); break;
        case 8: _t->slotDInformacion(); break;
        case 9: _t->slotDControlSnake(); break;
        case 10: _t->slotDInfDetallada(); break;
        case 11: _t->slotDExamen(); break;
        case 12: _t->slotDExamenDibujo(); break;
        case 13: _t->slotRecogerPosicionFruta((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 14: _t->slotRecogerPosicionDos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
