/****************************************************************************
** Meta object code from reading C++ file 'slidercontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtClient/Panels/slidercontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slidercontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SliderControl_t {
    QByteArrayData data[10];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SliderControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SliderControl_t qt_meta_stringdata_SliderControl = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SliderControl"
QT_MOC_LITERAL(1, 14, 25), // "on_timeSlider_sliderMoved"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 8), // "position"
QT_MOC_LITERAL(4, 50, 26), // "on_timeSlider_valueChanged"
QT_MOC_LITERAL(5, 77, 5), // "value"
QT_MOC_LITERAL(6, 83, 24), // "on_maxSlider_sliderMoved"
QT_MOC_LITERAL(7, 108, 25), // "on_maxSlider_valueChanged"
QT_MOC_LITERAL(8, 134, 24), // "on_minSlider_sliderMoved"
QT_MOC_LITERAL(9, 159, 25) // "on_minSlider_valueChanged"

    },
    "SliderControl\0on_timeSlider_sliderMoved\0"
    "\0position\0on_timeSlider_valueChanged\0"
    "value\0on_maxSlider_sliderMoved\0"
    "on_maxSlider_valueChanged\0"
    "on_minSlider_sliderMoved\0"
    "on_minSlider_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SliderControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       6,    1,   50,    2, 0x08 /* Private */,
       7,    1,   53,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
       9,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void SliderControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SliderControl *_t = static_cast<SliderControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_timeSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_timeSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_maxSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_maxSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_minSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_minSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SliderControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SliderControl.data,
      qt_meta_data_SliderControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SliderControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SliderControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SliderControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SliderControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
