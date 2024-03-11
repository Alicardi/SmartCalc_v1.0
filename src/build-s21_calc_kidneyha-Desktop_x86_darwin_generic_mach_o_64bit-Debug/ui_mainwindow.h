/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
 public:
  QWidget *centralwidget;
  QPushButton *pushButton_1;
  QPushButton *pushButton_2;
  QPushButton *pushButton_3;
  QMenuBar *menubar;
  QStatusBar *statusbar;

  void setupUi(QMainWindow *MainWindow) {
    if (MainWindow->objectName().isEmpty())
      MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(341, 313);
    MainWindow->setStyleSheet(QString::fromUtf8(""));
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    pushButton_1 = new QPushButton(centralwidget);
    pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
    pushButton_1->setGeometry(QRect(40, 30, 261, 51));
    pushButton_2 = new QPushButton(centralwidget);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    pushButton_2->setGeometry(QRect(40, 100, 261, 51));
    pushButton_3 = new QPushButton(centralwidget);
    pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
    pushButton_3->setGeometry(QRect(40, 170, 261, 51));
    MainWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 341, 24));
    MainWindow->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    MainWindow->setStatusBar(statusbar);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
  }  // setupUi

  void retranslateUi(QMainWindow *MainWindow) {
    MainWindow->setWindowTitle(
        QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    pushButton_1->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\236\320\261\321\213\321\207\320\275\321\213\320\271 "
        "\320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321"
        "\202\320\276\321\200",
        nullptr));
    pushButton_2->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320"
        "\271 "
        "\320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321"
        "\202\320\276\321\200",
        nullptr));
    pushButton_3->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\224\320\265\320\277\320\276\320\267\320\270\321\202\320\275\321"
        "\213\320\271 "
        "\320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321"
        "\202\320\276\321\200",
        nullptr));
  }  // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_MAINWINDOW_H
