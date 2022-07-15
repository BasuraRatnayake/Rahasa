/****************************************************************************
** Meta object code from reading C++ file 'encryptform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Rahasa/encryptform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'encryptform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EncryptForm_t {
    QByteArrayData data[9];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EncryptForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EncryptForm_t qt_meta_stringdata_EncryptForm = {
    {
QT_MOC_LITERAL(0, 0, 11), // "EncryptForm"
QT_MOC_LITERAL(1, 12, 18), // "on_btnHome_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "on_btnBrowse_clicked"
QT_MOC_LITERAL(4, 53, 21), // "on_btnGenPass_clicked"
QT_MOC_LITERAL(5, 75, 24), // "on_chkViews_stateChanged"
QT_MOC_LITERAL(6, 100, 23), // "on_chkTime_stateChanged"
QT_MOC_LITERAL(7, 124, 21), // "on_btnEncrypt_clicked"
QT_MOC_LITERAL(8, 146, 22) // "on_le_pass_textChanged"

    },
    "EncryptForm\0on_btnHome_clicked\0\0"
    "on_btnBrowse_clicked\0on_btnGenPass_clicked\0"
    "on_chkViews_stateChanged\0"
    "on_chkTime_stateChanged\0on_btnEncrypt_clicked\0"
    "on_le_pass_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EncryptForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
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

void EncryptForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EncryptForm *_t = static_cast<EncryptForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnHome_clicked(); break;
        case 1: _t->on_btnBrowse_clicked(); break;
        case 2: _t->on_btnGenPass_clicked(); break;
        case 3: _t->on_chkViews_stateChanged(); break;
        case 4: _t->on_chkTime_stateChanged(); break;
        case 5: _t->on_btnEncrypt_clicked(); break;
        case 6: _t->on_le_pass_textChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject EncryptForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EncryptForm.data,
      qt_meta_data_EncryptForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EncryptForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EncryptForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EncryptForm.stringdata0))
        return static_cast<void*>(const_cast< EncryptForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int EncryptForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
