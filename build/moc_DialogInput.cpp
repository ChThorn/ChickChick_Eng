/****************************************************************************
** Meta object code from reading C++ file 'DialogInput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../DialogInput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogInput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogInput_t {
    QByteArrayData data[9];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogInput_t qt_meta_stringdata_DialogInput = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DialogInput"
QT_MOC_LITERAL(1, 12, 7), // "onTimer"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 21), // "on_BTN_MENU_1_clicked"
QT_MOC_LITERAL(4, 43, 21), // "on_BTN_MENU_2_clicked"
QT_MOC_LITERAL(5, 65, 21), // "on_BTN_MENU_3_clicked"
QT_MOC_LITERAL(6, 87, 21), // "on_BTN_MENU_4_clicked"
QT_MOC_LITERAL(7, 109, 21), // "on_BTN_MENU_5_clicked"
QT_MOC_LITERAL(8, 131, 21) // "on_BTN_MENU_6_clicked"

    },
    "DialogInput\0onTimer\0\0on_BTN_MENU_1_clicked\0"
    "on_BTN_MENU_2_clicked\0on_BTN_MENU_3_clicked\0"
    "on_BTN_MENU_4_clicked\0on_BTN_MENU_5_clicked\0"
    "on_BTN_MENU_6_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogInput[] = {

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
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogInput *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onTimer(); break;
        case 1: _t->on_BTN_MENU_1_clicked(); break;
        case 2: _t->on_BTN_MENU_2_clicked(); break;
        case 3: _t->on_BTN_MENU_3_clicked(); break;
        case 4: _t->on_BTN_MENU_4_clicked(); break;
        case 5: _t->on_BTN_MENU_5_clicked(); break;
        case 6: _t->on_BTN_MENU_6_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject DialogInput::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DialogInput.data,
    qt_meta_data_DialogInput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DialogInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogInput.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
