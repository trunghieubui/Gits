/****************************************************************************
** Meta object code from reading C++ file 'del_ui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../del_ui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'del_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_del_ui_t {
    QByteArrayData data[10];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_del_ui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_del_ui_t qt_meta_stringdata_del_ui = {
    {
QT_MOC_LITERAL(0, 0, 6), // "del_ui"
QT_MOC_LITERAL(1, 7, 42), // "pointer_service_from_del_ui_t..."
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 11), // "service_ui*"
QT_MOC_LITERAL(4, 63, 1), // "s"
QT_MOC_LITERAL(5, 65, 40), // "pointer_iteam_from_del_ui_to_..."
QT_MOC_LITERAL(6, 106, 9), // "iteam_ui*"
QT_MOC_LITERAL(7, 116, 22), // "on_del_service_clicked"
QT_MOC_LITERAL(8, 139, 20), // "on_del_iteam_clicked"
QT_MOC_LITERAL(9, 160, 21) // "on_del_income_clicked"

    },
    "del_ui\0pointer_service_from_del_ui_to_finance_app\0"
    "\0service_ui*\0s\0pointer_iteam_from_del_ui_to_finance_app\0"
    "iteam_ui*\0on_del_service_clicked\0"
    "on_del_iteam_clicked\0on_del_income_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_del_ui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   45,    2, 0x08 /* Private */,
       8,    0,   46,    2, 0x08 /* Private */,
       9,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void del_ui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        del_ui *_t = static_cast<del_ui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pointer_service_from_del_ui_to_finance_app((*reinterpret_cast< service_ui*(*)>(_a[1]))); break;
        case 1: _t->pointer_iteam_from_del_ui_to_finance_app((*reinterpret_cast< iteam_ui*(*)>(_a[1]))); break;
        case 2: _t->on_del_service_clicked(); break;
        case 3: _t->on_del_iteam_clicked(); break;
        case 4: _t->on_del_income_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< service_ui* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< iteam_ui* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (del_ui::*_t)(service_ui * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&del_ui::pointer_service_from_del_ui_to_finance_app)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (del_ui::*_t)(iteam_ui * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&del_ui::pointer_iteam_from_del_ui_to_finance_app)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject del_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_del_ui.data,
      qt_meta_data_del_ui,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *del_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *del_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_del_ui.stringdata0))
        return static_cast<void*>(const_cast< del_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int del_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void del_ui::pointer_service_from_del_ui_to_finance_app(service_ui * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void del_ui::pointer_iteam_from_del_ui_to_finance_app(iteam_ui * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
