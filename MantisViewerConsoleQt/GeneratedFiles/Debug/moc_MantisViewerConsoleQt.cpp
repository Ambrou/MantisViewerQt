/****************************************************************************
** Meta object code from reading C++ file 'MantisViewerConsoleQt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MantisViewerConsoleQt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MantisViewerConsoleQt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MantisViewerConsoleQt_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MantisViewerConsoleQt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MantisViewerConsoleQt_t qt_meta_stringdata_MantisViewerConsoleQt = {
    {
QT_MOC_LITERAL(0, 0, 21), // "MantisViewerConsoleQt"
QT_MOC_LITERAL(1, 22, 7), // "quitter"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "MantisViewerConsoleQt\0quitter\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MantisViewerConsoleQt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void MantisViewerConsoleQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MantisViewerConsoleQt *_t = static_cast<MantisViewerConsoleQt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->quitter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MantisViewerConsoleQt::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisViewerConsoleQt::quitter)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MantisViewerConsoleQt::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MantisViewerConsoleQt.data,
      qt_meta_data_MantisViewerConsoleQt,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MantisViewerConsoleQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MantisViewerConsoleQt::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MantisViewerConsoleQt.stringdata0))
        return static_cast<void*>(const_cast< MantisViewerConsoleQt*>(this));
    return QThread::qt_metacast(_clname);
}

int MantisViewerConsoleQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MantisViewerConsoleQt::quitter()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE