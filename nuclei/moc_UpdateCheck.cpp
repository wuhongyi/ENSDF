/****************************************************************************
** Meta object code from reading C++ file 'UpdateCheck.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "UpdateCheck.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UpdateCheck.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UpdateCheck[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x08,
      49,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UpdateCheck[] = {
    "UpdateCheck\0\0reply\0replyFinished(QNetworkReply*)\0"
    "openWebsite()\0"
};

void UpdateCheck::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UpdateCheck *_t = static_cast<UpdateCheck *>(_o);
        switch (_id) {
        case 0: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: _t->openWebsite(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UpdateCheck::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UpdateCheck::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UpdateCheck,
      qt_meta_data_UpdateCheck, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UpdateCheck::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UpdateCheck::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UpdateCheck::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateCheck))
        return static_cast<void*>(const_cast< UpdateCheck*>(this));
    return QObject::qt_metacast(_clname);
}

int UpdateCheck::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
