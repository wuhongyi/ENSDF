/****************************************************************************
** Meta object code from reading C++ file 'Decay.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Decay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Decay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Decay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,    7,    6,    6, 0x05,
      39,   34,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      82,   77,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Decay[] = {
    "Decay\0\0enable\0enabledShadow(bool)\0"
    "data\0updatedDecayData(Decay::DecayDataSet)\0"
    "item\0itemClicked(ClickableItem*)\0"
};

void Decay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Decay *_t = static_cast<Decay *>(_o);
        switch (_id) {
        case 0: _t->enabledShadow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updatedDecayData((*reinterpret_cast< Decay::DecayDataSet(*)>(_a[1]))); break;
        case 2: _t->itemClicked((*reinterpret_cast< ClickableItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Decay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Decay::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Decay,
      qt_meta_data_Decay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Decay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Decay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Decay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Decay))
        return static_cast<void*>(const_cast< Decay*>(this));
    return QObject::qt_metacast(_clname);
}

int Decay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Decay::enabledShadow(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Decay::updatedDecayData(Decay::DecayDataSet _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
