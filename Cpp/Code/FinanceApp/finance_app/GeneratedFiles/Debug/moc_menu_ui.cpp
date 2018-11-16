/****************************************************************************
** Meta object code from reading C++ file 'menu_ui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../menu_ui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_menu_ui_t {
    QByteArrayData data[22];
    char stringdata0[399];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_menu_ui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_menu_ui_t qt_meta_stringdata_menu_ui = {
    {
QT_MOC_LITERAL(0, 0, 7), // "menu_ui"
QT_MOC_LITERAL(1, 8, 14), // "currentChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "index"
QT_MOC_LITERAL(4, 30, 7), // "clicked"
QT_MOC_LITERAL(5, 38, 43), // "pointer_service_from_menu_ui_..."
QT_MOC_LITERAL(6, 82, 15), // "add_service_ui*"
QT_MOC_LITERAL(7, 98, 1), // "s"
QT_MOC_LITERAL(8, 100, 41), // "pointer_iteam_from_menu_ui_to..."
QT_MOC_LITERAL(9, 142, 9), // "iteam_ui*"
QT_MOC_LITERAL(10, 152, 42), // "pointer_income_from_menu_ui_t..."
QT_MOC_LITERAL(11, 195, 10), // "income_ui*"
QT_MOC_LITERAL(12, 206, 12), // "onTabChanged"
QT_MOC_LITERAL(13, 219, 17), // "onIteamAddClicked"
QT_MOC_LITERAL(14, 237, 17), // "onIteamDelClicked"
QT_MOC_LITERAL(15, 255, 20), // "onIteamSearchClicked"
QT_MOC_LITERAL(16, 276, 19), // "onServiceAddClicked"
QT_MOC_LITERAL(17, 296, 19), // "onServiceDelClicked"
QT_MOC_LITERAL(18, 316, 22), // "onServiceSearchClicked"
QT_MOC_LITERAL(19, 339, 18), // "onIncomeAddClicked"
QT_MOC_LITERAL(20, 358, 18), // "onIncomeDelClicked"
QT_MOC_LITERAL(21, 377, 21) // "onIncomeSearchClicked"

    },
    "menu_ui\0currentChanged\0\0index\0clicked\0"
    "pointer_service_from_menu_ui_to_finance_app\0"
    "add_service_ui*\0s\0"
    "pointer_iteam_from_menu_ui_to_finance_app\0"
    "iteam_ui*\0pointer_income_from_menu_ui_to_finance_app\0"
    "income_ui*\0onTabChanged\0onIteamAddClicked\0"
    "onIteamDelClicked\0onIteamSearchClicked\0"
    "onServiceAddClicked\0onServiceDelClicked\0"
    "onServiceSearchClicked\0onIncomeAddClicked\0"
    "onIncomeDelClicked\0onIncomeSearchClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_menu_ui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    0,   92,    2, 0x06 /* Public */,
       5,    1,   93,    2, 0x06 /* Public */,
       8,    1,   96,    2, 0x06 /* Public */,
      10,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  102,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,
      18,    0,  110,    2, 0x08 /* Private */,
      19,    0,  111,    2, 0x08 /* Private */,
      20,    0,  112,    2, 0x08 /* Private */,
      21,    0,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    7,
    QMetaType::Void, 0x80000000 | 11,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void menu_ui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        menu_ui *_t = static_cast<menu_ui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->clicked(); break;
        case 2: _t->pointer_service_from_menu_ui_to_finance_app((*reinterpret_cast< add_service_ui*(*)>(_a[1]))); break;
        case 3: _t->pointer_iteam_from_menu_ui_to_finance_app((*reinterpret_cast< iteam_ui*(*)>(_a[1]))); break;
        case 4: _t->pointer_income_from_menu_ui_to_finance_app((*reinterpret_cast< income_ui*(*)>(_a[1]))); break;
        case 5: _t->onTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onIteamAddClicked(); break;
        case 7: _t->onIteamDelClicked(); break;
        case 8: _t->onIteamSearchClicked(); break;
        case 9: _t->onServiceAddClicked(); break;
        case 10: _t->onServiceDelClicked(); break;
        case 11: _t->onServiceSearchClicked(); break;
        case 12: _t->onIncomeAddClicked(); break;
        case 13: _t->onIncomeDelClicked(); break;
        case 14: _t->onIncomeSearchClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< add_service_ui* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< iteam_ui* >(); break;
            }
            break;
        case 4:
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
            typedef void (menu_ui::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&menu_ui::currentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (menu_ui::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&menu_ui::clicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (menu_ui::*_t)(add_service_ui * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&menu_ui::pointer_service_from_menu_ui_to_finance_app)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (menu_ui::*_t)(iteam_ui * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&menu_ui::pointer_iteam_from_menu_ui_to_finance_app)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (menu_ui::*_t)(income_ui * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&menu_ui::pointer_income_from_menu_ui_to_finance_app)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject menu_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_menu_ui.data,
      qt_meta_data_menu_ui,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *menu_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *menu_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_menu_ui.stringdata0))
        return static_cast<void*>(const_cast< menu_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int menu_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void menu_ui::currentChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void menu_ui::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void menu_ui::pointer_service_from_menu_ui_to_finance_app(add_service_ui * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void menu_ui::pointer_iteam_from_menu_ui_to_finance_app(iteam_ui * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void menu_ui::pointer_income_from_menu_ui_to_finance_app(income_ui * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
