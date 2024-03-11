/****************************************************************************
** Meta object code from reading C++ file 'creditwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>

#include <memory>

#include "../frontend/creditwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'creditwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CreditWindow_t {
  const uint offsetsAndSize[10];
  char stringdata0[83];
};
#define QT_MOC_LITERAL(ofs, len) \
  uint(offsetof(qt_meta_stringdata_CreditWindow_t, stringdata0) + ofs), len
static const qt_meta_stringdata_CreditWindow_t qt_meta_stringdata_CreditWindow =
    {{
         QT_MOC_LITERAL(0, 12),   // "CreditWindow"
         QT_MOC_LITERAL(13, 12),  // "secondWindow"
         QT_MOC_LITERAL(26, 0),   // ""
         QT_MOC_LITERAL(27, 26),  // "on_pushButton_menu_clicked"
         QT_MOC_LITERAL(54, 28)   // "on_pushButton_result_clicked"

     },
     "CreditWindow\0secondWindow\0\0"
     "on_pushButton_menu_clicked\0"
     "on_pushButton_result_clicked"};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreditWindow[] = {

    // content:
    10,     // revision
    0,      // classname
    0, 0,   // classinfo
    3, 14,  // methods
    0, 0,   // properties
    0, 0,   // enums/sets
    0, 0,   // constructors
    0,      // flags
    1,      // signalCount

    // signals: name, argc, parameters, tag, flags, initial metatype offsets
    1, 0, 32, 2, 0x06, 1 /* Public */,

    // slots: name, argc, parameters, tag, flags, initial metatype offsets
    3, 0, 33, 2, 0x08, 2 /* Private */, 4, 0, 34, 2, 0x08, 3 /* Private */,

    // signals: parameters
    QMetaType::Void,

    // slots: parameters
    QMetaType::Void, QMetaType::Void,

    0  // eod
};

void CreditWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c,
                                      int _id, void **_a) {
  if (_c == QMetaObject::InvokeMetaMethod) {
    auto *_t = static_cast<CreditWindow *>(_o);
    (void)_t;
    switch (_id) {
      case 0:
        _t->secondWindow();
        break;
      case 1:
        _t->on_pushButton_menu_clicked();
        break;
      case 2:
        _t->on_pushButton_result_clicked();
        break;
      default:;
    }
  } else if (_c == QMetaObject::IndexOfMethod) {
    int *result = reinterpret_cast<int *>(_a[0]);
    {
      using _t = void (CreditWindow::*)();
      if (*reinterpret_cast<_t *>(_a[1]) ==
          static_cast<_t>(&CreditWindow::secondWindow)) {
        *result = 0;
        return;
      }
    }
  }
  (void)_a;
}

const QMetaObject CreditWindow::staticMetaObject = {
    {QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
     qt_meta_stringdata_CreditWindow.offsetsAndSize, qt_meta_data_CreditWindow,
     qt_static_metacall, nullptr,
     qt_incomplete_metaTypeArray<
         qt_meta_stringdata_CreditWindow_t,
         QtPrivate::TypeAndForceComplete<CreditWindow, std::true_type>,
         QtPrivate::TypeAndForceComplete<void, std::false_type>,
         QtPrivate::TypeAndForceComplete<void, std::false_type>,
         QtPrivate::TypeAndForceComplete<void, std::false_type>

         >,
     nullptr}};

const QMetaObject *CreditWindow::metaObject() const {
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject()
                                    : &staticMetaObject;
}

void *CreditWindow::qt_metacast(const char *_clname) {
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_CreditWindow.stringdata0))
    return static_cast<void *>(this);
  return QDialog::qt_metacast(_clname);
}

int CreditWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a) {
  _id = QDialog::qt_metacall(_c, _id, _a);
  if (_id < 0) return _id;
  if (_c == QMetaObject::InvokeMetaMethod) {
    if (_id < 3) qt_static_metacall(this, _c, _id, _a);
    _id -= 3;
  } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
    if (_id < 3) *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
    _id -= 3;
  }
  return _id;
}

// SIGNAL 0
void CreditWindow::secondWindow() {
  QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
