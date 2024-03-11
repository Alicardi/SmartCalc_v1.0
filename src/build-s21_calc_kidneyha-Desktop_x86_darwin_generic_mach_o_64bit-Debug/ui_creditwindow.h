/********************************************************************************
** Form generated from reading UI file 'creditwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITWINDOW_H
#define UI_CREDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_CreditWindow {
 public:
  QPushButton *pushButton_menu;
  QLabel *label_sum;
  QLabel *label_date;
  QLabel *label_percent;
  QComboBox *comboBox;
  QLineEdit *lineEdit_sum;
  QLineEdit *lineEdit_percent;
  QLineEdit *lineEdit_date;
  QFrame *frame;
  QLabel *label_type_payment;
  QRadioButton *radioButton_1;
  QRadioButton *radioButton_2;
  QPushButton *pushButton_result;

  void setupUi(QDialog *CreditWindow) {
    if (CreditWindow->objectName().isEmpty())
      CreditWindow->setObjectName(QString::fromUtf8("CreditWindow"));
    CreditWindow->resize(535, 226);
    CreditWindow->setStyleSheet(
        QString::fromUtf8("QMainWindow {\n"
                          "           background-color: rgb(37, 20, 31);\n"
                          "           border: 2px solid darkgray;\n"
                          "           titlebar-background-color: lightblue;\n"
                          "           titlebar-border: 1px solid darkblue;\n"
                          "           titlebar-text-color: white;   \n"
                          "        }"));
    pushButton_menu = new QPushButton(CreditWindow);
    pushButton_menu->setObjectName(QString::fromUtf8("pushButton_menu"));
    pushButton_menu->setGeometry(QRect(410, 180, 100, 32));
    label_sum = new QLabel(CreditWindow);
    label_sum->setObjectName(QString::fromUtf8("label_sum"));
    label_sum->setGeometry(QRect(10, 30, 111, 31));
    QFont font;
    font.setPointSize(14);
    label_sum->setFont(font);
    label_date = new QLabel(CreditWindow);
    label_date->setObjectName(QString::fromUtf8("label_date"));
    label_date->setGeometry(QRect(10, 130, 111, 31));
    label_date->setFont(font);
    label_percent = new QLabel(CreditWindow);
    label_percent->setObjectName(QString::fromUtf8("label_percent"));
    label_percent->setGeometry(QRect(10, 80, 131, 31));
    label_percent->setFont(font);
    comboBox = new QComboBox(CreditWindow);
    comboBox->addItem(QString());
    comboBox->addItem(QString());
    comboBox->setObjectName(QString::fromUtf8("comboBox"));
    comboBox->setGeometry(QRect(310, 130, 110, 32));
    lineEdit_sum = new QLineEdit(CreditWindow);
    lineEdit_sum->setObjectName(QString::fromUtf8("lineEdit_sum"));
    lineEdit_sum->setGeometry(QRect(130, 30, 171, 31));
    lineEdit_sum->setInputMethodHints(Qt::ImhDigitsOnly);
    lineEdit_percent = new QLineEdit(CreditWindow);
    lineEdit_percent->setObjectName(QString::fromUtf8("lineEdit_percent"));
    lineEdit_percent->setGeometry(QRect(160, 80, 141, 31));
    lineEdit_percent->setInputMethodHints(Qt::ImhDigitsOnly);
    lineEdit_date = new QLineEdit(CreditWindow);
    lineEdit_date->setObjectName(QString::fromUtf8("lineEdit_date"));
    lineEdit_date->setGeometry(QRect(130, 130, 171, 31));
    lineEdit_date->setInputMethodHints(Qt::ImhNone);
    frame = new QFrame(CreditWindow);
    frame->setObjectName(QString::fromUtf8("frame"));
    frame->setGeometry(QRect(310, 20, 211, 101));
    frame->setFrameShape(QFrame::StyledPanel);
    frame->setFrameShadow(QFrame::Raised);
    label_type_payment = new QLabel(frame);
    label_type_payment->setObjectName(QString::fromUtf8("label_type_payment"));
    label_type_payment->setGeometry(QRect(10, 10, 191, 16));
    label_type_payment->setFont(font);
    radioButton_1 = new QRadioButton(frame);
    radioButton_1->setObjectName(QString::fromUtf8("radioButton_1"));
    radioButton_1->setGeometry(QRect(10, 40, 131, 20));
    radioButton_2 = new QRadioButton(frame);
    radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
    radioButton_2->setGeometry(QRect(10, 70, 181, 20));
    pushButton_result = new QPushButton(CreditWindow);
    pushButton_result->setObjectName(QString::fromUtf8("pushButton_result"));
    pushButton_result->setGeometry(QRect(130, 180, 161, 32));

    retranslateUi(CreditWindow);

    QMetaObject::connectSlotsByName(CreditWindow);
  }  // setupUi

  void retranslateUi(QDialog *CreditWindow) {
    CreditWindow->setWindowTitle(
        QCoreApplication::translate("CreditWindow", "Dialog", nullptr));
    pushButton_menu->setText(QCoreApplication::translate(
        "CreditWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    label_sum->setText(QCoreApplication::translate(
        "CreditWindow",
        "\320\241\321\203\320\274\320\274\320\260 "
        "\320\272\321\200\320\265\320\264\320\270\321\202\320\260",
        nullptr));
    label_date->setText(QCoreApplication::translate(
        "CreditWindow",
        "\320\241\321\200\320\276\320\272 "
        "\320\272\321\200\320\265\320\264\320\270\321\202\320\260",
        nullptr));
    label_percent->setText(QCoreApplication::translate(
        "CreditWindow",
        "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320"
        "\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260",
        nullptr));
    comboBox->setItemText(
        0, QCoreApplication::translate("CreditWindow",
                                       "\320\273\320\265\321\202", nullptr));
    comboBox->setItemText(
        1, QCoreApplication::translate(
               "CreditWindow",
               "\320\274\320\265\321\201\321\217\321\206\320\265\320\262",
               nullptr));

    label_type_payment->setText(QCoreApplication::translate(
        "CreditWindow",
        "\320\242\320\270\320\277 "
        "\320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320"
        "\275\321\213\321\205 "
        "\320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271",
        nullptr));
    radioButton_1->setText(QCoreApplication::translate(
        "CreditWindow",
        "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320"
        "\275\321\213\320\265",
        nullptr));
    radioButton_2->setText(QCoreApplication::translate(
        "CreditWindow",
        "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321"
        "\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213"
        "\320\265",
        nullptr));
    pushButton_result->setText(
        QCoreApplication::translate("CreditWindow",
                                    "\320\240\320\260\321\201\321\201\321\207"
                                    "\320\270\321\202\320\260\321\202\321\214",
                                    nullptr));
  }  // retranslateUi
};

namespace Ui {
class CreditWindow : public Ui_CreditWindow {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_CREDITWINDOW_H
