/****************************************************************************
** Meta object code from reading C++ file 'SearchDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SearchDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SearchDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SearchDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   13,   13,   13, 0x0a,
      71,   13,   13,   13, 0x08,
     102,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SearchDialog[] = {
    "SearchDialog\0\0result\0"
    "resultAvailable(SearchResultDataSource*)\0"
    "accept()\0updateAnisotropyAndOrButtons()\0"
    "updateMuQAndOrButtons()\0"
};

void SearchDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SearchDialog *_t = static_cast<SearchDialog *>(_o);
        switch (_id) {
        case 0: _t->resultAvailable((*reinterpret_cast< SearchResultDataSource*(*)>(_a[1]))); break;
        case 1: _t->accept(); break;
        case 2: _t->updateAnisotropyAndOrButtons(); break;
        case 3: _t->updateMuQAndOrButtons(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SearchDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SearchDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SearchDialog,
      qt_meta_data_SearchDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SearchDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SearchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SearchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchDialog))
        return static_cast<void*>(const_cast< SearchDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SearchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SearchDialog::resultAvailable(SearchResultDataSource * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
