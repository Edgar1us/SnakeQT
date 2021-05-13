/****************************************************************************
** Meta object code from reading C++ file 'DControlPad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "DControlPad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DControlPad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DControlPad_t {
    QByteArrayData data[6];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DControlPad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DControlPad_t qt_meta_stringdata_DControlPad = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DControlPad"
QT_MOC_LITERAL(1, 12, 15), // "cambioDireccion"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 22), // "DControlPad::Direccion"
QT_MOC_LITERAL(4, 52, 18), // "slotDireccionAbajo"
QT_MOC_LITERAL(5, 71, 20) // "slotDireccionDerecha"

    },
    "DControlPad\0cambioDireccion\0\0"
    "DControlPad::Direccion\0slotDireccionAbajo\0"
    "slotDireccionDerecha"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DControlPad[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DControlPad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DControlPad *_t = static_cast<DControlPad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cambioDireccion((*reinterpret_cast< DControlPad::Direccion(*)>(_a[1]))); break;
        case 1: _t->slotDireccionAbajo(); break;
        case 2: _t->slotDireccionDerecha(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DControlPad::*_t)(DControlPad::Direccion );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DControlPad::cambioDireccion)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DControlPad::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DControlPad.data,
      qt_meta_data_DControlPad,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DControlPad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DControlPad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DControlPad.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DControlPad"))
        return static_cast< Ui::DControlPad*>(this);
    return QDialog::qt_metacast(_clname);
}

int DControlPad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DControlPad::cambioDireccion(DControlPad::Direccion _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
