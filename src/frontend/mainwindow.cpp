#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  firstWindow = new DefaultCalcWindow();
  connect(firstWindow, &DefaultCalcWindow::firstWindow, this,
          &MainWindow::show);

  secondWindow = new CreditWindow();
  connect(secondWindow, &CreditWindow::secondWindow, this, &MainWindow::show);

  thirdWindow = new DepositWindow();
  connect(thirdWindow, &DepositWindow::thirdWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_pushButton_1_clicked() {
  firstWindow->show();
  this->close();
}

void MainWindow::on_pushButton_2_clicked() {
  secondWindow->show();
  this->close();
}

void MainWindow::on_pushButton_3_clicked() {
  thirdWindow->show();
  this->close();
}
