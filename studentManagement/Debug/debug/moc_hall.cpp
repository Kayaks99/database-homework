/****************************************************************************
** Meta object code from reading C++ file 'hall.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hall.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hall.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hall_t {
    QByteArrayData data[11];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hall_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hall_t qt_meta_stringdata_hall = {
    {
QT_MOC_LITERAL(0, 0, 4), // "hall"
QT_MOC_LITERAL(1, 5, 12), // "clickedQuery"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 10), // "clickedStu"
QT_MOC_LITERAL(4, 30, 14), // "clickedMission"
QT_MOC_LITERAL(5, 45, 12), // "clickedPlace"
QT_MOC_LITERAL(6, 58, 12), // "clickedEquip"
QT_MOC_LITERAL(7, 71, 12), // "clickedOrgan"
QT_MOC_LITERAL(8, 84, 2), // "f5"
QT_MOC_LITERAL(9, 87, 7), // "insertI"
QT_MOC_LITERAL(10, 95, 7) // "deleteI"

    },
    "hall\0clickedQuery\0\0clickedStu\0"
    "clickedMission\0clickedPlace\0clickedEquip\0"
    "clickedOrgan\0f5\0insertI\0deleteI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hall[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
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

void hall::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        hall *_t = static_cast<hall *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clickedQuery(); break;
        case 1: _t->clickedStu(); break;
        case 2: _t->clickedMission(); break;
        case 3: _t->clickedPlace(); break;
        case 4: _t->clickedEquip(); break;
        case 5: _t->clickedOrgan(); break;
        case 6: _t->f5(); break;
        case 7: _t->insertI(); break;
        case 8: _t->deleteI(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject hall::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_hall.data,
      qt_meta_data_hall,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *hall::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hall::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hall.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int hall::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
