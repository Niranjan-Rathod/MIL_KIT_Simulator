/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../8251_USART/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[13];
    char stringdata[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 16),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 17),
QT_MOC_LITERAL(4, 47, 21),
QT_MOC_LITERAL(5, 69, 23),
QT_MOC_LITERAL(6, 93, 18),
QT_MOC_LITERAL(7, 112, 19),
QT_MOC_LITERAL(8, 132, 20),
QT_MOC_LITERAL(9, 153, 23),
QT_MOC_LITERAL(10, 177, 17),
QT_MOC_LITERAL(11, 195, 15),
QT_MOC_LITERAL(12, 211, 16)
    },
    "MainWindow\0on_ENTER_pressed\0\0"
    "instruction_fetch\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_bytetra_clicked\0"
    "on_blocktra_clicked\0on_soursebut_clicked\0"
    "on_pushButton_3_clicked\0on_desbut_clicked\0"
    "source_terminal\0on_about_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08,
       3,    1,   70,    2, 0x08,
       4,    0,   73,    2, 0x08,
       5,    0,   74,    2, 0x08,
       6,    0,   75,    2, 0x08,
       7,    0,   76,    2, 0x08,
       8,    0,   77,    2, 0x08,
       9,    0,   78,    2, 0x08,
      10,    0,   79,    2, 0x08,
      11,    0,   80,    2, 0x08,
      12,    0,   81,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::ULong, QMetaType::ULong,    2,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_ENTER_pressed(); break;
        case 1: { ulong _r = _t->instruction_fetch((*reinterpret_cast< ulong(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ulong*>(_a[0]) = _r; }  break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_bytetra_clicked(); break;
        case 5: _t->on_blocktra_clicked(); break;
        case 6: _t->on_soursebut_clicked(); break;
        case 7: _t->on_pushButton_3_clicked(); break;
        case 8: _t->on_desbut_clicked(); break;
        case 9: _t->source_terminal(); break;
        case 10: _t->on_about_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
