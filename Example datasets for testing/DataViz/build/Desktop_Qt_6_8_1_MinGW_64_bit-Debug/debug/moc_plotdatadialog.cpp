/****************************************************************************
** Meta object code from reading C++ file 'plotdatadialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../DataViz/plotdatadialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plotdatadialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN14PlotDataDialogE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN14PlotDataDialogE = QtMocHelpers::stringData(
    "PlotDataDialog",
    "sendChosenDataSet_SIGNAL",
    "",
    "DataSet*",
    "on_buttonBox_accepted",
    "on_buttonBox_rejected"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN14PlotDataDialogE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   35,    2, 0x08,    3 /* Private */,
       5,    0,   36,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlotDataDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ZN14PlotDataDialogE.offsetsAndSizes,
    qt_meta_data_ZN14PlotDataDialogE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN14PlotDataDialogE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlotDataDialog, std::true_type>,
        // method 'sendChosenDataSet_SIGNAL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataSet *, std::false_type>,
        // method 'on_buttonBox_accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buttonBox_rejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PlotDataDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlotDataDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sendChosenDataSet_SIGNAL((*reinterpret_cast< std::add_pointer_t<DataSet*>>(_a[1]))); break;
        case 1: _t->on_buttonBox_accepted(); break;
        case 2: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (PlotDataDialog::*)(DataSet * );
            if (_q_method_type _q_method = &PlotDataDialog::sendChosenDataSet_SIGNAL; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *PlotDataDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlotDataDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN14PlotDataDialogE.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PlotDataDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PlotDataDialog::sendChosenDataSet_SIGNAL(DataSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP