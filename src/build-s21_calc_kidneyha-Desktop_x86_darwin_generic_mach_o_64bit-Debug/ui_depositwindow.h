/********************************************************************************
** Form generated from reading UI file 'depositwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITWINDOW_H
#define UI_DEPOSITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DepositWindow {
 public:
  QPushButton *pushButton_menu;
  QLabel *label_date;
  QPushButton *pushButton_result;
  QLineEdit *lineEdit_sum;
  QLabel *label_sum;
  QLabel *label_percent;
  QLineEdit *lineEdit_date_2;
  QLabel *label_date_2;
  QLabel *label_date_3;
  QComboBox *comboBox_2;
  QLabel *label_date_4;
  QLineEdit *lineEdit_date_3;
  QDateEdit *dateEdit;
  QLabel *label_percent_2;
  QLineEdit *lineEdit_date_4;
  QLabel *label_percent_3;
  QLineEdit *lineEdit_date_5;

  void setupUi(QDialog *DepositWindow) {
    if (DepositWindow->objectName().isEmpty())
      DepositWindow->setObjectName(QString::fromUtf8("DepositWindow"));
    DepositWindow->resize(470, 374);
    pushButton_menu = new QPushButton(DepositWindow);
    pushButton_menu->setObjectName(QString::fromUtf8("pushButton_menu"));
    pushButton_menu->setGeometry(QRect(360, 320, 100, 32));
    label_date = new QLabel(DepositWindow);
    label_date->setObjectName(QString::fromUtf8("label_date"));
    label_date->setGeometry(QRect(10, 120, 131, 31));
    QFont font;
    font.setPointSize(14);
    label_date->setFont(font);
    pushButton_result = new QPushButton(DepositWindow);
    pushButton_result->setObjectName(QString::fromUtf8("pushButton_result"));
    pushButton_result->setGeometry(QRect(160, 320, 161, 32));
    lineEdit_sum = new QLineEdit(DepositWindow);
    lineEdit_sum->setObjectName(QString::fromUtf8("lineEdit_sum"));
    lineEdit_sum->setGeometry(QRect(130, 20, 281, 31));
    lineEdit_sum->setInputMethodHints(Qt::ImhNone);
    label_sum = new QLabel(DepositWindow);
    label_sum->setObjectName(QString::fromUtf8("label_sum"));
    label_sum->setGeometry(QRect(10, 20, 111, 31));
    label_sum->setFont(font);
    label_percent = new QLabel(DepositWindow);
    label_percent->setObjectName(QString::fromUtf8("label_percent"));
    label_percent->setGeometry(QRect(10, 70, 131, 31));
    label_percent->setFont(font);
    lineEdit_date_2 = new QLineEdit(DepositWindow);
    lineEdit_date_2->setObjectName(QString::fromUtf8("lineEdit_date_2"));
    lineEdit_date_2->setGeometry(QRect(160, 170, 251, 31));
    label_date_2 = new QLabel(DepositWindow);
    label_date_2->setObjectName(QString::fromUtf8("label_date_2"));
    label_date_2->setGeometry(QRect(10, 170, 131, 31));
    label_date_2->setFont(font);
    label_date_3 = new QLabel(DepositWindow);
    label_date_3->setObjectName(QString::fromUtf8("label_date_3"));
    label_date_3->setGeometry(QRect(10, 220, 211, 31));
    label_date_3->setFont(font);
    comboBox_2 = new QComboBox(DepositWindow);
    comboBox_2->addItem(QString());
    comboBox_2->addItem(QString());
    comboBox_2->addItem(QString());
    comboBox_2->addItem(QString());
    comboBox_2->addItem(QString());
    comboBox_2->addItem(QString());
    comboBox_2->addItem(QString());
    comboBox_2->addItem(QString());
    comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
    comboBox_2->setGeometry(QRect(240, 220, 171, 32));
    label_date_4 = new QLabel(DepositWindow);
    label_date_4->setObjectName(QString::fromUtf8("label_date_4"));
    label_date_4->setGeometry(QRect(10, 270, 171, 31));
    label_date_4->setFont(font);
    lineEdit_date_3 = new QLineEdit(DepositWindow);
    lineEdit_date_3->setObjectName(QString::fromUtf8("lineEdit_date_3"));
    lineEdit_date_3->setGeometry(QRect(170, 270, 241, 31));
    dateEdit = new QDateEdit(DepositWindow);
    dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
    dateEdit->setGeometry(QRect(160, 70, 110, 31));
    label_percent_2 = new QLabel(DepositWindow);
    label_percent_2->setObjectName(QString::fromUtf8("label_percent_2"));
    label_percent_2->setGeometry(QRect(280, 70, 51, 31));
    label_percent_2->setFont(font);
    lineEdit_date_4 = new QLineEdit(DepositWindow);
    lineEdit_date_4->setObjectName(QString::fromUtf8("lineEdit_date_4"));
    lineEdit_date_4->setGeometry(QRect(330, 70, 81, 31));
    label_percent_3 = new QLabel(DepositWindow);
    label_percent_3->setObjectName(QString::fromUtf8("label_percent_3"));
    label_percent_3->setGeometry(QRect(420, 70, 51, 31));
    label_percent_3->setFont(font);
    lineEdit_date_5 = new QLineEdit(DepositWindow);
    lineEdit_date_5->setObjectName(QString::fromUtf8("lineEdit_date_5"));
    lineEdit_date_5->setGeometry(QRect(160, 120, 251, 31));

    retranslateUi(DepositWindow);

    QMetaObject::connectSlotsByName(DepositWindow);
  }  // setupUi

  void retranslateUi(QDialog *DepositWindow) {
    DepositWindow->setWindowTitle(
        QCoreApplication::translate("DepositWindow", "Dialog", nullptr));
    pushButton_menu->setText(QCoreApplication::translate(
        "DepositWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    label_date->setText(QCoreApplication::translate(
        "DepositWindow",
        "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320"
        "\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260",
        nullptr));
    pushButton_result->setText(
        QCoreApplication::translate("DepositWindow",
                                    "\320\240\320\260\321\201\321\201\321\207"
                                    "\320\270\321\202\320\260\321\202\321\214",
                                    nullptr));
    lineEdit_sum->setInputMask(QString());
    label_sum->setText(QCoreApplication::translate(
        "DepositWindow",
        "\320\241\321\203\320\274\320\274\320\260 "
        "\320\262\320\272\320\273\320\260\320\264\320\260",
        nullptr));
    label_percent->setText(QCoreApplication::translate(
        "DepositWindow",
        "\320\241\321\200\320\276\320\272 "
        "\321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320"
        "\270\321\217 c",
        nullptr));
    lineEdit_date_2->setText(QString());
    label_date_2->setText(QCoreApplication::translate(
        "DepositWindow",
        "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321"
        "\217 \321\201\321\202\320\260\320\262\320\272\320\260",
        nullptr));
    label_date_3->setText(QCoreApplication::translate(
        "DepositWindow",
        "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320"
        "\275\320\276\321\201\321\202\321\214 "
        "\320\272\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320"
        "\267\320\260\321\206\320\270\320\270",
        nullptr));
    comboBox_2->setItemText(
        0, QCoreApplication::translate("DepositWindow",
                                       "\320\265\320\266\320\265\320\264\320"
                                       "\275\320\265\320\262\320\275\320\276",
                                       nullptr));
    comboBox_2->setItemText(1,
                            QCoreApplication::translate(
                                "DepositWindow",
                                "\320\265\320\266\320\265\320\275\320\265\320"
                                "\264\320\265\320\273\321\214\320\275\320\276",
                                nullptr));
    comboBox_2->setItemText(2, QCoreApplication::translate(
                                   "DepositWindow",
                                   "\321\200\320\260\320\267 \320\262 "
                                   "\320\274\320\265\321\201\321\217\321\206",
                                   nullptr));
    comboBox_2->setItemText(
        3, QCoreApplication::translate(
               "DepositWindow",
               "\321\200\320\260\320\267 \320\262 2 "
               "\320\274\320\265\321\201\321\217\321\206\320\260",
               nullptr));
    comboBox_2->setItemText(
        4, QCoreApplication::translate(
               "DepositWindow",
               "\321\200\320\260\320\267 \320\262 "
               "\320\272\320\262\320\260\321\200\321\202\320\260\320\273",
               nullptr));
    comboBox_2->setItemText(
        5, QCoreApplication::translate(
               "DepositWindow",
               "\321\200\320\260\320\267 \320\262 4 "
               "\320\274\320\265\321\201\321\217\321\206\320\260",
               nullptr));
    comboBox_2->setItemText(
        6, QCoreApplication::translate(
               "DepositWindow",
               "\321\200\320\260\320\267 \320\262 "
               "\320\277\320\276\320\273\320\263\320\276\320\264\320\260",
               nullptr));
    comboBox_2->setItemText(
        7, QCoreApplication::translate(
               "DepositWindow",
               "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264",
               nullptr));

    label_date_4->setText(QCoreApplication::translate(
        "DepositWindow",
        "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320"
        "\275\320\276\321\201\321\202\321\214 "
        "\320\262\321\213\320\277\320\273\320\260\321\202",
        nullptr));
    lineEdit_date_3->setText(QString());
    label_percent_2->setText(QCoreApplication::translate(
        "DepositWindow", "\320\275\320\260 | \320\264\320\276", nullptr));
    lineEdit_date_4->setText(QString());
    label_percent_3->setText(QCoreApplication::translate(
        "DepositWindow", "\320\264\320\275\320\265\320\271", nullptr));
    lineEdit_date_5->setText(QString());
  }  // retranslateUi
};

namespace Ui {
class DepositWindow : public Ui_DepositWindow {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_DEPOSITWINDOW_H
