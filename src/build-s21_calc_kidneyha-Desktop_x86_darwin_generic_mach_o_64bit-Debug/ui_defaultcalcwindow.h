/********************************************************************************
** Form generated from reading UI file 'defaultcalcwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFAULTCALCWINDOW_H
#define UI_DEFAULTCALCWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_DefaultCalcWindow {
 public:
  QLineEdit *lineEdit;
  QPushButton *pushButton_1;
  QPushButton *pushButton_back;
  QPushButton *pushButton_2;
  QPushButton *pushButton_3;
  QPushButton *pushButton_4;
  QPushButton *pushButton_5;
  QPushButton *pushButton_6;
  QPushButton *pushButton_7;
  QPushButton *pushButton_8;
  QPushButton *pushButton_9;
  QPushButton *pushButton_AC;
  QPushButton *pushButton_del;
  QPushButton *pushButton_0;
  QPushButton *pushButton_dot;
  QPushButton *pushButton_leftBracket;
  QPushButton *pushButton_rightBracket;
  QPushButton *pushButton_res;
  QPushButton *pushButton_minus;
  QPushButton *pushButton_plus;
  QPushButton *pushButton_divide;
  QPushButton *pushButton_multiply;
  QPushButton *pushButton_cos;
  QPushButton *pushButton_acos;
  QPushButton *pushButton_sin;
  QPushButton *pushButton_asin;
  QPushButton *pushButton_tan;
  QPushButton *pushButton_atan;
  QPushButton *pushButton_log;
  QPushButton *pushButton_ln;
  QPushButton *pushButton_mod;
  QPushButton *pushButton_sqrt;
  QPushButton *pushButton_power;
  QLineEdit *lineEdit_2;
  QPushButton *pushButton_X;
  QLabel *label;
  QPushButton *pushButton_X_edit;
  QCustomPlot *Graf;
  QPushButton *pushButton_back_2;

  void setupUi(QDialog *DefaultCalcWindow) {
    if (DefaultCalcWindow->objectName().isEmpty())
      DefaultCalcWindow->setObjectName(QString::fromUtf8("DefaultCalcWindow"));
    DefaultCalcWindow->resize(761, 300);
    lineEdit = new QLineEdit(DefaultCalcWindow);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setGeometry(QRect(10, 10, 191, 31));
    pushButton_1 = new QPushButton(DefaultCalcWindow);
    pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
    pushButton_1->setGeometry(QRect(10, 90, 31, 41));
    pushButton_back = new QPushButton(DefaultCalcWindow);
    pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
    pushButton_back->setGeometry(QRect(650, 260, 100, 32));
    pushButton_2 = new QPushButton(DefaultCalcWindow);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    pushButton_2->setGeometry(QRect(50, 90, 31, 41));
    pushButton_3 = new QPushButton(DefaultCalcWindow);
    pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
    pushButton_3->setGeometry(QRect(90, 90, 31, 41));
    pushButton_4 = new QPushButton(DefaultCalcWindow);
    pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
    pushButton_4->setGeometry(QRect(10, 130, 31, 41));
    pushButton_5 = new QPushButton(DefaultCalcWindow);
    pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
    pushButton_5->setGeometry(QRect(50, 130, 31, 41));
    pushButton_6 = new QPushButton(DefaultCalcWindow);
    pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
    pushButton_6->setGeometry(QRect(90, 130, 31, 41));
    pushButton_7 = new QPushButton(DefaultCalcWindow);
    pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
    pushButton_7->setGeometry(QRect(10, 170, 31, 41));
    pushButton_8 = new QPushButton(DefaultCalcWindow);
    pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
    pushButton_8->setGeometry(QRect(50, 170, 31, 41));
    pushButton_9 = new QPushButton(DefaultCalcWindow);
    pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
    pushButton_9->setGeometry(QRect(90, 170, 31, 41));
    pushButton_AC = new QPushButton(DefaultCalcWindow);
    pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
    pushButton_AC->setGeometry(QRect(10, 50, 91, 41));
    pushButton_del = new QPushButton(DefaultCalcWindow);
    pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
    pushButton_del->setGeometry(QRect(110, 50, 91, 41));
    pushButton_0 = new QPushButton(DefaultCalcWindow);
    pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
    pushButton_0->setGeometry(QRect(50, 210, 31, 41));
    pushButton_dot = new QPushButton(DefaultCalcWindow);
    pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
    pushButton_dot->setGeometry(QRect(10, 210, 31, 41));
    pushButton_leftBracket = new QPushButton(DefaultCalcWindow);
    pushButton_leftBracket->setObjectName(
        QString::fromUtf8("pushButton_leftBracket"));
    pushButton_leftBracket->setGeometry(QRect(130, 170, 31, 41));
    pushButton_rightBracket = new QPushButton(DefaultCalcWindow);
    pushButton_rightBracket->setObjectName(
        QString::fromUtf8("pushButton_rightBracket"));
    pushButton_rightBracket->setGeometry(QRect(170, 170, 31, 41));
    pushButton_res = new QPushButton(DefaultCalcWindow);
    pushButton_res->setObjectName(QString::fromUtf8("pushButton_res"));
    pushButton_res->setGeometry(QRect(10, 250, 191, 41));
    pushButton_minus = new QPushButton(DefaultCalcWindow);
    pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
    pushButton_minus->setGeometry(QRect(170, 130, 31, 41));
    pushButton_plus = new QPushButton(DefaultCalcWindow);
    pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
    pushButton_plus->setGeometry(QRect(130, 130, 31, 41));
    pushButton_divide = new QPushButton(DefaultCalcWindow);
    pushButton_divide->setObjectName(QString::fromUtf8("pushButton_divide"));
    pushButton_divide->setGeometry(QRect(130, 90, 31, 41));
    pushButton_multiply = new QPushButton(DefaultCalcWindow);
    pushButton_multiply->setObjectName(
        QString::fromUtf8("pushButton_multiply"));
    pushButton_multiply->setGeometry(QRect(170, 90, 31, 41));
    pushButton_cos = new QPushButton(DefaultCalcWindow);
    pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
    pushButton_cos->setGeometry(QRect(250, 50, 51, 41));
    pushButton_acos = new QPushButton(DefaultCalcWindow);
    pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
    pushButton_acos->setGeometry(QRect(310, 50, 51, 41));
    pushButton_sin = new QPushButton(DefaultCalcWindow);
    pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
    pushButton_sin->setGeometry(QRect(250, 90, 51, 41));
    pushButton_asin = new QPushButton(DefaultCalcWindow);
    pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
    pushButton_asin->setGeometry(QRect(310, 90, 51, 41));
    pushButton_tan = new QPushButton(DefaultCalcWindow);
    pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
    pushButton_tan->setGeometry(QRect(250, 130, 51, 41));
    pushButton_atan = new QPushButton(DefaultCalcWindow);
    pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
    pushButton_atan->setGeometry(QRect(310, 130, 51, 41));
    pushButton_log = new QPushButton(DefaultCalcWindow);
    pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
    pushButton_log->setGeometry(QRect(250, 170, 51, 41));
    pushButton_ln = new QPushButton(DefaultCalcWindow);
    pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
    pushButton_ln->setGeometry(QRect(310, 170, 51, 41));
    pushButton_mod = new QPushButton(DefaultCalcWindow);
    pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
    pushButton_mod->setGeometry(QRect(250, 210, 51, 41));
    pushButton_sqrt = new QPushButton(DefaultCalcWindow);
    pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
    pushButton_sqrt->setGeometry(QRect(310, 210, 51, 41));
    pushButton_power = new QPushButton(DefaultCalcWindow);
    pushButton_power->setObjectName(QString::fromUtf8("pushButton_power"));
    pushButton_power->setGeometry(QRect(90, 210, 31, 41));
    lineEdit_2 = new QLineEdit(DefaultCalcWindow);
    lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
    lineEdit_2->setGeometry(QRect(250, 10, 111, 31));
    pushButton_X = new QPushButton(DefaultCalcWindow);
    pushButton_X->setObjectName(QString::fromUtf8("pushButton_X"));
    pushButton_X->setGeometry(QRect(130, 210, 31, 41));
    label = new QLabel(DefaultCalcWindow);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(280, 0, 61, 16));
    QFont font;
    font.setPointSize(9);
    label->setFont(font);
    pushButton_X_edit = new QPushButton(DefaultCalcWindow);
    pushButton_X_edit->setObjectName(QString::fromUtf8("pushButton_X_edit"));
    pushButton_X_edit->setGeometry(QRect(170, 210, 31, 41));
    Graf = new QCustomPlot(DefaultCalcWindow);
    Graf->setObjectName(QString::fromUtf8("Graf"));
    Graf->setGeometry(QRect(380, 20, 351, 231));
    Graf->setStyleSheet(QString::fromUtf8(""));
    pushButton_back_2 = new QPushButton(DefaultCalcWindow);
    pushButton_back_2->setObjectName(QString::fromUtf8("pushButton_back_2"));
    pushButton_back_2->setGeometry(QRect(470, 260, 171, 32));

    retranslateUi(DefaultCalcWindow);

    QMetaObject::connectSlotsByName(DefaultCalcWindow);
  }  // setupUi

  void retranslateUi(QDialog *DefaultCalcWindow) {
    DefaultCalcWindow->setWindowTitle(
        QCoreApplication::translate("DefaultCalcWindow", "Dialog", nullptr));
    pushButton_1->setText(
        QCoreApplication::translate("DefaultCalcWindow", "1", nullptr));
    pushButton_back->setText(QCoreApplication::translate(
        "DefaultCalcWindow", "\320\235\320\260\320\267\320\260\320\264",
        nullptr));
    pushButton_2->setText(
        QCoreApplication::translate("DefaultCalcWindow", "2", nullptr));
    pushButton_3->setText(
        QCoreApplication::translate("DefaultCalcWindow", "3", nullptr));
    pushButton_4->setText(
        QCoreApplication::translate("DefaultCalcWindow", "4", nullptr));
    pushButton_5->setText(
        QCoreApplication::translate("DefaultCalcWindow", "5", nullptr));
    pushButton_6->setText(
        QCoreApplication::translate("DefaultCalcWindow", "6", nullptr));
    pushButton_7->setText(
        QCoreApplication::translate("DefaultCalcWindow", "7", nullptr));
    pushButton_8->setText(
        QCoreApplication::translate("DefaultCalcWindow", "8", nullptr));
    pushButton_9->setText(
        QCoreApplication::translate("DefaultCalcWindow", "9", nullptr));
    pushButton_AC->setText(
        QCoreApplication::translate("DefaultCalcWindow", "AC", nullptr));
    pushButton_del->setText(QCoreApplication::translate(
        "DefaultCalcWindow", "\342\214\253", nullptr));
    pushButton_0->setText(
        QCoreApplication::translate("DefaultCalcWindow", "0", nullptr));
    pushButton_dot->setText(
        QCoreApplication::translate("DefaultCalcWindow", ".", nullptr));
    pushButton_leftBracket->setText(
        QCoreApplication::translate("DefaultCalcWindow", "(", nullptr));
    pushButton_rightBracket->setText(
        QCoreApplication::translate("DefaultCalcWindow", ")", nullptr));
    pushButton_res->setText(
        QCoreApplication::translate("DefaultCalcWindow", "=", nullptr));
    pushButton_minus->setText(
        QCoreApplication::translate("DefaultCalcWindow", "-", nullptr));
    pushButton_plus->setText(
        QCoreApplication::translate("DefaultCalcWindow", "+", nullptr));
    pushButton_divide->setText(
        QCoreApplication::translate("DefaultCalcWindow", "\303\267", nullptr));
    pushButton_multiply->setText(
        QCoreApplication::translate("DefaultCalcWindow", "\303\227", nullptr));
    pushButton_cos->setText(
        QCoreApplication::translate("DefaultCalcWindow", "cos", nullptr));
    pushButton_acos->setText(
        QCoreApplication::translate("DefaultCalcWindow", "acos", nullptr));
    pushButton_sin->setText(
        QCoreApplication::translate("DefaultCalcWindow", "sin", nullptr));
    pushButton_asin->setText(
        QCoreApplication::translate("DefaultCalcWindow", "asin", nullptr));
    pushButton_tan->setText(
        QCoreApplication::translate("DefaultCalcWindow", "tan", nullptr));
    pushButton_atan->setText(
        QCoreApplication::translate("DefaultCalcWindow", "atan", nullptr));
    pushButton_log->setText(
        QCoreApplication::translate("DefaultCalcWindow", "log", nullptr));
    pushButton_ln->setText(
        QCoreApplication::translate("DefaultCalcWindow", "ln", nullptr));
    pushButton_mod->setText(
        QCoreApplication::translate("DefaultCalcWindow", "mod", nullptr));
    pushButton_sqrt->setText(
        QCoreApplication::translate("DefaultCalcWindow", "sqrt", nullptr));
    pushButton_power->setText(
        QCoreApplication::translate("DefaultCalcWindow", "^", nullptr));
    pushButton_X->setText(
        QCoreApplication::translate("DefaultCalcWindow", "X", nullptr));
    label->setText(QCoreApplication::translate(
        "DefaultCalcWindow",
        "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 X",
        nullptr));
    pushButton_X_edit->setText(QCoreApplication::translate(
        "DefaultCalcWindow", "\342\234\216X", nullptr));
    pushButton_back_2->setText(QCoreApplication::translate(
        "DefaultCalcWindow",
        "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320"
        "\275\320\270\320\265 "
        "\320\263\321\200\320\260\321\204\320\270\320\272\320\260",
        nullptr));
  }  // retranslateUi
};

namespace Ui {
class DefaultCalcWindow : public Ui_DefaultCalcWindow {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_DEFAULTCALCWINDOW_H
