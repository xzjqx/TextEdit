/****************************************************************************
** Meta object code from reading C++ file 'TextEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TextEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TextEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TextEditor_t {
    QByteArrayData data[21];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextEditor_t qt_meta_stringdata_TextEditor = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TextEditor"
QT_MOC_LITERAL(1, 11, 11), // "textChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "New"
QT_MOC_LITERAL(4, 28, 4), // "Open"
QT_MOC_LITERAL(5, 33, 4), // "Save"
QT_MOC_LITERAL(6, 38, 6), // "SaveAs"
QT_MOC_LITERAL(7, 45, 5), // "Print"
QT_MOC_LITERAL(8, 51, 12), // "printPreview"
QT_MOC_LITERAL(9, 64, 9), // "QPrinter*"
QT_MOC_LITERAL(10, 74, 7), // "printer"
QT_MOC_LITERAL(11, 82, 12), // "PrintPreview"
QT_MOC_LITERAL(12, 95, 4), // "Exit"
QT_MOC_LITERAL(13, 100, 4), // "Undo"
QT_MOC_LITERAL(14, 105, 4), // "Redo"
QT_MOC_LITERAL(15, 110, 3), // "Cut"
QT_MOC_LITERAL(16, 114, 4), // "Copy"
QT_MOC_LITERAL(17, 119, 5), // "Paste"
QT_MOC_LITERAL(18, 125, 4), // "Font"
QT_MOC_LITERAL(19, 130, 5), // "Color"
QT_MOC_LITERAL(20, 136, 5) // "About"

    },
    "TextEditor\0textChanged\0\0New\0Open\0Save\0"
    "SaveAs\0Print\0printPreview\0QPrinter*\0"
    "printer\0PrintPreview\0Exit\0Undo\0Redo\0"
    "Cut\0Copy\0Paste\0Font\0Color\0About"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    1,  105,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,
      19,    0,  116,    2, 0x08 /* Private */,
      20,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
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

void TextEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TextEditor *_t = static_cast<TextEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->New(); break;
        case 2: _t->Open(); break;
        case 3: _t->Save(); break;
        case 4: _t->SaveAs(); break;
        case 5: _t->Print(); break;
        case 6: _t->printPreview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 7: _t->PrintPreview(); break;
        case 8: _t->Exit(); break;
        case 9: _t->Undo(); break;
        case 10: _t->Redo(); break;
        case 11: _t->Cut(); break;
        case 12: _t->Copy(); break;
        case 13: _t->Paste(); break;
        case 14: _t->Font(); break;
        case 15: _t->Color(); break;
        case 16: _t->About(); break;
        default: ;
        }
    }
}

const QMetaObject TextEditor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TextEditor.data,
      qt_meta_data_TextEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TextEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TextEditor.stringdata0))
        return static_cast<void*>(const_cast< TextEditor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TextEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
