/****************************************************************************
** Meta object code from reading C++ file 'invoke.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../invoke.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'invoke.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Invoke_t {
    QByteArrayData data[11];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Invoke_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Invoke_t qt_meta_stringdata_Invoke = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Invoke"
QT_MOC_LITERAL(1, 7, 13), // "newConnection"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 20), // "on_runGatewayClicked"
QT_MOC_LITERAL(4, 43, 18), // "on_runStageClicked"
QT_MOC_LITERAL(5, 62, 15), // "on_runP3Clicked"
QT_MOC_LITERAL(6, 78, 11), // "onReadyRead"
QT_MOC_LITERAL(7, 90, 21), // "on_startServerClicked"
QT_MOC_LITERAL(8, 112, 12), // "sendMessages"
QT_MOC_LITERAL(9, 125, 9), // "p_message"
QT_MOC_LITERAL(10, 135, 7) // "p_appID"

    },
    "Invoke\0newConnection\0\0on_runGatewayClicked\0"
    "on_runStageClicked\0on_runP3Clicked\0"
    "onReadyRead\0on_startServerClicked\0"
    "sendMessages\0p_message\0p_appID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Invoke[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    2,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,

       0        // eod
};

void Invoke::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Invoke *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newConnection(); break;
        case 1: _t->on_runGatewayClicked(); break;
        case 2: _t->on_runStageClicked(); break;
        case 3: _t->on_runP3Clicked(); break;
        case 4: _t->onReadyRead(); break;
        case 5: _t->on_startServerClicked(); break;
        case 6: _t->sendMessages((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Invoke::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Invoke.data,
    qt_meta_data_Invoke,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Invoke::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Invoke::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Invoke.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Invoke::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
