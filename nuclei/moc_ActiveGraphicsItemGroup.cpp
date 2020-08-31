/****************************************************************************
** Meta object code from reading C++ file 'ActiveGraphicsItemGroup.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ActiveGraphicsItemGroup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ActiveGraphicsItemGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ActiveGraphicsItemGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   25,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      61,   54,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ActiveGraphicsItemGroup[] = {
    "ActiveGraphicsItemGroup\0\0item\0"
    "clicked(ClickableItem*)\0enable\0"
    "setShadowEnabled(bool)\0"
};

void ActiveGraphicsItemGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ActiveGraphicsItemGroup *_t = static_cast<ActiveGraphicsItemGroup *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< ClickableItem*(*)>(_a[1]))); break;
        case 1: _t->setShadowEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ActiveGraphicsItemGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ActiveGraphicsItemGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ActiveGraphicsItemGroup,
      qt_meta_data_ActiveGraphicsItemGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ActiveGraphicsItemGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ActiveGraphicsItemGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ActiveGraphicsItemGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ActiveGraphicsItemGroup))
        return static_cast<void*>(const_cast< ActiveGraphicsItemGroup*>(this));
    if (!strcmp(_clname, "QGraphicsItemGroup"))
        return static_cast< QGraphicsItemGroup*>(const_cast< ActiveGraphicsItemGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int ActiveGraphicsItemGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ActiveGraphicsItemGroup::clicked(ClickableItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
