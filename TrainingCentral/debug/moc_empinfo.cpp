/****************************************************************************
** Meta object code from reading C++ file 'empinfo.h'
**
** Created: Sat 8. Nov 23:07:29 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../empinfo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'empinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EmpInfo[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      33,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EmpInfo[] = {
    "EmpInfo\0\0on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
};

const QMetaObject EmpInfo::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EmpInfo,
      qt_meta_data_EmpInfo, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EmpInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EmpInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EmpInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EmpInfo))
        return static_cast<void*>(const_cast< EmpInfo*>(this));
    return QDialog::qt_metacast(_clname);
}

int EmpInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: on_pushButton_2_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
