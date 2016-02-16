/****************************************************************************
** Meta object code from reading C++ file 'mantisconnect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MantisManager/mantisconnect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mantisconnect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Mc_versionJob_t {
    QByteArrayData data[5];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_versionJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_versionJob_t qt_meta_stringdata_Mc_versionJob = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Mc_versionJob"
QT_MOC_LITERAL(1, 14, 12), // "slotFinished"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 54, 7) // "watcher"

    },
    "Mc_versionJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_versionJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_versionJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_versionJob *_t = static_cast<Mc_versionJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_versionJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_versionJob.data,
      qt_meta_data_Mc_versionJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_versionJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_versionJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_versionJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_versionJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_versionJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_enum_getJob_t {
    QByteArrayData data[5];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_enum_getJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_enum_getJob_t qt_meta_stringdata_Mc_enum_getJob = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Mc_enum_getJob"
QT_MOC_LITERAL(1, 15, 12), // "slotFinished"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 55, 7) // "watcher"

    },
    "Mc_enum_getJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_enum_getJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_enum_getJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_enum_getJob *_t = static_cast<Mc_enum_getJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_enum_getJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_enum_getJob.data,
      qt_meta_data_Mc_enum_getJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_enum_getJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_enum_getJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_enum_getJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_enum_getJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_enum_getJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_issue_existsJob_t {
    QByteArrayData data[5];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_issue_existsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_issue_existsJob_t qt_meta_stringdata_Mc_issue_existsJob = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Mc_issue_existsJob"
QT_MOC_LITERAL(1, 19, 12), // "slotFinished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 59, 7) // "watcher"

    },
    "Mc_issue_existsJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_issue_existsJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_issue_existsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_issue_existsJob *_t = static_cast<Mc_issue_existsJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_issue_existsJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_issue_existsJob.data,
      qt_meta_data_Mc_issue_existsJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_issue_existsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_issue_existsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_issue_existsJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_issue_existsJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_issue_existsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_issue_get_biggest_idJob_t {
    QByteArrayData data[5];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_issue_get_biggest_idJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_issue_get_biggest_idJob_t qt_meta_stringdata_Mc_issue_get_biggest_idJob = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Mc_issue_get_biggest_idJob"
QT_MOC_LITERAL(1, 27, 12), // "slotFinished"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 67, 7) // "watcher"

    },
    "Mc_issue_get_biggest_idJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_issue_get_biggest_idJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_issue_get_biggest_idJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_issue_get_biggest_idJob *_t = static_cast<Mc_issue_get_biggest_idJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_issue_get_biggest_idJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_issue_get_biggest_idJob.data,
      qt_meta_data_Mc_issue_get_biggest_idJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_issue_get_biggest_idJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_issue_get_biggest_idJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_issue_get_biggest_idJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_issue_get_biggest_idJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_issue_get_biggest_idJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_issue_get_id_from_summaryJob_t {
    QByteArrayData data[5];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_issue_get_id_from_summaryJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_issue_get_id_from_summaryJob_t qt_meta_stringdata_Mc_issue_get_id_from_summaryJob = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Mc_issue_get_id_from_summaryJob"
QT_MOC_LITERAL(1, 32, 12), // "slotFinished"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 72, 7) // "watcher"

    },
    "Mc_issue_get_id_from_summaryJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_issue_get_id_from_summaryJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_issue_get_id_from_summaryJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_issue_get_id_from_summaryJob *_t = static_cast<Mc_issue_get_id_from_summaryJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_issue_get_id_from_summaryJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_issue_get_id_from_summaryJob.data,
      qt_meta_data_Mc_issue_get_id_from_summaryJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_issue_get_id_from_summaryJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_issue_get_id_from_summaryJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_issue_get_id_from_summaryJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_issue_get_id_from_summaryJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_issue_get_id_from_summaryJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_issue_deleteJob_t {
    QByteArrayData data[5];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_issue_deleteJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_issue_deleteJob_t qt_meta_stringdata_Mc_issue_deleteJob = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Mc_issue_deleteJob"
QT_MOC_LITERAL(1, 19, 12), // "slotFinished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 59, 7) // "watcher"

    },
    "Mc_issue_deleteJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_issue_deleteJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_issue_deleteJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_issue_deleteJob *_t = static_cast<Mc_issue_deleteJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_issue_deleteJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_issue_deleteJob.data,
      qt_meta_data_Mc_issue_deleteJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_issue_deleteJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_issue_deleteJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_issue_deleteJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_issue_deleteJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_issue_deleteJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_issue_note_deleteJob_t {
    QByteArrayData data[5];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_issue_note_deleteJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_issue_note_deleteJob_t qt_meta_stringdata_Mc_issue_note_deleteJob = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Mc_issue_note_deleteJob"
QT_MOC_LITERAL(1, 24, 12), // "slotFinished"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 64, 7) // "watcher"

    },
    "Mc_issue_note_deleteJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_issue_note_deleteJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_issue_note_deleteJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_issue_note_deleteJob *_t = static_cast<Mc_issue_note_deleteJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_issue_note_deleteJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_issue_note_deleteJob.data,
      qt_meta_data_Mc_issue_note_deleteJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_issue_note_deleteJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_issue_note_deleteJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_issue_note_deleteJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_issue_note_deleteJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_issue_note_deleteJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_issue_relationship_deleteJob_t {
    QByteArrayData data[5];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_issue_relationship_deleteJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_issue_relationship_deleteJob_t qt_meta_stringdata_Mc_issue_relationship_deleteJob = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Mc_issue_relationship_deleteJob"
QT_MOC_LITERAL(1, 32, 12), // "slotFinished"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 72, 7) // "watcher"

    },
    "Mc_issue_relationship_deleteJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_issue_relationship_deleteJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_issue_relationship_deleteJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_issue_relationship_deleteJob *_t = static_cast<Mc_issue_relationship_deleteJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_issue_relationship_deleteJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_issue_relationship_deleteJob.data,
      qt_meta_data_Mc_issue_relationship_deleteJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_issue_relationship_deleteJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_issue_relationship_deleteJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_issue_relationship_deleteJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_issue_relationship_deleteJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_issue_relationship_deleteJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_issue_attachment_addJob_t {
    QByteArrayData data[5];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_issue_attachment_addJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_issue_attachment_addJob_t qt_meta_stringdata_Mc_issue_attachment_addJob = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Mc_issue_attachment_addJob"
QT_MOC_LITERAL(1, 27, 12), // "slotFinished"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 67, 7) // "watcher"

    },
    "Mc_issue_attachment_addJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_issue_attachment_addJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_issue_attachment_addJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_issue_attachment_addJob *_t = static_cast<Mc_issue_attachment_addJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_issue_attachment_addJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_issue_attachment_addJob.data,
      qt_meta_data_Mc_issue_attachment_addJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_issue_attachment_addJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_issue_attachment_addJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_issue_attachment_addJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_issue_attachment_addJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_issue_attachment_addJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_issue_attachment_deleteJob_t {
    QByteArrayData data[5];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_issue_attachment_deleteJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_issue_attachment_deleteJob_t qt_meta_stringdata_Mc_issue_attachment_deleteJob = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Mc_issue_attachment_deleteJob"
QT_MOC_LITERAL(1, 30, 12), // "slotFinished"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 70, 7) // "watcher"

    },
    "Mc_issue_attachment_deleteJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_issue_attachment_deleteJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_issue_attachment_deleteJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_issue_attachment_deleteJob *_t = static_cast<Mc_issue_attachment_deleteJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_issue_attachment_deleteJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_issue_attachment_deleteJob.data,
      qt_meta_data_Mc_issue_attachment_deleteJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_issue_attachment_deleteJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_issue_attachment_deleteJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_issue_attachment_deleteJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_issue_attachment_deleteJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_issue_attachment_deleteJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_issue_attachment_getJob_t {
    QByteArrayData data[5];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_issue_attachment_getJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_issue_attachment_getJob_t qt_meta_stringdata_Mc_issue_attachment_getJob = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Mc_issue_attachment_getJob"
QT_MOC_LITERAL(1, 27, 12), // "slotFinished"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 67, 7) // "watcher"

    },
    "Mc_issue_attachment_getJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_issue_attachment_getJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_issue_attachment_getJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_issue_attachment_getJob *_t = static_cast<Mc_issue_attachment_getJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_issue_attachment_getJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_issue_attachment_getJob.data,
      qt_meta_data_Mc_issue_attachment_getJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_issue_attachment_getJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_issue_attachment_getJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_issue_attachment_getJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_issue_attachment_getJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_issue_attachment_getJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_deleteJob_t {
    QByteArrayData data[5];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_deleteJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_deleteJob_t qt_meta_stringdata_Mc_project_deleteJob = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Mc_project_deleteJob"
QT_MOC_LITERAL(1, 21, 12), // "slotFinished"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 61, 7) // "watcher"

    },
    "Mc_project_deleteJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_deleteJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_deleteJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_deleteJob *_t = static_cast<Mc_project_deleteJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_deleteJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_deleteJob.data,
      qt_meta_data_Mc_project_deleteJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_deleteJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_deleteJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_deleteJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_deleteJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_deleteJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_get_id_from_nameJob_t {
    QByteArrayData data[5];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_get_id_from_nameJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_get_id_from_nameJob_t qt_meta_stringdata_Mc_project_get_id_from_nameJob = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Mc_project_get_id_from_nameJob"
QT_MOC_LITERAL(1, 31, 12), // "slotFinished"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 71, 7) // "watcher"

    },
    "Mc_project_get_id_from_nameJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_get_id_from_nameJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_get_id_from_nameJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_get_id_from_nameJob *_t = static_cast<Mc_project_get_id_from_nameJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_get_id_from_nameJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_get_id_from_nameJob.data,
      qt_meta_data_Mc_project_get_id_from_nameJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_get_id_from_nameJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_get_id_from_nameJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_get_id_from_nameJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_get_id_from_nameJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_get_id_from_nameJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_add_categoryJob_t {
    QByteArrayData data[5];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_add_categoryJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_add_categoryJob_t qt_meta_stringdata_Mc_project_add_categoryJob = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Mc_project_add_categoryJob"
QT_MOC_LITERAL(1, 27, 12), // "slotFinished"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 67, 7) // "watcher"

    },
    "Mc_project_add_categoryJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_add_categoryJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_add_categoryJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_add_categoryJob *_t = static_cast<Mc_project_add_categoryJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_add_categoryJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_add_categoryJob.data,
      qt_meta_data_Mc_project_add_categoryJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_add_categoryJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_add_categoryJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_add_categoryJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_add_categoryJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_add_categoryJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_delete_categoryJob_t {
    QByteArrayData data[5];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_delete_categoryJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_delete_categoryJob_t qt_meta_stringdata_Mc_project_delete_categoryJob = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Mc_project_delete_categoryJob"
QT_MOC_LITERAL(1, 30, 12), // "slotFinished"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 70, 7) // "watcher"

    },
    "Mc_project_delete_categoryJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_delete_categoryJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_delete_categoryJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_delete_categoryJob *_t = static_cast<Mc_project_delete_categoryJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_delete_categoryJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_delete_categoryJob.data,
      qt_meta_data_Mc_project_delete_categoryJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_delete_categoryJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_delete_categoryJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_delete_categoryJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_delete_categoryJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_delete_categoryJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_rename_category_by_nameJob_t {
    QByteArrayData data[5];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_rename_category_by_nameJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_rename_category_by_nameJob_t qt_meta_stringdata_Mc_project_rename_category_by_nameJob = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Mc_project_rename_category_by..."
QT_MOC_LITERAL(1, 38, 12), // "slotFinished"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 78, 7) // "watcher"

    },
    "Mc_project_rename_category_by_nameJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_rename_category_by_nameJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_rename_category_by_nameJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_rename_category_by_nameJob *_t = static_cast<Mc_project_rename_category_by_nameJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_rename_category_by_nameJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_rename_category_by_nameJob.data,
      qt_meta_data_Mc_project_rename_category_by_nameJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_rename_category_by_nameJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_rename_category_by_nameJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_rename_category_by_nameJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_rename_category_by_nameJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_rename_category_by_nameJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_version_deleteJob_t {
    QByteArrayData data[5];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_version_deleteJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_version_deleteJob_t qt_meta_stringdata_Mc_project_version_deleteJob = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Mc_project_version_deleteJob"
QT_MOC_LITERAL(1, 29, 12), // "slotFinished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 69, 7) // "watcher"

    },
    "Mc_project_version_deleteJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_version_deleteJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_version_deleteJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_version_deleteJob *_t = static_cast<Mc_project_version_deleteJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_version_deleteJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_version_deleteJob.data,
      qt_meta_data_Mc_project_version_deleteJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_version_deleteJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_version_deleteJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_version_deleteJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_version_deleteJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_version_deleteJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_attachment_getJob_t {
    QByteArrayData data[5];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_attachment_getJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_attachment_getJob_t qt_meta_stringdata_Mc_project_attachment_getJob = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Mc_project_attachment_getJob"
QT_MOC_LITERAL(1, 29, 12), // "slotFinished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 69, 7) // "watcher"

    },
    "Mc_project_attachment_getJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_attachment_getJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_attachment_getJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_attachment_getJob *_t = static_cast<Mc_project_attachment_getJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_attachment_getJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_attachment_getJob.data,
      qt_meta_data_Mc_project_attachment_getJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_attachment_getJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_attachment_getJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_attachment_getJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_attachment_getJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_attachment_getJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_attachment_addJob_t {
    QByteArrayData data[5];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_attachment_addJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_attachment_addJob_t qt_meta_stringdata_Mc_project_attachment_addJob = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Mc_project_attachment_addJob"
QT_MOC_LITERAL(1, 29, 12), // "slotFinished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 69, 7) // "watcher"

    },
    "Mc_project_attachment_addJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_attachment_addJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_attachment_addJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_attachment_addJob *_t = static_cast<Mc_project_attachment_addJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_attachment_addJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_attachment_addJob.data,
      qt_meta_data_Mc_project_attachment_addJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_attachment_addJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_attachment_addJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_attachment_addJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_attachment_addJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_attachment_addJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_attachment_deleteJob_t {
    QByteArrayData data[5];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_attachment_deleteJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_attachment_deleteJob_t qt_meta_stringdata_Mc_project_attachment_deleteJob = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Mc_project_attachment_deleteJob"
QT_MOC_LITERAL(1, 32, 12), // "slotFinished"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 72, 7) // "watcher"

    },
    "Mc_project_attachment_deleteJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_attachment_deleteJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_attachment_deleteJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_attachment_deleteJob *_t = static_cast<Mc_project_attachment_deleteJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_attachment_deleteJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_attachment_deleteJob.data,
      qt_meta_data_Mc_project_attachment_deleteJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_attachment_deleteJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_attachment_deleteJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_attachment_deleteJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_attachment_deleteJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_attachment_deleteJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_config_get_stringJob_t {
    QByteArrayData data[5];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_config_get_stringJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_config_get_stringJob_t qt_meta_stringdata_Mc_config_get_stringJob = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Mc_config_get_stringJob"
QT_MOC_LITERAL(1, 24, 12), // "slotFinished"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 64, 7) // "watcher"

    },
    "Mc_config_get_stringJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_config_get_stringJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_config_get_stringJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_config_get_stringJob *_t = static_cast<Mc_config_get_stringJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_config_get_stringJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_config_get_stringJob.data,
      qt_meta_data_Mc_config_get_stringJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_config_get_stringJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_config_get_stringJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_config_get_stringJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_config_get_stringJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_config_get_stringJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_issue_checkinJob_t {
    QByteArrayData data[5];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_issue_checkinJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_issue_checkinJob_t qt_meta_stringdata_Mc_issue_checkinJob = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Mc_issue_checkinJob"
QT_MOC_LITERAL(1, 20, 12), // "slotFinished"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 60, 7) // "watcher"

    },
    "Mc_issue_checkinJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_issue_checkinJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_issue_checkinJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_issue_checkinJob *_t = static_cast<Mc_issue_checkinJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_issue_checkinJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_issue_checkinJob.data,
      qt_meta_data_Mc_issue_checkinJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_issue_checkinJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_issue_checkinJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_issue_checkinJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_issue_checkinJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_issue_checkinJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_enum_statusJob_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_enum_statusJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_enum_statusJob_t qt_meta_stringdata_Mc_enum_statusJob = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Mc_enum_statusJob"
QT_MOC_LITERAL(1, 18, 12), // "slotFinished"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 58, 7) // "watcher"

    },
    "Mc_enum_statusJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_enum_statusJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_enum_statusJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_enum_statusJob *_t = static_cast<Mc_enum_statusJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_enum_statusJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_enum_statusJob.data,
      qt_meta_data_Mc_enum_statusJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_enum_statusJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_enum_statusJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_enum_statusJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_enum_statusJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_enum_statusJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_enum_prioritiesJob_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_enum_prioritiesJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_enum_prioritiesJob_t qt_meta_stringdata_Mc_enum_prioritiesJob = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Mc_enum_prioritiesJob"
QT_MOC_LITERAL(1, 22, 12), // "slotFinished"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 62, 7) // "watcher"

    },
    "Mc_enum_prioritiesJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_enum_prioritiesJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_enum_prioritiesJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_enum_prioritiesJob *_t = static_cast<Mc_enum_prioritiesJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_enum_prioritiesJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_enum_prioritiesJob.data,
      qt_meta_data_Mc_enum_prioritiesJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_enum_prioritiesJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_enum_prioritiesJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_enum_prioritiesJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_enum_prioritiesJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_enum_prioritiesJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_enum_severitiesJob_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_enum_severitiesJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_enum_severitiesJob_t qt_meta_stringdata_Mc_enum_severitiesJob = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Mc_enum_severitiesJob"
QT_MOC_LITERAL(1, 22, 12), // "slotFinished"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 62, 7) // "watcher"

    },
    "Mc_enum_severitiesJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_enum_severitiesJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_enum_severitiesJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_enum_severitiesJob *_t = static_cast<Mc_enum_severitiesJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_enum_severitiesJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_enum_severitiesJob.data,
      qt_meta_data_Mc_enum_severitiesJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_enum_severitiesJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_enum_severitiesJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_enum_severitiesJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_enum_severitiesJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_enum_severitiesJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_enum_reproducibilitiesJob_t {
    QByteArrayData data[5];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_enum_reproducibilitiesJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_enum_reproducibilitiesJob_t qt_meta_stringdata_Mc_enum_reproducibilitiesJob = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Mc_enum_reproducibilitiesJob"
QT_MOC_LITERAL(1, 29, 12), // "slotFinished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 69, 7) // "watcher"

    },
    "Mc_enum_reproducibilitiesJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_enum_reproducibilitiesJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_enum_reproducibilitiesJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_enum_reproducibilitiesJob *_t = static_cast<Mc_enum_reproducibilitiesJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_enum_reproducibilitiesJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_enum_reproducibilitiesJob.data,
      qt_meta_data_Mc_enum_reproducibilitiesJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_enum_reproducibilitiesJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_enum_reproducibilitiesJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_enum_reproducibilitiesJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_enum_reproducibilitiesJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_enum_reproducibilitiesJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_enum_projectionsJob_t {
    QByteArrayData data[5];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_enum_projectionsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_enum_projectionsJob_t qt_meta_stringdata_Mc_enum_projectionsJob = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Mc_enum_projectionsJob"
QT_MOC_LITERAL(1, 23, 12), // "slotFinished"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 63, 7) // "watcher"

    },
    "Mc_enum_projectionsJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_enum_projectionsJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_enum_projectionsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_enum_projectionsJob *_t = static_cast<Mc_enum_projectionsJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_enum_projectionsJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_enum_projectionsJob.data,
      qt_meta_data_Mc_enum_projectionsJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_enum_projectionsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_enum_projectionsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_enum_projectionsJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_enum_projectionsJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_enum_projectionsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_enum_etasJob_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_enum_etasJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_enum_etasJob_t qt_meta_stringdata_Mc_enum_etasJob = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Mc_enum_etasJob"
QT_MOC_LITERAL(1, 16, 12), // "slotFinished"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 56, 7) // "watcher"

    },
    "Mc_enum_etasJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_enum_etasJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_enum_etasJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_enum_etasJob *_t = static_cast<Mc_enum_etasJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_enum_etasJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_enum_etasJob.data,
      qt_meta_data_Mc_enum_etasJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_enum_etasJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_enum_etasJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_enum_etasJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_enum_etasJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_enum_etasJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_enum_resolutionsJob_t {
    QByteArrayData data[5];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_enum_resolutionsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_enum_resolutionsJob_t qt_meta_stringdata_Mc_enum_resolutionsJob = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Mc_enum_resolutionsJob"
QT_MOC_LITERAL(1, 23, 12), // "slotFinished"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 63, 7) // "watcher"

    },
    "Mc_enum_resolutionsJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_enum_resolutionsJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_enum_resolutionsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_enum_resolutionsJob *_t = static_cast<Mc_enum_resolutionsJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_enum_resolutionsJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_enum_resolutionsJob.data,
      qt_meta_data_Mc_enum_resolutionsJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_enum_resolutionsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_enum_resolutionsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_enum_resolutionsJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_enum_resolutionsJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_enum_resolutionsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_enum_access_levelsJob_t {
    QByteArrayData data[5];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_enum_access_levelsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_enum_access_levelsJob_t qt_meta_stringdata_Mc_enum_access_levelsJob = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Mc_enum_access_levelsJob"
QT_MOC_LITERAL(1, 25, 12), // "slotFinished"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 65, 7) // "watcher"

    },
    "Mc_enum_access_levelsJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_enum_access_levelsJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_enum_access_levelsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_enum_access_levelsJob *_t = static_cast<Mc_enum_access_levelsJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_enum_access_levelsJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_enum_access_levelsJob.data,
      qt_meta_data_Mc_enum_access_levelsJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_enum_access_levelsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_enum_access_levelsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_enum_access_levelsJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_enum_access_levelsJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_enum_access_levelsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_enum_project_statusJob_t {
    QByteArrayData data[5];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_enum_project_statusJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_enum_project_statusJob_t qt_meta_stringdata_Mc_enum_project_statusJob = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Mc_enum_project_statusJob"
QT_MOC_LITERAL(1, 26, 12), // "slotFinished"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 66, 7) // "watcher"

    },
    "Mc_enum_project_statusJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_enum_project_statusJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_enum_project_statusJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_enum_project_statusJob *_t = static_cast<Mc_enum_project_statusJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_enum_project_statusJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_enum_project_statusJob.data,
      qt_meta_data_Mc_enum_project_statusJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_enum_project_statusJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_enum_project_statusJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_enum_project_statusJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_enum_project_statusJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_enum_project_statusJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_enum_project_view_statesJob_t {
    QByteArrayData data[5];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_enum_project_view_statesJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_enum_project_view_statesJob_t qt_meta_stringdata_Mc_enum_project_view_statesJob = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Mc_enum_project_view_statesJob"
QT_MOC_LITERAL(1, 31, 12), // "slotFinished"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 71, 7) // "watcher"

    },
    "Mc_enum_project_view_statesJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_enum_project_view_statesJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_enum_project_view_statesJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_enum_project_view_statesJob *_t = static_cast<Mc_enum_project_view_statesJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_enum_project_view_statesJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_enum_project_view_statesJob.data,
      qt_meta_data_Mc_enum_project_view_statesJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_enum_project_view_statesJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_enum_project_view_statesJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_enum_project_view_statesJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_enum_project_view_statesJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_enum_project_view_statesJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_enum_view_statesJob_t {
    QByteArrayData data[5];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_enum_view_statesJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_enum_view_statesJob_t qt_meta_stringdata_Mc_enum_view_statesJob = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Mc_enum_view_statesJob"
QT_MOC_LITERAL(1, 23, 12), // "slotFinished"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 63, 7) // "watcher"

    },
    "Mc_enum_view_statesJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_enum_view_statesJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_enum_view_statesJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_enum_view_statesJob *_t = static_cast<Mc_enum_view_statesJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_enum_view_statesJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_enum_view_statesJob.data,
      qt_meta_data_Mc_enum_view_statesJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_enum_view_statesJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_enum_view_statesJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_enum_view_statesJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_enum_view_statesJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_enum_view_statesJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_enum_custom_field_typesJob_t {
    QByteArrayData data[5];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_enum_custom_field_typesJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_enum_custom_field_typesJob_t qt_meta_stringdata_Mc_enum_custom_field_typesJob = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Mc_enum_custom_field_typesJob"
QT_MOC_LITERAL(1, 30, 12), // "slotFinished"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 70, 7) // "watcher"

    },
    "Mc_enum_custom_field_typesJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_enum_custom_field_typesJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_enum_custom_field_typesJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_enum_custom_field_typesJob *_t = static_cast<Mc_enum_custom_field_typesJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_enum_custom_field_typesJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_enum_custom_field_typesJob.data,
      qt_meta_data_Mc_enum_custom_field_typesJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_enum_custom_field_typesJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_enum_custom_field_typesJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_enum_custom_field_typesJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_enum_custom_field_typesJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_enum_custom_field_typesJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_issue_getJob_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_issue_getJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_issue_getJob_t qt_meta_stringdata_Mc_issue_getJob = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Mc_issue_getJob"
QT_MOC_LITERAL(1, 16, 12), // "slotFinished"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 56, 7) // "watcher"

    },
    "Mc_issue_getJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_issue_getJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_issue_getJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_issue_getJob *_t = static_cast<Mc_issue_getJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_issue_getJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_issue_getJob.data,
      qt_meta_data_Mc_issue_getJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_issue_getJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_issue_getJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_issue_getJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_issue_getJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_issue_getJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_issue_addJob_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_issue_addJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_issue_addJob_t qt_meta_stringdata_Mc_issue_addJob = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Mc_issue_addJob"
QT_MOC_LITERAL(1, 16, 12), // "slotFinished"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 56, 7) // "watcher"

    },
    "Mc_issue_addJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_issue_addJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_issue_addJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_issue_addJob *_t = static_cast<Mc_issue_addJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_issue_addJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_issue_addJob.data,
      qt_meta_data_Mc_issue_addJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_issue_addJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_issue_addJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_issue_addJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_issue_addJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_issue_addJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_issue_updateJob_t {
    QByteArrayData data[5];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_issue_updateJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_issue_updateJob_t qt_meta_stringdata_Mc_issue_updateJob = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Mc_issue_updateJob"
QT_MOC_LITERAL(1, 19, 12), // "slotFinished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 59, 7) // "watcher"

    },
    "Mc_issue_updateJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_issue_updateJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_issue_updateJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_issue_updateJob *_t = static_cast<Mc_issue_updateJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_issue_updateJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_issue_updateJob.data,
      qt_meta_data_Mc_issue_updateJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_issue_updateJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_issue_updateJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_issue_updateJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_issue_updateJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_issue_updateJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_issue_note_addJob_t {
    QByteArrayData data[5];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_issue_note_addJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_issue_note_addJob_t qt_meta_stringdata_Mc_issue_note_addJob = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Mc_issue_note_addJob"
QT_MOC_LITERAL(1, 21, 12), // "slotFinished"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 61, 7) // "watcher"

    },
    "Mc_issue_note_addJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_issue_note_addJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_issue_note_addJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_issue_note_addJob *_t = static_cast<Mc_issue_note_addJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_issue_note_addJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_issue_note_addJob.data,
      qt_meta_data_Mc_issue_note_addJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_issue_note_addJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_issue_note_addJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_issue_note_addJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_issue_note_addJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_issue_note_addJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_issue_relationship_addJob_t {
    QByteArrayData data[5];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_issue_relationship_addJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_issue_relationship_addJob_t qt_meta_stringdata_Mc_issue_relationship_addJob = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Mc_issue_relationship_addJob"
QT_MOC_LITERAL(1, 29, 12), // "slotFinished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 69, 7) // "watcher"

    },
    "Mc_issue_relationship_addJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_issue_relationship_addJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_issue_relationship_addJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_issue_relationship_addJob *_t = static_cast<Mc_issue_relationship_addJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_issue_relationship_addJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_issue_relationship_addJob.data,
      qt_meta_data_Mc_issue_relationship_addJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_issue_relationship_addJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_issue_relationship_addJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_issue_relationship_addJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_issue_relationship_addJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_issue_relationship_addJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_addJob_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_addJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_addJob_t qt_meta_stringdata_Mc_project_addJob = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Mc_project_addJob"
QT_MOC_LITERAL(1, 18, 12), // "slotFinished"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 58, 7) // "watcher"

    },
    "Mc_project_addJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_addJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_addJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_addJob *_t = static_cast<Mc_project_addJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_addJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_addJob.data,
      qt_meta_data_Mc_project_addJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_addJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_addJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_addJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_addJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_addJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_updateJob_t {
    QByteArrayData data[5];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_updateJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_updateJob_t qt_meta_stringdata_Mc_project_updateJob = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Mc_project_updateJob"
QT_MOC_LITERAL(1, 21, 12), // "slotFinished"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 61, 7) // "watcher"

    },
    "Mc_project_updateJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_updateJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_updateJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_updateJob *_t = static_cast<Mc_project_updateJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_updateJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_updateJob.data,
      qt_meta_data_Mc_project_updateJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_updateJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_updateJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_updateJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_updateJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_updateJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_get_issuesJob_t {
    QByteArrayData data[5];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_get_issuesJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_get_issuesJob_t qt_meta_stringdata_Mc_project_get_issuesJob = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Mc_project_get_issuesJob"
QT_MOC_LITERAL(1, 25, 12), // "slotFinished"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 65, 7) // "watcher"

    },
    "Mc_project_get_issuesJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_get_issuesJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_get_issuesJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_get_issuesJob *_t = static_cast<Mc_project_get_issuesJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_get_issuesJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_get_issuesJob.data,
      qt_meta_data_Mc_project_get_issuesJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_get_issuesJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_get_issuesJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_get_issuesJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_get_issuesJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_get_issuesJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_get_issue_headersJob_t {
    QByteArrayData data[5];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_get_issue_headersJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_get_issue_headersJob_t qt_meta_stringdata_Mc_project_get_issue_headersJob = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Mc_project_get_issue_headersJob"
QT_MOC_LITERAL(1, 32, 12), // "slotFinished"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 72, 7) // "watcher"

    },
    "Mc_project_get_issue_headersJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_get_issue_headersJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_get_issue_headersJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_get_issue_headersJob *_t = static_cast<Mc_project_get_issue_headersJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_get_issue_headersJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_get_issue_headersJob.data,
      qt_meta_data_Mc_project_get_issue_headersJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_get_issue_headersJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_get_issue_headersJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_get_issue_headersJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_get_issue_headersJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_get_issue_headersJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_get_usersJob_t {
    QByteArrayData data[5];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_get_usersJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_get_usersJob_t qt_meta_stringdata_Mc_project_get_usersJob = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Mc_project_get_usersJob"
QT_MOC_LITERAL(1, 24, 12), // "slotFinished"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 64, 7) // "watcher"

    },
    "Mc_project_get_usersJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_get_usersJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_get_usersJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_get_usersJob *_t = static_cast<Mc_project_get_usersJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_get_usersJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_get_usersJob.data,
      qt_meta_data_Mc_project_get_usersJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_get_usersJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_get_usersJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_get_usersJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_get_usersJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_get_usersJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_projects_get_user_accessibleJob_t {
    QByteArrayData data[5];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_projects_get_user_accessibleJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_projects_get_user_accessibleJob_t qt_meta_stringdata_Mc_projects_get_user_accessibleJob = {
    {
QT_MOC_LITERAL(0, 0, 34), // "Mc_projects_get_user_accessib..."
QT_MOC_LITERAL(1, 35, 12), // "slotFinished"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 75, 7) // "watcher"

    },
    "Mc_projects_get_user_accessibleJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_projects_get_user_accessibleJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_projects_get_user_accessibleJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_projects_get_user_accessibleJob *_t = static_cast<Mc_projects_get_user_accessibleJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_projects_get_user_accessibleJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_projects_get_user_accessibleJob.data,
      qt_meta_data_Mc_projects_get_user_accessibleJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_projects_get_user_accessibleJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_projects_get_user_accessibleJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_projects_get_user_accessibleJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_projects_get_user_accessibleJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_projects_get_user_accessibleJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_get_categoriesJob_t {
    QByteArrayData data[5];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_get_categoriesJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_get_categoriesJob_t qt_meta_stringdata_Mc_project_get_categoriesJob = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Mc_project_get_categoriesJob"
QT_MOC_LITERAL(1, 29, 12), // "slotFinished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 69, 7) // "watcher"

    },
    "Mc_project_get_categoriesJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_get_categoriesJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_get_categoriesJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_get_categoriesJob *_t = static_cast<Mc_project_get_categoriesJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_get_categoriesJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_get_categoriesJob.data,
      qt_meta_data_Mc_project_get_categoriesJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_get_categoriesJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_get_categoriesJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_get_categoriesJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_get_categoriesJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_get_categoriesJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_get_versionsJob_t {
    QByteArrayData data[5];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_get_versionsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_get_versionsJob_t qt_meta_stringdata_Mc_project_get_versionsJob = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Mc_project_get_versionsJob"
QT_MOC_LITERAL(1, 27, 12), // "slotFinished"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 67, 7) // "watcher"

    },
    "Mc_project_get_versionsJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_get_versionsJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_get_versionsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_get_versionsJob *_t = static_cast<Mc_project_get_versionsJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_get_versionsJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_get_versionsJob.data,
      qt_meta_data_Mc_project_get_versionsJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_get_versionsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_get_versionsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_get_versionsJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_get_versionsJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_get_versionsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_version_addJob_t {
    QByteArrayData data[5];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_version_addJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_version_addJob_t qt_meta_stringdata_Mc_project_version_addJob = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Mc_project_version_addJob"
QT_MOC_LITERAL(1, 26, 12), // "slotFinished"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 66, 7) // "watcher"

    },
    "Mc_project_version_addJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_version_addJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_version_addJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_version_addJob *_t = static_cast<Mc_project_version_addJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_version_addJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_version_addJob.data,
      qt_meta_data_Mc_project_version_addJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_version_addJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_version_addJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_version_addJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_version_addJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_version_addJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_version_updateJob_t {
    QByteArrayData data[5];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_version_updateJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_version_updateJob_t qt_meta_stringdata_Mc_project_version_updateJob = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Mc_project_version_updateJob"
QT_MOC_LITERAL(1, 29, 12), // "slotFinished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 69, 7) // "watcher"

    },
    "Mc_project_version_updateJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_version_updateJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_version_updateJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_version_updateJob *_t = static_cast<Mc_project_version_updateJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_version_updateJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_version_updateJob.data,
      qt_meta_data_Mc_project_version_updateJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_version_updateJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_version_updateJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_version_updateJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_version_updateJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_version_updateJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_get_released_versionsJob_t {
    QByteArrayData data[5];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_get_released_versionsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_get_released_versionsJob_t qt_meta_stringdata_Mc_project_get_released_versionsJob = {
    {
QT_MOC_LITERAL(0, 0, 35), // "Mc_project_get_released_versi..."
QT_MOC_LITERAL(1, 36, 12), // "slotFinished"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 76, 7) // "watcher"

    },
    "Mc_project_get_released_versionsJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_get_released_versionsJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_get_released_versionsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_get_released_versionsJob *_t = static_cast<Mc_project_get_released_versionsJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_get_released_versionsJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_get_released_versionsJob.data,
      qt_meta_data_Mc_project_get_released_versionsJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_get_released_versionsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_get_released_versionsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_get_released_versionsJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_get_released_versionsJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_get_released_versionsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_get_unreleased_versionsJob_t {
    QByteArrayData data[5];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_get_unreleased_versionsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_get_unreleased_versionsJob_t qt_meta_stringdata_Mc_project_get_unreleased_versionsJob = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Mc_project_get_unreleased_ver..."
QT_MOC_LITERAL(1, 38, 12), // "slotFinished"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 78, 7) // "watcher"

    },
    "Mc_project_get_unreleased_versionsJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_get_unreleased_versionsJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_get_unreleased_versionsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_get_unreleased_versionsJob *_t = static_cast<Mc_project_get_unreleased_versionsJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_get_unreleased_versionsJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_get_unreleased_versionsJob.data,
      qt_meta_data_Mc_project_get_unreleased_versionsJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_get_unreleased_versionsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_get_unreleased_versionsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_get_unreleased_versionsJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_get_unreleased_versionsJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_get_unreleased_versionsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_get_attachmentsJob_t {
    QByteArrayData data[5];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_get_attachmentsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_get_attachmentsJob_t qt_meta_stringdata_Mc_project_get_attachmentsJob = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Mc_project_get_attachmentsJob"
QT_MOC_LITERAL(1, 30, 12), // "slotFinished"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 70, 7) // "watcher"

    },
    "Mc_project_get_attachmentsJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_get_attachmentsJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_get_attachmentsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_get_attachmentsJob *_t = static_cast<Mc_project_get_attachmentsJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_get_attachmentsJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_get_attachmentsJob.data,
      qt_meta_data_Mc_project_get_attachmentsJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_get_attachmentsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_get_attachmentsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_get_attachmentsJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_get_attachmentsJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_get_attachmentsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_get_custom_fieldsJob_t {
    QByteArrayData data[5];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_get_custom_fieldsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_get_custom_fieldsJob_t qt_meta_stringdata_Mc_project_get_custom_fieldsJob = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Mc_project_get_custom_fieldsJob"
QT_MOC_LITERAL(1, 32, 12), // "slotFinished"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 72, 7) // "watcher"

    },
    "Mc_project_get_custom_fieldsJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_get_custom_fieldsJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_get_custom_fieldsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_get_custom_fieldsJob *_t = static_cast<Mc_project_get_custom_fieldsJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_get_custom_fieldsJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_get_custom_fieldsJob.data,
      qt_meta_data_Mc_project_get_custom_fieldsJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_get_custom_fieldsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_get_custom_fieldsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_get_custom_fieldsJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_get_custom_fieldsJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_get_custom_fieldsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_project_get_all_subprojectsJob_t {
    QByteArrayData data[5];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_project_get_all_subprojectsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_project_get_all_subprojectsJob_t qt_meta_stringdata_Mc_project_get_all_subprojectsJob = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Mc_project_get_all_subproject..."
QT_MOC_LITERAL(1, 34, 12), // "slotFinished"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 74, 7) // "watcher"

    },
    "Mc_project_get_all_subprojectsJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_project_get_all_subprojectsJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_project_get_all_subprojectsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_project_get_all_subprojectsJob *_t = static_cast<Mc_project_get_all_subprojectsJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_project_get_all_subprojectsJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_project_get_all_subprojectsJob.data,
      qt_meta_data_Mc_project_get_all_subprojectsJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_project_get_all_subprojectsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_project_get_all_subprojectsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_project_get_all_subprojectsJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_project_get_all_subprojectsJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_project_get_all_subprojectsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_filter_getJob_t {
    QByteArrayData data[5];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_filter_getJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_filter_getJob_t qt_meta_stringdata_Mc_filter_getJob = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Mc_filter_getJob"
QT_MOC_LITERAL(1, 17, 12), // "slotFinished"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 57, 7) // "watcher"

    },
    "Mc_filter_getJob\0slotFinished\0\0"
    "KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_filter_getJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_filter_getJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_filter_getJob *_t = static_cast<Mc_filter_getJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_filter_getJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_filter_getJob.data,
      qt_meta_data_Mc_filter_getJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_filter_getJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_filter_getJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_filter_getJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_filter_getJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_filter_getJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_filter_get_issuesJob_t {
    QByteArrayData data[5];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_filter_get_issuesJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_filter_get_issuesJob_t qt_meta_stringdata_Mc_filter_get_issuesJob = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Mc_filter_get_issuesJob"
QT_MOC_LITERAL(1, 24, 12), // "slotFinished"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 64, 7) // "watcher"

    },
    "Mc_filter_get_issuesJob\0slotFinished\0"
    "\0KDSoapPendingCallWatcher*\0watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_filter_get_issuesJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_filter_get_issuesJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_filter_get_issuesJob *_t = static_cast<Mc_filter_get_issuesJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_filter_get_issuesJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_filter_get_issuesJob.data,
      qt_meta_data_Mc_filter_get_issuesJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_filter_get_issuesJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_filter_get_issuesJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_filter_get_issuesJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_filter_get_issuesJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_filter_get_issuesJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Mc_filter_get_issue_headersJob_t {
    QByteArrayData data[5];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mc_filter_get_issue_headersJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mc_filter_get_issue_headersJob_t qt_meta_stringdata_Mc_filter_get_issue_headersJob = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Mc_filter_get_issue_headersJob"
QT_MOC_LITERAL(1, 31, 12), // "slotFinished"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(4, 71, 7) // "watcher"

    },
    "Mc_filter_get_issue_headersJob\0"
    "slotFinished\0\0KDSoapPendingCallWatcher*\0"
    "watcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mc_filter_get_issue_headersJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Mc_filter_get_issue_headersJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mc_filter_get_issue_headersJob *_t = static_cast<Mc_filter_get_issue_headersJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Mc_filter_get_issue_headersJob::staticMetaObject = {
    { &KDSoapJob::staticMetaObject, qt_meta_stringdata_Mc_filter_get_issue_headersJob.data,
      qt_meta_data_Mc_filter_get_issue_headersJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mc_filter_get_issue_headersJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mc_filter_get_issue_headersJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mc_filter_get_issue_headersJob.stringdata0))
        return static_cast<void*>(const_cast< Mc_filter_get_issue_headersJob*>(this));
    return KDSoapJob::qt_metacast(_clname);
}

int Mc_filter_get_issue_headersJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KDSoapJob::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_MantisConnect_t {
    QByteArrayData data[191];
    char stringdata0[5685];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MantisConnect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MantisConnect_t qt_meta_stringdata_MantisConnect = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MantisConnect"
QT_MOC_LITERAL(1, 14, 9), // "soapError"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "method"
QT_MOC_LITERAL(4, 32, 13), // "KDSoapMessage"
QT_MOC_LITERAL(5, 46, 5), // "fault"
QT_MOC_LITERAL(6, 52, 14), // "mc_versionDone"
QT_MOC_LITERAL(7, 67, 7), // "return_"
QT_MOC_LITERAL(8, 75, 15), // "mc_versionError"
QT_MOC_LITERAL(9, 91, 18), // "mc_enum_statusDone"
QT_MOC_LITERAL(10, 110, 19), // "TNS__ObjectRefArray"
QT_MOC_LITERAL(11, 130, 19), // "mc_enum_statusError"
QT_MOC_LITERAL(12, 150, 22), // "mc_enum_prioritiesDone"
QT_MOC_LITERAL(13, 173, 23), // "mc_enum_prioritiesError"
QT_MOC_LITERAL(14, 197, 22), // "mc_enum_severitiesDone"
QT_MOC_LITERAL(15, 220, 23), // "mc_enum_severitiesError"
QT_MOC_LITERAL(16, 244, 29), // "mc_enum_reproducibilitiesDone"
QT_MOC_LITERAL(17, 274, 30), // "mc_enum_reproducibilitiesError"
QT_MOC_LITERAL(18, 305, 23), // "mc_enum_projectionsDone"
QT_MOC_LITERAL(19, 329, 24), // "mc_enum_projectionsError"
QT_MOC_LITERAL(20, 354, 16), // "mc_enum_etasDone"
QT_MOC_LITERAL(21, 371, 17), // "mc_enum_etasError"
QT_MOC_LITERAL(22, 389, 23), // "mc_enum_resolutionsDone"
QT_MOC_LITERAL(23, 413, 24), // "mc_enum_resolutionsError"
QT_MOC_LITERAL(24, 438, 25), // "mc_enum_access_levelsDone"
QT_MOC_LITERAL(25, 464, 26), // "mc_enum_access_levelsError"
QT_MOC_LITERAL(26, 491, 26), // "mc_enum_project_statusDone"
QT_MOC_LITERAL(27, 518, 27), // "mc_enum_project_statusError"
QT_MOC_LITERAL(28, 546, 31), // "mc_enum_project_view_statesDone"
QT_MOC_LITERAL(29, 578, 32), // "mc_enum_project_view_statesError"
QT_MOC_LITERAL(30, 611, 23), // "mc_enum_view_statesDone"
QT_MOC_LITERAL(31, 635, 24), // "mc_enum_view_statesError"
QT_MOC_LITERAL(32, 660, 30), // "mc_enum_custom_field_typesDone"
QT_MOC_LITERAL(33, 691, 31), // "mc_enum_custom_field_typesError"
QT_MOC_LITERAL(34, 723, 15), // "mc_enum_getDone"
QT_MOC_LITERAL(35, 739, 16), // "mc_enum_getError"
QT_MOC_LITERAL(36, 756, 19), // "mc_issue_existsDone"
QT_MOC_LITERAL(37, 776, 20), // "mc_issue_existsError"
QT_MOC_LITERAL(38, 797, 16), // "mc_issue_getDone"
QT_MOC_LITERAL(39, 814, 14), // "TNS__IssueData"
QT_MOC_LITERAL(40, 829, 17), // "mc_issue_getError"
QT_MOC_LITERAL(41, 847, 27), // "mc_issue_get_biggest_idDone"
QT_MOC_LITERAL(42, 875, 28), // "mc_issue_get_biggest_idError"
QT_MOC_LITERAL(43, 904, 32), // "mc_issue_get_id_from_summaryDone"
QT_MOC_LITERAL(44, 937, 33), // "mc_issue_get_id_from_summaryE..."
QT_MOC_LITERAL(45, 971, 16), // "mc_issue_addDone"
QT_MOC_LITERAL(46, 988, 17), // "mc_issue_addError"
QT_MOC_LITERAL(47, 1006, 19), // "mc_issue_updateDone"
QT_MOC_LITERAL(48, 1026, 20), // "mc_issue_updateError"
QT_MOC_LITERAL(49, 1047, 19), // "mc_issue_deleteDone"
QT_MOC_LITERAL(50, 1067, 20), // "mc_issue_deleteError"
QT_MOC_LITERAL(51, 1088, 21), // "mc_issue_note_addDone"
QT_MOC_LITERAL(52, 1110, 22), // "mc_issue_note_addError"
QT_MOC_LITERAL(53, 1133, 24), // "mc_issue_note_deleteDone"
QT_MOC_LITERAL(54, 1158, 25), // "mc_issue_note_deleteError"
QT_MOC_LITERAL(55, 1184, 29), // "mc_issue_relationship_addDone"
QT_MOC_LITERAL(56, 1214, 30), // "mc_issue_relationship_addError"
QT_MOC_LITERAL(57, 1245, 32), // "mc_issue_relationship_deleteDone"
QT_MOC_LITERAL(58, 1278, 33), // "mc_issue_relationship_deleteE..."
QT_MOC_LITERAL(59, 1312, 27), // "mc_issue_attachment_addDone"
QT_MOC_LITERAL(60, 1340, 28), // "mc_issue_attachment_addError"
QT_MOC_LITERAL(61, 1369, 30), // "mc_issue_attachment_deleteDone"
QT_MOC_LITERAL(62, 1400, 31), // "mc_issue_attachment_deleteError"
QT_MOC_LITERAL(63, 1432, 27), // "mc_issue_attachment_getDone"
QT_MOC_LITERAL(64, 1460, 28), // "mc_issue_attachment_getError"
QT_MOC_LITERAL(65, 1489, 18), // "mc_project_addDone"
QT_MOC_LITERAL(66, 1508, 19), // "mc_project_addError"
QT_MOC_LITERAL(67, 1528, 21), // "mc_project_deleteDone"
QT_MOC_LITERAL(68, 1550, 22), // "mc_project_deleteError"
QT_MOC_LITERAL(69, 1573, 21), // "mc_project_updateDone"
QT_MOC_LITERAL(70, 1595, 22), // "mc_project_updateError"
QT_MOC_LITERAL(71, 1618, 31), // "mc_project_get_id_from_nameDone"
QT_MOC_LITERAL(72, 1650, 32), // "mc_project_get_id_from_nameError"
QT_MOC_LITERAL(73, 1683, 25), // "mc_project_get_issuesDone"
QT_MOC_LITERAL(74, 1709, 19), // "TNS__IssueDataArray"
QT_MOC_LITERAL(75, 1729, 26), // "mc_project_get_issuesError"
QT_MOC_LITERAL(76, 1756, 32), // "mc_project_get_issue_headersDone"
QT_MOC_LITERAL(77, 1789, 25), // "TNS__IssueHeaderDataArray"
QT_MOC_LITERAL(78, 1815, 33), // "mc_project_get_issue_headersE..."
QT_MOC_LITERAL(79, 1849, 24), // "mc_project_get_usersDone"
QT_MOC_LITERAL(80, 1874, 21), // "TNS__AccountDataArray"
QT_MOC_LITERAL(81, 1896, 25), // "mc_project_get_usersError"
QT_MOC_LITERAL(82, 1922, 35), // "mc_projects_get_user_accessib..."
QT_MOC_LITERAL(83, 1958, 21), // "TNS__ProjectDataArray"
QT_MOC_LITERAL(84, 1980, 36), // "mc_projects_get_user_accessib..."
QT_MOC_LITERAL(85, 2017, 29), // "mc_project_get_categoriesDone"
QT_MOC_LITERAL(86, 2047, 16), // "TNS__StringArray"
QT_MOC_LITERAL(87, 2064, 30), // "mc_project_get_categoriesError"
QT_MOC_LITERAL(88, 2095, 27), // "mc_project_add_categoryDone"
QT_MOC_LITERAL(89, 2123, 28), // "mc_project_add_categoryError"
QT_MOC_LITERAL(90, 2152, 30), // "mc_project_delete_categoryDone"
QT_MOC_LITERAL(91, 2183, 31), // "mc_project_delete_categoryError"
QT_MOC_LITERAL(92, 2215, 38), // "mc_project_rename_category_by..."
QT_MOC_LITERAL(93, 2254, 39), // "mc_project_rename_category_by..."
QT_MOC_LITERAL(94, 2294, 27), // "mc_project_get_versionsDone"
QT_MOC_LITERAL(95, 2322, 28), // "TNS__ProjectVersionDataArray"
QT_MOC_LITERAL(96, 2351, 28), // "mc_project_get_versionsError"
QT_MOC_LITERAL(97, 2380, 26), // "mc_project_version_addDone"
QT_MOC_LITERAL(98, 2407, 27), // "mc_project_version_addError"
QT_MOC_LITERAL(99, 2435, 29), // "mc_project_version_updateDone"
QT_MOC_LITERAL(100, 2465, 30), // "mc_project_version_updateError"
QT_MOC_LITERAL(101, 2496, 29), // "mc_project_version_deleteDone"
QT_MOC_LITERAL(102, 2526, 30), // "mc_project_version_deleteError"
QT_MOC_LITERAL(103, 2557, 36), // "mc_project_get_released_versi..."
QT_MOC_LITERAL(104, 2594, 37), // "mc_project_get_released_versi..."
QT_MOC_LITERAL(105, 2632, 38), // "mc_project_get_unreleased_ver..."
QT_MOC_LITERAL(106, 2671, 39), // "mc_project_get_unreleased_ver..."
QT_MOC_LITERAL(107, 2711, 30), // "mc_project_get_attachmentsDone"
QT_MOC_LITERAL(108, 2742, 31), // "TNS__ProjectAttachmentDataArray"
QT_MOC_LITERAL(109, 2774, 31), // "mc_project_get_attachmentsError"
QT_MOC_LITERAL(110, 2806, 32), // "mc_project_get_custom_fieldsDone"
QT_MOC_LITERAL(111, 2839, 35), // "TNS__CustomFieldDefinitionDat..."
QT_MOC_LITERAL(112, 2875, 33), // "mc_project_get_custom_fieldsE..."
QT_MOC_LITERAL(113, 2909, 29), // "mc_project_attachment_getDone"
QT_MOC_LITERAL(114, 2939, 30), // "mc_project_attachment_getError"
QT_MOC_LITERAL(115, 2970, 29), // "mc_project_attachment_addDone"
QT_MOC_LITERAL(116, 3000, 30), // "mc_project_attachment_addError"
QT_MOC_LITERAL(117, 3031, 32), // "mc_project_attachment_deleteDone"
QT_MOC_LITERAL(118, 3064, 33), // "mc_project_attachment_deleteE..."
QT_MOC_LITERAL(119, 3098, 34), // "mc_project_get_all_subproject..."
QT_MOC_LITERAL(120, 3133, 35), // "mc_project_get_all_subproject..."
QT_MOC_LITERAL(121, 3169, 17), // "mc_filter_getDone"
QT_MOC_LITERAL(122, 3187, 20), // "TNS__FilterDataArray"
QT_MOC_LITERAL(123, 3208, 18), // "mc_filter_getError"
QT_MOC_LITERAL(124, 3227, 24), // "mc_filter_get_issuesDone"
QT_MOC_LITERAL(125, 3252, 25), // "mc_filter_get_issuesError"
QT_MOC_LITERAL(126, 3278, 31), // "mc_filter_get_issue_headersDone"
QT_MOC_LITERAL(127, 3310, 32), // "mc_filter_get_issue_headersError"
QT_MOC_LITERAL(128, 3343, 24), // "mc_config_get_stringDone"
QT_MOC_LITERAL(129, 3368, 25), // "mc_config_get_stringError"
QT_MOC_LITERAL(130, 3394, 20), // "mc_issue_checkinDone"
QT_MOC_LITERAL(131, 3415, 21), // "mc_issue_checkinError"
QT_MOC_LITERAL(132, 3437, 26), // "_kd_slotMc_versionFinished"
QT_MOC_LITERAL(133, 3464, 25), // "KDSoapPendingCallWatcher*"
QT_MOC_LITERAL(134, 3490, 7), // "watcher"
QT_MOC_LITERAL(135, 3498, 30), // "_kd_slotMc_enum_statusFinished"
QT_MOC_LITERAL(136, 3529, 34), // "_kd_slotMc_enum_prioritiesFin..."
QT_MOC_LITERAL(137, 3564, 34), // "_kd_slotMc_enum_severitiesFin..."
QT_MOC_LITERAL(138, 3599, 41), // "_kd_slotMc_enum_reproducibili..."
QT_MOC_LITERAL(139, 3641, 35), // "_kd_slotMc_enum_projectionsFi..."
QT_MOC_LITERAL(140, 3677, 28), // "_kd_slotMc_enum_etasFinished"
QT_MOC_LITERAL(141, 3706, 35), // "_kd_slotMc_enum_resolutionsFi..."
QT_MOC_LITERAL(142, 3742, 37), // "_kd_slotMc_enum_access_levels..."
QT_MOC_LITERAL(143, 3780, 38), // "_kd_slotMc_enum_project_statu..."
QT_MOC_LITERAL(144, 3819, 43), // "_kd_slotMc_enum_project_view_..."
QT_MOC_LITERAL(145, 3863, 35), // "_kd_slotMc_enum_view_statesFi..."
QT_MOC_LITERAL(146, 3899, 42), // "_kd_slotMc_enum_custom_field_..."
QT_MOC_LITERAL(147, 3942, 27), // "_kd_slotMc_enum_getFinished"
QT_MOC_LITERAL(148, 3970, 31), // "_kd_slotMc_issue_existsFinished"
QT_MOC_LITERAL(149, 4002, 28), // "_kd_slotMc_issue_getFinished"
QT_MOC_LITERAL(150, 4031, 39), // "_kd_slotMc_issue_get_biggest_..."
QT_MOC_LITERAL(151, 4071, 44), // "_kd_slotMc_issue_get_id_from_..."
QT_MOC_LITERAL(152, 4116, 28), // "_kd_slotMc_issue_addFinished"
QT_MOC_LITERAL(153, 4145, 31), // "_kd_slotMc_issue_updateFinished"
QT_MOC_LITERAL(154, 4177, 31), // "_kd_slotMc_issue_deleteFinished"
QT_MOC_LITERAL(155, 4209, 33), // "_kd_slotMc_issue_note_addFini..."
QT_MOC_LITERAL(156, 4243, 36), // "_kd_slotMc_issue_note_deleteF..."
QT_MOC_LITERAL(157, 4280, 41), // "_kd_slotMc_issue_relationship..."
QT_MOC_LITERAL(158, 4322, 44), // "_kd_slotMc_issue_relationship..."
QT_MOC_LITERAL(159, 4367, 39), // "_kd_slotMc_issue_attachment_a..."
QT_MOC_LITERAL(160, 4407, 42), // "_kd_slotMc_issue_attachment_d..."
QT_MOC_LITERAL(161, 4450, 39), // "_kd_slotMc_issue_attachment_g..."
QT_MOC_LITERAL(162, 4490, 30), // "_kd_slotMc_project_addFinished"
QT_MOC_LITERAL(163, 4521, 33), // "_kd_slotMc_project_deleteFini..."
QT_MOC_LITERAL(164, 4555, 33), // "_kd_slotMc_project_updateFini..."
QT_MOC_LITERAL(165, 4589, 43), // "_kd_slotMc_project_get_id_fro..."
QT_MOC_LITERAL(166, 4633, 37), // "_kd_slotMc_project_get_issues..."
QT_MOC_LITERAL(167, 4671, 44), // "_kd_slotMc_project_get_issue_..."
QT_MOC_LITERAL(168, 4716, 36), // "_kd_slotMc_project_get_usersF..."
QT_MOC_LITERAL(169, 4753, 47), // "_kd_slotMc_projects_get_user_..."
QT_MOC_LITERAL(170, 4801, 41), // "_kd_slotMc_project_get_catego..."
QT_MOC_LITERAL(171, 4843, 39), // "_kd_slotMc_project_add_catego..."
QT_MOC_LITERAL(172, 4883, 42), // "_kd_slotMc_project_delete_cat..."
QT_MOC_LITERAL(173, 4926, 50), // "_kd_slotMc_project_rename_cat..."
QT_MOC_LITERAL(174, 4977, 39), // "_kd_slotMc_project_get_versio..."
QT_MOC_LITERAL(175, 5017, 38), // "_kd_slotMc_project_version_ad..."
QT_MOC_LITERAL(176, 5056, 41), // "_kd_slotMc_project_version_up..."
QT_MOC_LITERAL(177, 5098, 41), // "_kd_slotMc_project_version_de..."
QT_MOC_LITERAL(178, 5140, 48), // "_kd_slotMc_project_get_releas..."
QT_MOC_LITERAL(179, 5189, 50), // "_kd_slotMc_project_get_unrele..."
QT_MOC_LITERAL(180, 5240, 42), // "_kd_slotMc_project_get_attach..."
QT_MOC_LITERAL(181, 5283, 44), // "_kd_slotMc_project_get_custom..."
QT_MOC_LITERAL(182, 5328, 41), // "_kd_slotMc_project_attachment..."
QT_MOC_LITERAL(183, 5370, 41), // "_kd_slotMc_project_attachment..."
QT_MOC_LITERAL(184, 5412, 44), // "_kd_slotMc_project_attachment..."
QT_MOC_LITERAL(185, 5457, 46), // "_kd_slotMc_project_get_all_su..."
QT_MOC_LITERAL(186, 5504, 29), // "_kd_slotMc_filter_getFinished"
QT_MOC_LITERAL(187, 5534, 36), // "_kd_slotMc_filter_get_issuesF..."
QT_MOC_LITERAL(188, 5571, 43), // "_kd_slotMc_filter_get_issue_h..."
QT_MOC_LITERAL(189, 5615, 36), // "_kd_slotMc_config_get_stringF..."
QT_MOC_LITERAL(190, 5652, 32) // "_kd_slotMc_issue_checkinFinished"

    },
    "MantisConnect\0soapError\0\0method\0"
    "KDSoapMessage\0fault\0mc_versionDone\0"
    "return_\0mc_versionError\0mc_enum_statusDone\0"
    "TNS__ObjectRefArray\0mc_enum_statusError\0"
    "mc_enum_prioritiesDone\0mc_enum_prioritiesError\0"
    "mc_enum_severitiesDone\0mc_enum_severitiesError\0"
    "mc_enum_reproducibilitiesDone\0"
    "mc_enum_reproducibilitiesError\0"
    "mc_enum_projectionsDone\0"
    "mc_enum_projectionsError\0mc_enum_etasDone\0"
    "mc_enum_etasError\0mc_enum_resolutionsDone\0"
    "mc_enum_resolutionsError\0"
    "mc_enum_access_levelsDone\0"
    "mc_enum_access_levelsError\0"
    "mc_enum_project_statusDone\0"
    "mc_enum_project_statusError\0"
    "mc_enum_project_view_statesDone\0"
    "mc_enum_project_view_statesError\0"
    "mc_enum_view_statesDone\0"
    "mc_enum_view_statesError\0"
    "mc_enum_custom_field_typesDone\0"
    "mc_enum_custom_field_typesError\0"
    "mc_enum_getDone\0mc_enum_getError\0"
    "mc_issue_existsDone\0mc_issue_existsError\0"
    "mc_issue_getDone\0TNS__IssueData\0"
    "mc_issue_getError\0mc_issue_get_biggest_idDone\0"
    "mc_issue_get_biggest_idError\0"
    "mc_issue_get_id_from_summaryDone\0"
    "mc_issue_get_id_from_summaryError\0"
    "mc_issue_addDone\0mc_issue_addError\0"
    "mc_issue_updateDone\0mc_issue_updateError\0"
    "mc_issue_deleteDone\0mc_issue_deleteError\0"
    "mc_issue_note_addDone\0mc_issue_note_addError\0"
    "mc_issue_note_deleteDone\0"
    "mc_issue_note_deleteError\0"
    "mc_issue_relationship_addDone\0"
    "mc_issue_relationship_addError\0"
    "mc_issue_relationship_deleteDone\0"
    "mc_issue_relationship_deleteError\0"
    "mc_issue_attachment_addDone\0"
    "mc_issue_attachment_addError\0"
    "mc_issue_attachment_deleteDone\0"
    "mc_issue_attachment_deleteError\0"
    "mc_issue_attachment_getDone\0"
    "mc_issue_attachment_getError\0"
    "mc_project_addDone\0mc_project_addError\0"
    "mc_project_deleteDone\0mc_project_deleteError\0"
    "mc_project_updateDone\0mc_project_updateError\0"
    "mc_project_get_id_from_nameDone\0"
    "mc_project_get_id_from_nameError\0"
    "mc_project_get_issuesDone\0TNS__IssueDataArray\0"
    "mc_project_get_issuesError\0"
    "mc_project_get_issue_headersDone\0"
    "TNS__IssueHeaderDataArray\0"
    "mc_project_get_issue_headersError\0"
    "mc_project_get_usersDone\0TNS__AccountDataArray\0"
    "mc_project_get_usersError\0"
    "mc_projects_get_user_accessibleDone\0"
    "TNS__ProjectDataArray\0"
    "mc_projects_get_user_accessibleError\0"
    "mc_project_get_categoriesDone\0"
    "TNS__StringArray\0mc_project_get_categoriesError\0"
    "mc_project_add_categoryDone\0"
    "mc_project_add_categoryError\0"
    "mc_project_delete_categoryDone\0"
    "mc_project_delete_categoryError\0"
    "mc_project_rename_category_by_nameDone\0"
    "mc_project_rename_category_by_nameError\0"
    "mc_project_get_versionsDone\0"
    "TNS__ProjectVersionDataArray\0"
    "mc_project_get_versionsError\0"
    "mc_project_version_addDone\0"
    "mc_project_version_addError\0"
    "mc_project_version_updateDone\0"
    "mc_project_version_updateError\0"
    "mc_project_version_deleteDone\0"
    "mc_project_version_deleteError\0"
    "mc_project_get_released_versionsDone\0"
    "mc_project_get_released_versionsError\0"
    "mc_project_get_unreleased_versionsDone\0"
    "mc_project_get_unreleased_versionsError\0"
    "mc_project_get_attachmentsDone\0"
    "TNS__ProjectAttachmentDataArray\0"
    "mc_project_get_attachmentsError\0"
    "mc_project_get_custom_fieldsDone\0"
    "TNS__CustomFieldDefinitionDataArray\0"
    "mc_project_get_custom_fieldsError\0"
    "mc_project_attachment_getDone\0"
    "mc_project_attachment_getError\0"
    "mc_project_attachment_addDone\0"
    "mc_project_attachment_addError\0"
    "mc_project_attachment_deleteDone\0"
    "mc_project_attachment_deleteError\0"
    "mc_project_get_all_subprojectsDone\0"
    "mc_project_get_all_subprojectsError\0"
    "mc_filter_getDone\0TNS__FilterDataArray\0"
    "mc_filter_getError\0mc_filter_get_issuesDone\0"
    "mc_filter_get_issuesError\0"
    "mc_filter_get_issue_headersDone\0"
    "mc_filter_get_issue_headersError\0"
    "mc_config_get_stringDone\0"
    "mc_config_get_stringError\0"
    "mc_issue_checkinDone\0mc_issue_checkinError\0"
    "_kd_slotMc_versionFinished\0"
    "KDSoapPendingCallWatcher*\0watcher\0"
    "_kd_slotMc_enum_statusFinished\0"
    "_kd_slotMc_enum_prioritiesFinished\0"
    "_kd_slotMc_enum_severitiesFinished\0"
    "_kd_slotMc_enum_reproducibilitiesFinished\0"
    "_kd_slotMc_enum_projectionsFinished\0"
    "_kd_slotMc_enum_etasFinished\0"
    "_kd_slotMc_enum_resolutionsFinished\0"
    "_kd_slotMc_enum_access_levelsFinished\0"
    "_kd_slotMc_enum_project_statusFinished\0"
    "_kd_slotMc_enum_project_view_statesFinished\0"
    "_kd_slotMc_enum_view_statesFinished\0"
    "_kd_slotMc_enum_custom_field_typesFinished\0"
    "_kd_slotMc_enum_getFinished\0"
    "_kd_slotMc_issue_existsFinished\0"
    "_kd_slotMc_issue_getFinished\0"
    "_kd_slotMc_issue_get_biggest_idFinished\0"
    "_kd_slotMc_issue_get_id_from_summaryFinished\0"
    "_kd_slotMc_issue_addFinished\0"
    "_kd_slotMc_issue_updateFinished\0"
    "_kd_slotMc_issue_deleteFinished\0"
    "_kd_slotMc_issue_note_addFinished\0"
    "_kd_slotMc_issue_note_deleteFinished\0"
    "_kd_slotMc_issue_relationship_addFinished\0"
    "_kd_slotMc_issue_relationship_deleteFinished\0"
    "_kd_slotMc_issue_attachment_addFinished\0"
    "_kd_slotMc_issue_attachment_deleteFinished\0"
    "_kd_slotMc_issue_attachment_getFinished\0"
    "_kd_slotMc_project_addFinished\0"
    "_kd_slotMc_project_deleteFinished\0"
    "_kd_slotMc_project_updateFinished\0"
    "_kd_slotMc_project_get_id_from_nameFinished\0"
    "_kd_slotMc_project_get_issuesFinished\0"
    "_kd_slotMc_project_get_issue_headersFinished\0"
    "_kd_slotMc_project_get_usersFinished\0"
    "_kd_slotMc_projects_get_user_accessibleFinished\0"
    "_kd_slotMc_project_get_categoriesFinished\0"
    "_kd_slotMc_project_add_categoryFinished\0"
    "_kd_slotMc_project_delete_categoryFinished\0"
    "_kd_slotMc_project_rename_category_by_nameFinished\0"
    "_kd_slotMc_project_get_versionsFinished\0"
    "_kd_slotMc_project_version_addFinished\0"
    "_kd_slotMc_project_version_updateFinished\0"
    "_kd_slotMc_project_version_deleteFinished\0"
    "_kd_slotMc_project_get_released_versionsFinished\0"
    "_kd_slotMc_project_get_unreleased_versionsFinished\0"
    "_kd_slotMc_project_get_attachmentsFinished\0"
    "_kd_slotMc_project_get_custom_fieldsFinished\0"
    "_kd_slotMc_project_attachment_getFinished\0"
    "_kd_slotMc_project_attachment_addFinished\0"
    "_kd_slotMc_project_attachment_deleteFinished\0"
    "_kd_slotMc_project_get_all_subprojectsFinished\0"
    "_kd_slotMc_filter_getFinished\0"
    "_kd_slotMc_filter_get_issuesFinished\0"
    "_kd_slotMc_filter_get_issue_headersFinished\0"
    "_kd_slotMc_config_get_stringFinished\0"
    "_kd_slotMc_issue_checkinFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MantisConnect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     172,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     115,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  874,    2, 0x06 /* Public */,
       6,    1,  879,    2, 0x06 /* Public */,
       8,    1,  882,    2, 0x06 /* Public */,
       9,    1,  885,    2, 0x06 /* Public */,
      11,    1,  888,    2, 0x06 /* Public */,
      12,    1,  891,    2, 0x06 /* Public */,
      13,    1,  894,    2, 0x06 /* Public */,
      14,    1,  897,    2, 0x06 /* Public */,
      15,    1,  900,    2, 0x06 /* Public */,
      16,    1,  903,    2, 0x06 /* Public */,
      17,    1,  906,    2, 0x06 /* Public */,
      18,    1,  909,    2, 0x06 /* Public */,
      19,    1,  912,    2, 0x06 /* Public */,
      20,    1,  915,    2, 0x06 /* Public */,
      21,    1,  918,    2, 0x06 /* Public */,
      22,    1,  921,    2, 0x06 /* Public */,
      23,    1,  924,    2, 0x06 /* Public */,
      24,    1,  927,    2, 0x06 /* Public */,
      25,    1,  930,    2, 0x06 /* Public */,
      26,    1,  933,    2, 0x06 /* Public */,
      27,    1,  936,    2, 0x06 /* Public */,
      28,    1,  939,    2, 0x06 /* Public */,
      29,    1,  942,    2, 0x06 /* Public */,
      30,    1,  945,    2, 0x06 /* Public */,
      31,    1,  948,    2, 0x06 /* Public */,
      32,    1,  951,    2, 0x06 /* Public */,
      33,    1,  954,    2, 0x06 /* Public */,
      34,    1,  957,    2, 0x06 /* Public */,
      35,    1,  960,    2, 0x06 /* Public */,
      36,    1,  963,    2, 0x06 /* Public */,
      37,    1,  966,    2, 0x06 /* Public */,
      38,    1,  969,    2, 0x06 /* Public */,
      40,    1,  972,    2, 0x06 /* Public */,
      41,    1,  975,    2, 0x06 /* Public */,
      42,    1,  978,    2, 0x06 /* Public */,
      43,    1,  981,    2, 0x06 /* Public */,
      44,    1,  984,    2, 0x06 /* Public */,
      45,    1,  987,    2, 0x06 /* Public */,
      46,    1,  990,    2, 0x06 /* Public */,
      47,    1,  993,    2, 0x06 /* Public */,
      48,    1,  996,    2, 0x06 /* Public */,
      49,    1,  999,    2, 0x06 /* Public */,
      50,    1, 1002,    2, 0x06 /* Public */,
      51,    1, 1005,    2, 0x06 /* Public */,
      52,    1, 1008,    2, 0x06 /* Public */,
      53,    1, 1011,    2, 0x06 /* Public */,
      54,    1, 1014,    2, 0x06 /* Public */,
      55,    1, 1017,    2, 0x06 /* Public */,
      56,    1, 1020,    2, 0x06 /* Public */,
      57,    1, 1023,    2, 0x06 /* Public */,
      58,    1, 1026,    2, 0x06 /* Public */,
      59,    1, 1029,    2, 0x06 /* Public */,
      60,    1, 1032,    2, 0x06 /* Public */,
      61,    1, 1035,    2, 0x06 /* Public */,
      62,    1, 1038,    2, 0x06 /* Public */,
      63,    1, 1041,    2, 0x06 /* Public */,
      64,    1, 1044,    2, 0x06 /* Public */,
      65,    1, 1047,    2, 0x06 /* Public */,
      66,    1, 1050,    2, 0x06 /* Public */,
      67,    1, 1053,    2, 0x06 /* Public */,
      68,    1, 1056,    2, 0x06 /* Public */,
      69,    1, 1059,    2, 0x06 /* Public */,
      70,    1, 1062,    2, 0x06 /* Public */,
      71,    1, 1065,    2, 0x06 /* Public */,
      72,    1, 1068,    2, 0x06 /* Public */,
      73,    1, 1071,    2, 0x06 /* Public */,
      75,    1, 1074,    2, 0x06 /* Public */,
      76,    1, 1077,    2, 0x06 /* Public */,
      78,    1, 1080,    2, 0x06 /* Public */,
      79,    1, 1083,    2, 0x06 /* Public */,
      81,    1, 1086,    2, 0x06 /* Public */,
      82,    1, 1089,    2, 0x06 /* Public */,
      84,    1, 1092,    2, 0x06 /* Public */,
      85,    1, 1095,    2, 0x06 /* Public */,
      87,    1, 1098,    2, 0x06 /* Public */,
      88,    1, 1101,    2, 0x06 /* Public */,
      89,    1, 1104,    2, 0x06 /* Public */,
      90,    1, 1107,    2, 0x06 /* Public */,
      91,    1, 1110,    2, 0x06 /* Public */,
      92,    1, 1113,    2, 0x06 /* Public */,
      93,    1, 1116,    2, 0x06 /* Public */,
      94,    1, 1119,    2, 0x06 /* Public */,
      96,    1, 1122,    2, 0x06 /* Public */,
      97,    1, 1125,    2, 0x06 /* Public */,
      98,    1, 1128,    2, 0x06 /* Public */,
      99,    1, 1131,    2, 0x06 /* Public */,
     100,    1, 1134,    2, 0x06 /* Public */,
     101,    1, 1137,    2, 0x06 /* Public */,
     102,    1, 1140,    2, 0x06 /* Public */,
     103,    1, 1143,    2, 0x06 /* Public */,
     104,    1, 1146,    2, 0x06 /* Public */,
     105,    1, 1149,    2, 0x06 /* Public */,
     106,    1, 1152,    2, 0x06 /* Public */,
     107,    1, 1155,    2, 0x06 /* Public */,
     109,    1, 1158,    2, 0x06 /* Public */,
     110,    1, 1161,    2, 0x06 /* Public */,
     112,    1, 1164,    2, 0x06 /* Public */,
     113,    1, 1167,    2, 0x06 /* Public */,
     114,    1, 1170,    2, 0x06 /* Public */,
     115,    1, 1173,    2, 0x06 /* Public */,
     116,    1, 1176,    2, 0x06 /* Public */,
     117,    1, 1179,    2, 0x06 /* Public */,
     118,    1, 1182,    2, 0x06 /* Public */,
     119,    1, 1185,    2, 0x06 /* Public */,
     120,    1, 1188,    2, 0x06 /* Public */,
     121,    1, 1191,    2, 0x06 /* Public */,
     123,    1, 1194,    2, 0x06 /* Public */,
     124,    1, 1197,    2, 0x06 /* Public */,
     125,    1, 1200,    2, 0x06 /* Public */,
     126,    1, 1203,    2, 0x06 /* Public */,
     127,    1, 1206,    2, 0x06 /* Public */,
     128,    1, 1209,    2, 0x06 /* Public */,
     129,    1, 1212,    2, 0x06 /* Public */,
     130,    1, 1215,    2, 0x06 /* Public */,
     131,    1, 1218,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     132,    1, 1221,    2, 0x08 /* Private */,
     135,    1, 1224,    2, 0x08 /* Private */,
     136,    1, 1227,    2, 0x08 /* Private */,
     137,    1, 1230,    2, 0x08 /* Private */,
     138,    1, 1233,    2, 0x08 /* Private */,
     139,    1, 1236,    2, 0x08 /* Private */,
     140,    1, 1239,    2, 0x08 /* Private */,
     141,    1, 1242,    2, 0x08 /* Private */,
     142,    1, 1245,    2, 0x08 /* Private */,
     143,    1, 1248,    2, 0x08 /* Private */,
     144,    1, 1251,    2, 0x08 /* Private */,
     145,    1, 1254,    2, 0x08 /* Private */,
     146,    1, 1257,    2, 0x08 /* Private */,
     147,    1, 1260,    2, 0x08 /* Private */,
     148,    1, 1263,    2, 0x08 /* Private */,
     149,    1, 1266,    2, 0x08 /* Private */,
     150,    1, 1269,    2, 0x08 /* Private */,
     151,    1, 1272,    2, 0x08 /* Private */,
     152,    1, 1275,    2, 0x08 /* Private */,
     153,    1, 1278,    2, 0x08 /* Private */,
     154,    1, 1281,    2, 0x08 /* Private */,
     155,    1, 1284,    2, 0x08 /* Private */,
     156,    1, 1287,    2, 0x08 /* Private */,
     157,    1, 1290,    2, 0x08 /* Private */,
     158,    1, 1293,    2, 0x08 /* Private */,
     159,    1, 1296,    2, 0x08 /* Private */,
     160,    1, 1299,    2, 0x08 /* Private */,
     161,    1, 1302,    2, 0x08 /* Private */,
     162,    1, 1305,    2, 0x08 /* Private */,
     163,    1, 1308,    2, 0x08 /* Private */,
     164,    1, 1311,    2, 0x08 /* Private */,
     165,    1, 1314,    2, 0x08 /* Private */,
     166,    1, 1317,    2, 0x08 /* Private */,
     167,    1, 1320,    2, 0x08 /* Private */,
     168,    1, 1323,    2, 0x08 /* Private */,
     169,    1, 1326,    2, 0x08 /* Private */,
     170,    1, 1329,    2, 0x08 /* Private */,
     171,    1, 1332,    2, 0x08 /* Private */,
     172,    1, 1335,    2, 0x08 /* Private */,
     173,    1, 1338,    2, 0x08 /* Private */,
     174,    1, 1341,    2, 0x08 /* Private */,
     175,    1, 1344,    2, 0x08 /* Private */,
     176,    1, 1347,    2, 0x08 /* Private */,
     177,    1, 1350,    2, 0x08 /* Private */,
     178,    1, 1353,    2, 0x08 /* Private */,
     179,    1, 1356,    2, 0x08 /* Private */,
     180,    1, 1359,    2, 0x08 /* Private */,
     181,    1, 1362,    2, 0x08 /* Private */,
     182,    1, 1365,    2, 0x08 /* Private */,
     183,    1, 1368,    2, 0x08 /* Private */,
     184,    1, 1371,    2, 0x08 /* Private */,
     185,    1, 1374,    2, 0x08 /* Private */,
     186,    1, 1377,    2, 0x08 /* Private */,
     187,    1, 1380,    2, 0x08 /* Private */,
     188,    1, 1383,    2, 0x08 /* Private */,
     189,    1, 1386,    2, 0x08 /* Private */,
     190,    1, 1389,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 39,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 74,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 77,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 80,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 83,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 86,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 95,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 95,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 95,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 108,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 111,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 86,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 122,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 74,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 77,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void, 0x80000000 | 133,  134,

       0        // eod
};

