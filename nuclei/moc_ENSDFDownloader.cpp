/****************************************************************************
** Meta object code from reading C++ file 'ENSDFDownloader.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ENSDFDownloader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ENSDFDownloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ENSDFDownloader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      28,   16,   16,   16, 0x08,
      42,   16,   16,   16, 0x08,
      67,   58,   16,   16, 0x08,
      95,   91,   16,   16, 0x08,
     129,  123,   16,   16, 0x08,
     161,  150,   16,   16, 0x08,
     197,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ENSDFDownloader[] = {
    "ENSDFDownloader\0\0download()\0selectLocal()\0"
    "setupDownload()\0id,error\0"
    "ftpDispatcher(int,bool)\0url\0"
    "ftpAppendListInfo(QUrlInfo)\0state\0"
    "ftpProcessState(int)\0done,total\0"
    "ftpUpdateProgressBar(qint64,qint64)\0"
    "resetFtpTransfer()\0"
};

void ENSDFDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ENSDFDownloader *_t = static_cast<ENSDFDownloader *>(_o);
        switch (_id) {
        case 0: _t->download(); break;
        case 1: _t->selectLocal(); break;
        case 2: _t->setupDownload(); break;
        case 3: _t->ftpDispatcher((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->ftpAppendListInfo((*reinterpret_cast< const QUrlInfo(*)>(_a[1]))); break;
        case 5: _t->ftpProcessState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->ftpUpdateProgressBar((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: _t->resetFtpTransfer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ENSDFDownloader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ENSDFDownloader::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ENSDFDownloader,
      qt_meta_data_ENSDFDownloader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ENSDFDownloader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ENSDFDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ENSDFDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ENSDFDownloader))
        return static_cast<void*>(const_cast< ENSDFDownloader*>(this));
    return QDialog::qt_metacast(_clname);
}

int ENSDFDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
