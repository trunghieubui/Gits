/****************************************************************************
** Meta object code from reading C++ file 'add_ui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../add_ui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_add_ui_t {
    QByteArrayData data[13];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_add_ui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_add_ui_t qt_meta_stringdata_add_ui = {
    {
QT_MOC_LITERAL(0, 0, 6), // "add_ui"
QT_MOC_LITERAL(1, 7, 38), // "pointer_service_from_add_ui_t..."
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 15), // "add_service_ui*"
QT_MOC_LITERAL(4, 63, 1), // "s"
QT_MOC_LITERAL(5, 65, 36), // "pointer_iteam_from_add_ui_to_..."
QT_MOC_LITERAL(6, 102, 9), // "iteam_ui*"
QT_MOC_LITERAL(7, 112, 37), // "pointer_income_from_add_ui_to..."
QT_MOC_LITERAL(8, 150, 10), // "income_ui*"
QT_MOC_LITERAL(9, 161, 2), // "in"
QT_MOC_LITERAL(10, 164, 22), // "on_add_service_clicked"
QT_MOC_LITERAL(11, 187, 20), // "on_add_iteam_clicked"
QT_MOC_LITERAL(12, 208, 21) // "on_add_income_clicked"

    },
    "add_ui\0pointer_service_from_add_ui_to_menu_ui\0"
    "\0add_service_ui*\0s\0"
    "pointer_iteam_from_add_ui_to_menu_ui\0"
    "iteam_ui*\0pointer_income_from_add_ui_to_menu_ui\0"
    "income_ui*\0in\0on_add_service_clicked\0"
    "on_add_iteam_clicked\0on_add_income_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_add_ui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   53,    2, 0x08 /* Private */,
      11,    0,   54,    2, 0x08 /* Private */,
      12,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void add_ui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        add_ui *_t = static_cast<add_ui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pointer_service_from_add_ui_to_menu_ui((*reinterpret_cast< add_service_ui*(*)>(_a[1]))); break;
        case 1: _t->pointer_iteam_from_add_ui_to_menu_ui((*reinterpret_cast< iteam_ui*(*)>(_a[1]))); break;
        case 2: _t->pointer_income_from_add_ui_to_menu_ui((*reinterpret_cast< income_ui*(*)>(_a[1]))); break;
        case 3: _t->on_add_service_clicked(); break;
        case 4: _t->on_add_iteam_clicked(); break;
        case 5: _t->on_add_income_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< add_service_ui* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< iteam_ui* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< income_ui* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (add_ui::*_t)(add_service_ui * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&add_ui::pointer_service_from_add_ui_to_menu_ui)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (add_ui::*_t)(iteam_ui * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&add_ui::pointer_iteam_from_add_ui_to_menu_ui)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (add_ui::*_t)(income_ui * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&add_ui::pointer_income_from_add_ui_to_menu_ui)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject add_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_add_ui.data,
      qt_meta_data_add_ui,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *add_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *add_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_add_ui.stringdata0))
        return static_cast<void*>(const_cast< add_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int add_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void add_ui::pointer_service_from_add_ui_to_menu_ui(add_service_ui * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void add_ui::pointer_iteam_from_add_ui_to_menu_ui(iteam_ui * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void add_ui::pointer_income_from_add_ui_to_menu_ui(income_ui * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
