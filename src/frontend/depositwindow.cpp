#include "depositwindow.h"

#include "ui_depositwindow.h"

DepositWindow::DepositWindow(QWidget *parent)
    : QDialog(parent), ui(new Ui::DepositWindow) {
  ui->setupUi(this);
}

DepositWindow::~DepositWindow() { delete ui; }

void DepositWindow::on_pushButton_menu_clicked() {
  this->close();
  emit thirdWindow();
}
