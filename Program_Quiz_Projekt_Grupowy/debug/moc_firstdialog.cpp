/****************************************************************************
** Meta object code from reading C++ file 'firstdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Projekt2/firstdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'firstdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FirstDialog_t {
    QByteArrayData data[10];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FirstDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FirstDialog_t qt_meta_stringdata_FirstDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FirstDialog"
QT_MOC_LITERAL(1, 12, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 59, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(5, 82, 22), // "on_radioButton_pressed"
QT_MOC_LITERAL(6, 105, 22), // "on_radioButton_toggled"
QT_MOC_LITERAL(7, 128, 7), // "checked"
QT_MOC_LITERAL(8, 136, 24), // "on_radioButton_2_clicked"
QT_MOC_LITERAL(9, 161, 24) // "on_radioButton_3_clicked"

    },
    "FirstDialog\0on_pushButton_clicked\0\0"
    "on_pushButton_2_clicked\0on_radioButton_clicked\0"
    "on_radioButton_pressed\0on_radioButton_toggled\0"
    "checked\0on_radioButton_2_clicked\0"
    "on_radioButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FirstDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       8,    1,   64,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void FirstDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FirstDialog *_t = static_cast<FirstDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_radioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_radioButton_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_radioButton_3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FirstDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FirstDialog.data,
      qt_meta_data_FirstDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FirstDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirstDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FirstDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FirstDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
