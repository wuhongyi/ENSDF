/****************************************************************************
** Meta object code from reading C++ file 'Nuclei.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Nuclei.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Nuclei.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Nuclei[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      27,   21,    7,    7, 0x08,
      58,   21,    7,    7, 0x08,
     100,   95,    7,    7, 0x08,
     137,    7,    7,    7, 0x08,
     160,    7,    7,    7, 0x08,
     172,    7,    7,    7, 0x08,
     184,    7,    7,    7, 0x08,
     194,    7,    7,    7, 0x08,
     213,    7,    7,    7, 0x08,
     222,    7,    7,    7, 0x08,
     232,    7,    7,    7, 0x08,
     248,  241,    7,    7, 0x08,
     288,    7,    7,    7, 0x08,
     301,    7,    7,    7, 0x08,
     314,    7,    7,    7, 0x08,
     332,    7,    7,    7, 0x08,
     344,   21,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Nuclei[] = {
    "Nuclei\0\0initialize()\0index\0"
    "loadSelectedDecay(QModelIndex)\0"
    "loadSearchResultCascade(QModelIndex)\0"
    "data\0updateDecayData(Decay::DecayDataSet)\0"
    "updateEnergySpectrum()\0svgExport()\0"
    "pdfExport()\0showAll()\0showOriginalSize()\0"
    "zoomIn()\0zoomOut()\0search()\0result\0"
    "searchFinished(SearchResultDataSource*)\0"
    "setPlotLin()\0setPlotLog()\0showPreferences()\0"
    "showAbout()\0processTabSelection(int)\0"
};

void Nuclei::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Nuclei *_t = static_cast<Nuclei *>(_o);
        switch (_id) {
        case 0: _t->initialize(); break;
        case 1: _t->loadSelectedDecay((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->loadSearchResultCascade((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->updateDecayData((*reinterpret_cast< Decay::DecayDataSet(*)>(_a[1]))); break;
        case 4: _t->updateEnergySpectrum(); break;
        case 5: _t->svgExport(); break;
        case 6: _t->pdfExport(); break;
        case 7: _t->showAll(); break;
        case 8: _t->showOriginalSize(); break;
        case 9: _t->zoomIn(); break;
        case 10: _t->zoomOut(); break;
        case 11: _t->search(); break;
        case 12: _t->searchFinished((*reinterpret_cast< SearchResultDataSource*(*)>(_a[1]))); break;
        case 13: _t->setPlotLin(); break;
        case 14: _t->setPlotLog(); break;
        case 15: _t->showPreferences(); break;
        case 16: _t->showAbout(); break;
        case 17: _t->processTabSelection((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Nuclei::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Nuclei::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Nuclei,
      qt_meta_data_Nuclei, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Nuclei::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Nuclei::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Nuclei::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Nuclei))
        return static_cast<void*>(const_cast< Nuclei*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Nuclei::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
