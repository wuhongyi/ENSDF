/****************************************************************************
** Meta object code from reading C++ file 'SearchResultDataSource.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SearchResultDataSource.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SearchResultDataSource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SearchResultDataSource[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      72,   23,   23,   23, 0x08,
      95,   87,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SearchResultDataSource[] = {
    "SearchResultDataSource\0\0result\0"
    "resultAvailable(SearchResultDataSource*)\0"
    "cancelThread()\0success\0threadEnded(bool)\0"
};

void SearchResultDataSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SearchResultDataSource *_t = static_cast<SearchResultDataSource *>(_o);
        switch (_id) {
        case 0: _t->resultAvailable((*reinterpret_cast< SearchResultDataSource*(*)>(_a[1]))); break;
        case 1: _t->cancelThread(); break;
        case 2: _t->threadEnded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SearchResultDataSource::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SearchResultDataSource::staticMetaObject = {
    { &AbstractDataSource::staticMetaObject, qt_meta_stringdata_SearchResultDataSource,
      qt_meta_data_SearchResultDataSource, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SearchResultDataSource::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SearchResultDataSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SearchResultDataSource::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchResultDataSource))
        return static_cast<void*>(const_cast< SearchResultDataSource*>(this));
    return AbstractDataSource::qt_metacast(_clname);
}

int SearchResultDataSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractDataSource::qt_metacall(_c, _id, _a);
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
void SearchResultDataSource::resultAvailable(SearchResultDataSource * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_SearchThread[] = {

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
      22,   14,   13,   13, 0x05,
      48,   40,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SearchThread[] = {
    "SearchThread\0\0success\0threadEnded(bool)\0"
    "percent\0percentComplete(int)\0"
    "processThreadEnd()\0"
};

void SearchThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SearchThread *_t = static_cast<SearchThread *>(_o);
        switch (_id) {
        case 0: _t->threadEnded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->percentComplete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->processThreadEnd(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SearchThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SearchThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_SearchThread,
      qt_meta_data_SearchThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SearchThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SearchThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SearchThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchThread))
        return static_cast<void*>(const_cast< SearchThread*>(this));
    return QThread::qt_metacast(_clname);
}

int SearchThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void SearchThread::threadEnded(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SearchThread::percentComplete(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
