/****************************************************************************
** Meta object code from reading C++ file 'income_ui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../income_ui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'income_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_income_ui_t {
    QByteArrayData data[7];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_income_ui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_income_ui_t qt_meta_stringdata_income_ui = {
    {
QT_MOC_LITERAL(0, 0, 9), // "income_ui"
QT_MOC_LITERAL(1, 10, 33), // "data_from_income_ui_to_financ..."
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 7), // "income*"
QT_MOC_LITERAL(4, 53, 2), // "in"
QT_MOC_LITERAL(5, 56, 19), // "on_okButton_clicked"
QT_MOC_LITERAL(6, 76, 48) // "on_pointer_data_income_to_inc..."

    },
    "income_ui\0data_from_income_ui_to_finance_ui\0"
    "\0income*\0in\0on_okButton_clicked\0"
    "on_pointer_data_income_to_income_ui_in_modAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_income_ui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x08 /* Private */,
       6,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void income_ui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        income_ui *_t = static_cast<income_ui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->data_from_income_ui_to_finance_ui((*reinterpret_cast< income*(*)>(_a[1]))); break;
        case 1: _t->on_okButton_clicked(); break;
        case 2: _t->on_pointer_data_income_to_income_ui_in_modAction((*reinterpret_cast< income*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (income_ui::*_t)(income * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&income_ui::data_from_income_ui_to_finance_ui)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject income_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_income_ui.data,
      qt_meta_data_income_ui,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *income_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *income_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_income_ui.stringdata0))
        return static_cast<void*>(const_cast< income_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int income_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void income_ui::data_from_income_ui_to_finance_ui(income * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
