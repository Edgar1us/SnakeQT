/****************************************************************************
** Meta object code from reading C++ file 'DControlSnake.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "DControlSnake.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DControlSnake.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DControlSnake_t {
    QByteArrayData data[6];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DControlSnake_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DControlSnake_t qt_meta_stringdata_DControlSnake = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DControlSnake"
QT_MOC_LITERAL(1, 14, 23), // "slotBotonPararSerpiente"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 21), // "slotVelocidadMasSnake"
QT_MOC_LITERAL(4, 61, 23), // "slotVelocidadMenosSnake"
QT_MOC_LITERAL(5, 85, 26) // "slotBotonReanudarSerpiente"

    },
    "DControlSnake\0slotBotonPararSerpiente\0"
    "\0slotVelocidadMasSnake\0slotVelocidadMenosSnake\0"
    "slotBotonReanudarSerpiente"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DControlSnake[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DControlSnake::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DControlSnake *_t = static_cast<DControlSnake *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotBotonPararSerpiente(); break;
        case 1: _t->slotVelocidadMasSnake(); break;
        case 2: _t->slotVelocidadMenosSnake(); break;
        case 3: _t->slotBotonReanudarSerpiente(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DControlSnake::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DControlSnake.data,
      qt_meta_data_DControlSnake,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DControlSnake::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DControlSnake::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DControlSnake.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DControlSnake"))
        return static_cast< Ui::DControlSnake*>(this);
    return QDialog::qt_metacast(_clname);
}

int DControlSnake::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
