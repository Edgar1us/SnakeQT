/****************************************************************************
** Meta object code from reading C++ file 'DComidas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "DComidas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DComidas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DComidas_t {
    QByteArrayData data[8];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DComidas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DComidas_t qt_meta_stringdata_DComidas = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DComidas"
QT_MOC_LITERAL(1, 9, 22), // "slotTodasSeleccionadas"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "slotEliminarComidas"
QT_MOC_LITERAL(4, 53, 14), // "slotAddComidas"
QT_MOC_LITERAL(5, 68, 9), // "addComida"
QT_MOC_LITERAL(6, 78, 7), // "Comida*"
QT_MOC_LITERAL(7, 86, 2) // "nC"

    },
    "DComidas\0slotTodasSeleccionadas\0\0"
    "slotEliminarComidas\0slotAddComidas\0"
    "addComida\0Comida*\0nC"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DComidas[] = {

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
       5,    1,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void DComidas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DComidas *_t = static_cast<DComidas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotTodasSeleccionadas(); break;
        case 1: _t->slotEliminarComidas(); break;
        case 2: _t->slotAddComidas(); break;
        case 3: _t->addComida((*reinterpret_cast< Comida*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DComidas::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DComidas.data,
      qt_meta_data_DComidas,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DComidas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DComidas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DComidas.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DComidas"))
        return static_cast< Ui::DComidas*>(this);
    return QDialog::qt_metacast(_clname);
}

int DComidas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