void MantisConnect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MantisConnect *_t = static_cast<MantisConnect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->soapError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const KDSoapMessage(*)>(_a[2]))); break;
        case 1: _t->mc_versionDone((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->mc_versionError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 3: _t->mc_enum_statusDone((*reinterpret_cast< const TNS__ObjectRefArray(*)>(_a[1]))); break;
        case 4: _t->mc_enum_statusError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 5: _t->mc_enum_prioritiesDone((*reinterpret_cast< const TNS__ObjectRefArray(*)>(_a[1]))); break;
        case 6: _t->mc_enum_prioritiesError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 7: _t->mc_enum_severitiesDone((*reinterpret_cast< const TNS__ObjectRefArray(*)>(_a[1]))); break;
        case 8: _t->mc_enum_severitiesError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 9: _t->mc_enum_reproducibilitiesDone((*reinterpret_cast< const TNS__ObjectRefArray(*)>(_a[1]))); break;
        case 10: _t->mc_enum_reproducibilitiesError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 11: _t->mc_enum_projectionsDone((*reinterpret_cast< const TNS__ObjectRefArray(*)>(_a[1]))); break;
        case 12: _t->mc_enum_projectionsError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 13: _t->mc_enum_etasDone((*reinterpret_cast< const TNS__ObjectRefArray(*)>(_a[1]))); break;
        case 14: _t->mc_enum_etasError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 15: _t->mc_enum_resolutionsDone((*reinterpret_cast< const TNS__ObjectRefArray(*)>(_a[1]))); break;
        case 16: _t->mc_enum_resolutionsError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 17: _t->mc_enum_access_levelsDone((*reinterpret_cast< const TNS__ObjectRefArray(*)>(_a[1]))); break;
        case 18: _t->mc_enum_access_levelsError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 19: _t->mc_enum_project_statusDone((*reinterpret_cast< const TNS__ObjectRefArray(*)>(_a[1]))); break;
        case 20: _t->mc_enum_project_statusError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 21: _t->mc_enum_project_view_statesDone((*reinterpret_cast< const TNS__ObjectRefArray(*)>(_a[1]))); break;
        case 22: _t->mc_enum_project_view_statesError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 23: _t->mc_enum_view_statesDone((*reinterpret_cast< const TNS__ObjectRefArray(*)>(_a[1]))); break;
        case 24: _t->mc_enum_view_statesError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 25: _t->mc_enum_custom_field_typesDone((*reinterpret_cast< const TNS__ObjectRefArray(*)>(_a[1]))); break;
        case 26: _t->mc_enum_custom_field_typesError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 27: _t->mc_enum_getDone((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->mc_enum_getError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 29: _t->mc_issue_existsDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->mc_issue_existsError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 31: _t->mc_issue_getDone((*reinterpret_cast< const TNS__IssueData(*)>(_a[1]))); break;
        case 32: _t->mc_issue_getError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 33: _t->mc_issue_get_biggest_idDone((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 34: _t->mc_issue_get_biggest_idError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 35: _t->mc_issue_get_id_from_summaryDone((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 36: _t->mc_issue_get_id_from_summaryError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 37: _t->mc_issue_addDone((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 38: _t->mc_issue_addError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 39: _t->mc_issue_updateDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->mc_issue_updateError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 41: _t->mc_issue_deleteDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->mc_issue_deleteError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 43: _t->mc_issue_note_addDone((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 44: _t->mc_issue_note_addError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 45: _t->mc_issue_note_deleteDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->mc_issue_note_deleteError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 47: _t->mc_issue_relationship_addDone((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 48: _t->mc_issue_relationship_addError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 49: _t->mc_issue_relationship_deleteDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->mc_issue_relationship_deleteError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 51: _t->mc_issue_attachment_addDone((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 52: _t->mc_issue_attachment_addError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 53: _t->mc_issue_attachment_deleteDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->mc_issue_attachment_deleteError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 55: _t->mc_issue_attachment_getDone((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 56: _t->mc_issue_attachment_getError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 57: _t->mc_project_addDone((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 58: _t->mc_project_addError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 59: _t->mc_project_deleteDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->mc_project_deleteError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 61: _t->mc_project_updateDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->mc_project_updateError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 63: _t->mc_project_get_id_from_nameDone((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 64: _t->mc_project_get_id_from_nameError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 65: _t->mc_project_get_issuesDone((*reinterpret_cast< const TNS__IssueDataArray(*)>(_a[1]))); break;
        case 66: _t->mc_project_get_issuesError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 67: _t->mc_project_get_issue_headersDone((*reinterpret_cast< const TNS__IssueHeaderDataArray(*)>(_a[1]))); break;
        case 68: _t->mc_project_get_issue_headersError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 69: _t->mc_project_get_usersDone((*reinterpret_cast< const TNS__AccountDataArray(*)>(_a[1]))); break;
        case 70: _t->mc_project_get_usersError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 71: _t->mc_projects_get_user_accessibleDone((*reinterpret_cast< const TNS__ProjectDataArray(*)>(_a[1]))); break;
        case 72: _t->mc_projects_get_user_accessibleError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 73: _t->mc_project_get_categoriesDone((*reinterpret_cast< const TNS__StringArray(*)>(_a[1]))); break;
        case 74: _t->mc_project_get_categoriesError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 75: _t->mc_project_add_categoryDone((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 76: _t->mc_project_add_categoryError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 77: _t->mc_project_delete_categoryDone((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 78: _t->mc_project_delete_categoryError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 79: _t->mc_project_rename_category_by_nameDone((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 80: _t->mc_project_rename_category_by_nameError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 81: _t->mc_project_get_versionsDone((*reinterpret_cast< const TNS__ProjectVersionDataArray(*)>(_a[1]))); break;
        case 82: _t->mc_project_get_versionsError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 83: _t->mc_project_version_addDone((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 84: _t->mc_project_version_addError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 85: _t->mc_project_version_updateDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 86: _t->mc_project_version_updateError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 87: _t->mc_project_version_deleteDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: _t->mc_project_version_deleteError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 89: _t->mc_project_get_released_versionsDone((*reinterpret_cast< const TNS__ProjectVersionDataArray(*)>(_a[1]))); break;
        case 90: _t->mc_project_get_released_versionsError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 91: _t->mc_project_get_unreleased_versionsDone((*reinterpret_cast< const TNS__ProjectVersionDataArray(*)>(_a[1]))); break;
        case 92: _t->mc_project_get_unreleased_versionsError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 93: _t->mc_project_get_attachmentsDone((*reinterpret_cast< const TNS__ProjectAttachmentDataArray(*)>(_a[1]))); break;
        case 94: _t->mc_project_get_attachmentsError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 95: _t->mc_project_get_custom_fieldsDone((*reinterpret_cast< const TNS__CustomFieldDefinitionDataArray(*)>(_a[1]))); break;
        case 96: _t->mc_project_get_custom_fieldsError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 97: _t->mc_project_attachment_getDone((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 98: _t->mc_project_attachment_getError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 99: _t->mc_project_attachment_addDone((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 100: _t->mc_project_attachment_addError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 101: _t->mc_project_attachment_deleteDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 102: _t->mc_project_attachment_deleteError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 103: _t->mc_project_get_all_subprojectsDone((*reinterpret_cast< const TNS__StringArray(*)>(_a[1]))); break;
        case 104: _t->mc_project_get_all_subprojectsError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 105: _t->mc_filter_getDone((*reinterpret_cast< const TNS__FilterDataArray(*)>(_a[1]))); break;
        case 106: _t->mc_filter_getError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 107: _t->mc_filter_get_issuesDone((*reinterpret_cast< const TNS__IssueDataArray(*)>(_a[1]))); break;
        case 108: _t->mc_filter_get_issuesError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 109: _t->mc_filter_get_issue_headersDone((*reinterpret_cast< const TNS__IssueHeaderDataArray(*)>(_a[1]))); break;
        case 110: _t->mc_filter_get_issue_headersError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 111: _t->mc_config_get_stringDone((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 112: _t->mc_config_get_stringError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 113: _t->mc_issue_checkinDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 114: _t->mc_issue_checkinError((*reinterpret_cast< const KDSoapMessage(*)>(_a[1]))); break;
        case 115: _t->_kd_slotMc_versionFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 116: _t->_kd_slotMc_enum_statusFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 117: _t->_kd_slotMc_enum_prioritiesFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 118: _t->_kd_slotMc_enum_severitiesFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 119: _t->_kd_slotMc_enum_reproducibilitiesFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 120: _t->_kd_slotMc_enum_projectionsFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 121: _t->_kd_slotMc_enum_etasFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 122: _t->_kd_slotMc_enum_resolutionsFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 123: _t->_kd_slotMc_enum_access_levelsFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 124: _t->_kd_slotMc_enum_project_statusFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 125: _t->_kd_slotMc_enum_project_view_statesFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 126: _t->_kd_slotMc_enum_view_statesFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 127: _t->_kd_slotMc_enum_custom_field_typesFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 128: _t->_kd_slotMc_enum_getFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 129: _t->_kd_slotMc_issue_existsFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 130: _t->_kd_slotMc_issue_getFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 131: _t->_kd_slotMc_issue_get_biggest_idFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 132: _t->_kd_slotMc_issue_get_id_from_summaryFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 133: _t->_kd_slotMc_issue_addFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 134: _t->_kd_slotMc_issue_updateFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 135: _t->_kd_slotMc_issue_deleteFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 136: _t->_kd_slotMc_issue_note_addFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 137: _t->_kd_slotMc_issue_note_deleteFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 138: _t->_kd_slotMc_issue_relationship_addFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 139: _t->_kd_slotMc_issue_relationship_deleteFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 140: _t->_kd_slotMc_issue_attachment_addFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 141: _t->_kd_slotMc_issue_attachment_deleteFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 142: _t->_kd_slotMc_issue_attachment_getFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 143: _t->_kd_slotMc_project_addFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 144: _t->_kd_slotMc_project_deleteFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 145: _t->_kd_slotMc_project_updateFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 146: _t->_kd_slotMc_project_get_id_from_nameFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 147: _t->_kd_slotMc_project_get_issuesFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 148: _t->_kd_slotMc_project_get_issue_headersFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 149: _t->_kd_slotMc_project_get_usersFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 150: _t->_kd_slotMc_projects_get_user_accessibleFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 151: _t->_kd_slotMc_project_get_categoriesFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 152: _t->_kd_slotMc_project_add_categoryFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 153: _t->_kd_slotMc_project_delete_categoryFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 154: _t->_kd_slotMc_project_rename_category_by_nameFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 155: _t->_kd_slotMc_project_get_versionsFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 156: _t->_kd_slotMc_project_version_addFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 157: _t->_kd_slotMc_project_version_updateFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 158: _t->_kd_slotMc_project_version_deleteFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 159: _t->_kd_slotMc_project_get_released_versionsFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 160: _t->_kd_slotMc_project_get_unreleased_versionsFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 161: _t->_kd_slotMc_project_get_attachmentsFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 162: _t->_kd_slotMc_project_get_custom_fieldsFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 163: _t->_kd_slotMc_project_attachment_getFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 164: _t->_kd_slotMc_project_attachment_addFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 165: _t->_kd_slotMc_project_attachment_deleteFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 166: _t->_kd_slotMc_project_get_all_subprojectsFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 167: _t->_kd_slotMc_filter_getFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 168: _t->_kd_slotMc_filter_get_issuesFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 169: _t->_kd_slotMc_filter_get_issue_headersFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 170: _t->_kd_slotMc_config_get_stringFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        case 171: _t->_kd_slotMc_issue_checkinFinished((*reinterpret_cast< KDSoapPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 64:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 68:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 70:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 72:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 74:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 76:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 78:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 80:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 82:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 84:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 86:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 88:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 90:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 92:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 94:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 96:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 98:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 100:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 102:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 104:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 106:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 108:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 110:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 112:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        case 114:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSoapMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MantisConnect::*_t)(const QString & , const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::soapError)) {
                *result = 0;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_versionDone)) {
                *result = 1;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_versionError)) {
                *result = 2;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ObjectRefArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_statusDone)) {
                *result = 3;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_statusError)) {
                *result = 4;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ObjectRefArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_prioritiesDone)) {
                *result = 5;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_prioritiesError)) {
                *result = 6;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ObjectRefArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_severitiesDone)) {
                *result = 7;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_severitiesError)) {
                *result = 8;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ObjectRefArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_reproducibilitiesDone)) {
                *result = 9;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_reproducibilitiesError)) {
                *result = 10;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ObjectRefArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_projectionsDone)) {
                *result = 11;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_projectionsError)) {
                *result = 12;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ObjectRefArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_etasDone)) {
                *result = 13;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_etasError)) {
                *result = 14;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ObjectRefArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_resolutionsDone)) {
                *result = 15;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_resolutionsError)) {
                *result = 16;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ObjectRefArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_access_levelsDone)) {
                *result = 17;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_access_levelsError)) {
                *result = 18;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ObjectRefArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_project_statusDone)) {
                *result = 19;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_project_statusError)) {
                *result = 20;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ObjectRefArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_project_view_statesDone)) {
                *result = 21;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_project_view_statesError)) {
                *result = 22;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ObjectRefArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_view_statesDone)) {
                *result = 23;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_view_statesError)) {
                *result = 24;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ObjectRefArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_custom_field_typesDone)) {
                *result = 25;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_custom_field_typesError)) {
                *result = 26;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_getDone)) {
                *result = 27;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_enum_getError)) {
                *result = 28;
            }
        }
        {
            typedef void (MantisConnect::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_existsDone)) {
                *result = 29;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_existsError)) {
                *result = 30;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__IssueData & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_getDone)) {
                *result = 31;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_getError)) {
                *result = 32;
            }
        }
        {
            typedef void (MantisConnect::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_get_biggest_idDone)) {
                *result = 33;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_get_biggest_idError)) {
                *result = 34;
            }
        }
        {
            typedef void (MantisConnect::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_get_id_from_summaryDone)) {
                *result = 35;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_get_id_from_summaryError)) {
                *result = 36;
            }
        }
        {
            typedef void (MantisConnect::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_addDone)) {
                *result = 37;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_addError)) {
                *result = 38;
            }
        }
        {
            typedef void (MantisConnect::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_updateDone)) {
                *result = 39;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_updateError)) {
                *result = 40;
            }
        }
        {
            typedef void (MantisConnect::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_deleteDone)) {
                *result = 41;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_deleteError)) {
                *result = 42;
            }
        }
        {
            typedef void (MantisConnect::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_note_addDone)) {
                *result = 43;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_note_addError)) {
                *result = 44;
            }
        }
        {
            typedef void (MantisConnect::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_note_deleteDone)) {
                *result = 45;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_note_deleteError)) {
                *result = 46;
            }
        }
        {
            typedef void (MantisConnect::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_relationship_addDone)) {
                *result = 47;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_relationship_addError)) {
                *result = 48;
            }
        }
        {
            typedef void (MantisConnect::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_relationship_deleteDone)) {
                *result = 49;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_relationship_deleteError)) {
                *result = 50;
            }
        }
        {
            typedef void (MantisConnect::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_attachment_addDone)) {
                *result = 51;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_attachment_addError)) {
                *result = 52;
            }
        }
        {
            typedef void (MantisConnect::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_attachment_deleteDone)) {
                *result = 53;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_attachment_deleteError)) {
                *result = 54;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_attachment_getDone)) {
                *result = 55;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_attachment_getError)) {
                *result = 56;
            }
        }
        {
            typedef void (MantisConnect::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_addDone)) {
                *result = 57;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_addError)) {
                *result = 58;
            }
        }
        {
            typedef void (MantisConnect::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_deleteDone)) {
                *result = 59;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_deleteError)) {
                *result = 60;
            }
        }
        {
            typedef void (MantisConnect::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_updateDone)) {
                *result = 61;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_updateError)) {
                *result = 62;
            }
        }
        {
            typedef void (MantisConnect::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_id_from_nameDone)) {
                *result = 63;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_id_from_nameError)) {
                *result = 64;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__IssueDataArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_issuesDone)) {
                *result = 65;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_issuesError)) {
                *result = 66;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__IssueHeaderDataArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_issue_headersDone)) {
                *result = 67;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_issue_headersError)) {
                *result = 68;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__AccountDataArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_usersDone)) {
                *result = 69;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_usersError)) {
                *result = 70;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ProjectDataArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_projects_get_user_accessibleDone)) {
                *result = 71;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_projects_get_user_accessibleError)) {
                *result = 72;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__StringArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_categoriesDone)) {
                *result = 73;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_categoriesError)) {
                *result = 74;
            }
        }
        {
            typedef void (MantisConnect::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_add_categoryDone)) {
                *result = 75;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_add_categoryError)) {
                *result = 76;
            }
        }
        {
            typedef void (MantisConnect::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_delete_categoryDone)) {
                *result = 77;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_delete_categoryError)) {
                *result = 78;
            }
        }
        {
            typedef void (MantisConnect::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_rename_category_by_nameDone)) {
                *result = 79;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_rename_category_by_nameError)) {
                *result = 80;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ProjectVersionDataArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_versionsDone)) {
                *result = 81;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_versionsError)) {
                *result = 82;
            }
        }
        {
            typedef void (MantisConnect::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_version_addDone)) {
                *result = 83;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_version_addError)) {
                *result = 84;
            }
        }
        {
            typedef void (MantisConnect::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_version_updateDone)) {
                *result = 85;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_version_updateError)) {
                *result = 86;
            }
        }
        {
            typedef void (MantisConnect::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_version_deleteDone)) {
                *result = 87;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_version_deleteError)) {
                *result = 88;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ProjectVersionDataArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_released_versionsDone)) {
                *result = 89;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_released_versionsError)) {
                *result = 90;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ProjectVersionDataArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_unreleased_versionsDone)) {
                *result = 91;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_unreleased_versionsError)) {
                *result = 92;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__ProjectAttachmentDataArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_attachmentsDone)) {
                *result = 93;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_attachmentsError)) {
                *result = 94;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__CustomFieldDefinitionDataArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_custom_fieldsDone)) {
                *result = 95;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_custom_fieldsError)) {
                *result = 96;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_attachment_getDone)) {
                *result = 97;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_attachment_getError)) {
                *result = 98;
            }
        }
        {
            typedef void (MantisConnect::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_attachment_addDone)) {
                *result = 99;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_attachment_addError)) {
                *result = 100;
            }
        }
        {
            typedef void (MantisConnect::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_attachment_deleteDone)) {
                *result = 101;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_attachment_deleteError)) {
                *result = 102;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__StringArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_all_subprojectsDone)) {
                *result = 103;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_project_get_all_subprojectsError)) {
                *result = 104;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__FilterDataArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_filter_getDone)) {
                *result = 105;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_filter_getError)) {
                *result = 106;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__IssueDataArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_filter_get_issuesDone)) {
                *result = 107;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_filter_get_issuesError)) {
                *result = 108;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const TNS__IssueHeaderDataArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_filter_get_issue_headersDone)) {
                *result = 109;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_filter_get_issue_headersError)) {
                *result = 110;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_config_get_stringDone)) {
                *result = 111;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_config_get_stringError)) {
                *result = 112;
            }
        }
        {
            typedef void (MantisConnect::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_checkinDone)) {
                *result = 113;
            }
        }
        {
            typedef void (MantisConnect::*_t)(const KDSoapMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MantisConnect::mc_issue_checkinError)) {
                *result = 114;
            }
        }
    }
}

