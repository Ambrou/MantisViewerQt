/****************************************************************************
** Meta object code from reading C++ file 'mantisviewerihmqt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mantisviewerihmqt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mantisviewerihmqt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MantisViewerIHMQt_t {
    QByteArrayData data[6];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MantisViewerIHMQt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MantisViewerIHMQt_t qt_meta_stringdata_MantisViewerIHMQt = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MantisViewerIHMQt"
QT_MOC_LITERAL(1, 18, 20), // "onModificationProjet"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 9), // "newProjet"
QT_MOC_LITERAL(4, 50, 21), // "onModificationVersion"
QT_MOC_LITERAL(5, 72, 10) // "newVersion"

    },
    "MantisViewerIHMQt\0onModificationProjet\0"
    "\0newProjet\0onModificationVersion\0"
    "newVersion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MantisViewerIHMQt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void MantisViewerIHMQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MantisViewerIHMQt *_t = static_cast<MantisViewerIHMQt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onModificationProjet((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onModificationVersion((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MantisViewerIHMQt::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MantisViewerIHMQt.data,
      qt_meta_data_MantisViewerIHMQt,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MantisViewerIHMQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MantisViewerIHMQt::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MantisViewerIHMQt.stringdata0))
        return static_cast<void*>(const_cast< MantisViewerIHMQt*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MantisViewerIHMQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