const QMetaObject MantisConnect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MantisConnect.data,
      qt_meta_data_MantisConnect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MantisConnect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MantisConnect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MantisConnect.stringdata0))
        return static_cast<void*>(const_cast< MantisConnect*>(this));
    return QObject::qt_metacast(_clname);
}

int MantisConnect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 172)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 172;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 172)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 172;
    }
    return _id;
}

// SIGNAL 0
void MantisConnect::soapError(const QString & _t1, const KDSoapMessage & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MantisConnect::mc_versionDone(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MantisConnect::mc_versionError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MantisConnect::mc_enum_statusDone(const TNS__ObjectRefArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MantisConnect::mc_enum_statusError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MantisConnect::mc_enum_prioritiesDone(const TNS__ObjectRefArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MantisConnect::mc_enum_prioritiesError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MantisConnect::mc_enum_severitiesDone(const TNS__ObjectRefArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MantisConnect::mc_enum_severitiesError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MantisConnect::mc_enum_reproducibilitiesDone(const TNS__ObjectRefArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MantisConnect::mc_enum_reproducibilitiesError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MantisConnect::mc_enum_projectionsDone(const TNS__ObjectRefArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MantisConnect::mc_enum_projectionsError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MantisConnect::mc_enum_etasDone(const TNS__ObjectRefArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MantisConnect::mc_enum_etasError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MantisConnect::mc_enum_resolutionsDone(const TNS__ObjectRefArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MantisConnect::mc_enum_resolutionsError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MantisConnect::mc_enum_access_levelsDone(const TNS__ObjectRefArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MantisConnect::mc_enum_access_levelsError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MantisConnect::mc_enum_project_statusDone(const TNS__ObjectRefArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MantisConnect::mc_enum_project_statusError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MantisConnect::mc_enum_project_view_statesDone(const TNS__ObjectRefArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MantisConnect::mc_enum_project_view_statesError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void MantisConnect::mc_enum_view_statesDone(const TNS__ObjectRefArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void MantisConnect::mc_enum_view_statesError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void MantisConnect::mc_enum_custom_field_typesDone(const TNS__ObjectRefArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void MantisConnect::mc_enum_custom_field_typesError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void MantisConnect::mc_enum_getDone(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void MantisConnect::mc_enum_getError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void MantisConnect::mc_issue_existsDone(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void MantisConnect::mc_issue_existsError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void MantisConnect::mc_issue_getDone(const TNS__IssueData & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void MantisConnect::mc_issue_getError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void MantisConnect::mc_issue_get_biggest_idDone(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void MantisConnect::mc_issue_get_biggest_idError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void MantisConnect::mc_issue_get_id_from_summaryDone(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void MantisConnect::mc_issue_get_id_from_summaryError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void MantisConnect::mc_issue_addDone(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void MantisConnect::mc_issue_addError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void MantisConnect::mc_issue_updateDone(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void MantisConnect::mc_issue_updateError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void MantisConnect::mc_issue_deleteDone(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void MantisConnect::mc_issue_deleteError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void MantisConnect::mc_issue_note_addDone(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void MantisConnect::mc_issue_note_addError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void MantisConnect::mc_issue_note_deleteDone(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void MantisConnect::mc_issue_note_deleteError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void MantisConnect::mc_issue_relationship_addDone(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void MantisConnect::mc_issue_relationship_addError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void MantisConnect::mc_issue_relationship_deleteDone(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void MantisConnect::mc_issue_relationship_deleteError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void MantisConnect::mc_issue_attachment_addDone(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void MantisConnect::mc_issue_attachment_addError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void MantisConnect::mc_issue_attachment_deleteDone(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void MantisConnect::mc_issue_attachment_deleteError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void MantisConnect::mc_issue_attachment_getDone(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void MantisConnect::mc_issue_attachment_getError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void MantisConnect::mc_project_addDone(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void MantisConnect::mc_project_addError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void MantisConnect::mc_project_deleteDone(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void MantisConnect::mc_project_deleteError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void MantisConnect::mc_project_updateDone(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void MantisConnect::mc_project_updateError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void MantisConnect::mc_project_get_id_from_nameDone(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void MantisConnect::mc_project_get_id_from_nameError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void MantisConnect::mc_project_get_issuesDone(const TNS__IssueDataArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void MantisConnect::mc_project_get_issuesError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void MantisConnect::mc_project_get_issue_headersDone(const TNS__IssueHeaderDataArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void MantisConnect::mc_project_get_issue_headersError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void MantisConnect::mc_project_get_usersDone(const TNS__AccountDataArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void MantisConnect::mc_project_get_usersError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void MantisConnect::mc_projects_get_user_accessibleDone(const TNS__ProjectDataArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void MantisConnect::mc_projects_get_user_accessibleError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void MantisConnect::mc_project_get_categoriesDone(const TNS__StringArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void MantisConnect::mc_project_get_categoriesError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void MantisConnect::mc_project_add_categoryDone(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void MantisConnect::mc_project_add_categoryError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void MantisConnect::mc_project_delete_categoryDone(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void MantisConnect::mc_project_delete_categoryError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void MantisConnect::mc_project_rename_category_by_nameDone(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void MantisConnect::mc_project_rename_category_by_nameError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void MantisConnect::mc_project_get_versionsDone(const TNS__ProjectVersionDataArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void MantisConnect::mc_project_get_versionsError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void MantisConnect::mc_project_version_addDone(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void MantisConnect::mc_project_version_addError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void MantisConnect::mc_project_version_updateDone(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void MantisConnect::mc_project_version_updateError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void MantisConnect::mc_project_version_deleteDone(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void MantisConnect::mc_project_version_deleteError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void MantisConnect::mc_project_get_released_versionsDone(const TNS__ProjectVersionDataArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void MantisConnect::mc_project_get_released_versionsError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void MantisConnect::mc_project_get_unreleased_versionsDone(const TNS__ProjectVersionDataArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void MantisConnect::mc_project_get_unreleased_versionsError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void MantisConnect::mc_project_get_attachmentsDone(const TNS__ProjectAttachmentDataArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void MantisConnect::mc_project_get_attachmentsError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void MantisConnect::mc_project_get_custom_fieldsDone(const TNS__CustomFieldDefinitionDataArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void MantisConnect::mc_project_get_custom_fieldsError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 96, _a);
}

// SIGNAL 97
void MantisConnect::mc_project_attachment_getDone(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 97, _a);
}

// SIGNAL 98
void MantisConnect::mc_project_attachment_getError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 98, _a);
}

// SIGNAL 99
void MantisConnect::mc_project_attachment_addDone(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 99, _a);
}

// SIGNAL 100
void MantisConnect::mc_project_attachment_addError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 100, _a);
}

// SIGNAL 101
void MantisConnect::mc_project_attachment_deleteDone(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 101, _a);
}

// SIGNAL 102
void MantisConnect::mc_project_attachment_deleteError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 102, _a);
}

// SIGNAL 103
void MantisConnect::mc_project_get_all_subprojectsDone(const TNS__StringArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 103, _a);
}

// SIGNAL 104
void MantisConnect::mc_project_get_all_subprojectsError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 104, _a);
}

// SIGNAL 105
void MantisConnect::mc_filter_getDone(const TNS__FilterDataArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 105, _a);
}

// SIGNAL 106
void MantisConnect::mc_filter_getError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void MantisConnect::mc_filter_get_issuesDone(const TNS__IssueDataArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void MantisConnect::mc_filter_get_issuesError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 108, _a);
}

// SIGNAL 109
void MantisConnect::mc_filter_get_issue_headersDone(const TNS__IssueHeaderDataArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void MantisConnect::mc_filter_get_issue_headersError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void MantisConnect::mc_config_get_stringDone(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}

// SIGNAL 112
void MantisConnect::mc_config_get_stringError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
}

// SIGNAL 113
void MantisConnect::mc_issue_checkinDone(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
}

// SIGNAL 114
void MantisConnect::mc_issue_checkinError(const KDSoapMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 114, _a);
}
QT_END_MOC_NAMESPACE
