#include "defaultcalcwindow.h"

#include "ui_defaultcalcwindow.h"

extern "C" {
#include "../backend/main.c"
#include "../backend/stack.c"
}

DefaultCalcWindow::DefaultCalcWindow(QWidget *parent)
    : QDialog(parent), ui(new Ui::DefaultCalcWindow) {
  ui->setupUi(this);
  QLocale locale(QLocale::English);
  ui->lineEdit_2->setEnabled(false);
  ui->pushButton_X_edit->setEnabled(false);

  connect(ui->pushButton_X_edit, &QPushButton::clicked, this,
          &DefaultCalcWindow::on_pushButton_X_edit_clicked);

  ui->Graf->xAxis->setLabel("x");
  ui->Graf->yAxis->setLabel("y");
}

DefaultCalcWindow::~DefaultCalcWindow() { delete ui; }

void DefaultCalcWindow::on_pushButton_back_clicked() {
  this->close();
  emit firstWindow();
}

// Функция для работы с кнопками и вводом
void DefaultCalcWindow::appendToInputField(const QString &text) {
  if (ui->lineEdit_2->isEnabled()) {
    QString currentText = ui->lineEdit_2->text();
    currentText += text;
    ui->lineEdit_2->setText(currentText);
  } else if (ui->lineEdit->isEnabled()) {
    QString currentText = ui->lineEdit->text();
    currentText += text;
    ui->lineEdit->setText(currentText);
  }
}

void DefaultCalcWindow::on_pushButton_1_clicked() { appendToInputField("1"); }

void DefaultCalcWindow::on_pushButton_2_clicked() { appendToInputField("2"); }

void DefaultCalcWindow::on_pushButton_3_clicked() { appendToInputField("3"); }

void DefaultCalcWindow::on_pushButton_4_clicked() { appendToInputField("4"); }

void DefaultCalcWindow::on_pushButton_5_clicked() { appendToInputField("5"); }

void DefaultCalcWindow::on_pushButton_6_clicked() { appendToInputField("6"); }

void DefaultCalcWindow::on_pushButton_7_clicked() { appendToInputField("7"); }

void DefaultCalcWindow::on_pushButton_8_clicked() { appendToInputField("8"); }

void DefaultCalcWindow::on_pushButton_9_clicked() { appendToInputField("9"); }

void DefaultCalcWindow::on_pushButton_0_clicked() { appendToInputField("0"); }

void DefaultCalcWindow::on_pushButton_dot_clicked() { appendToInputField("."); }

void DefaultCalcWindow::on_pushButton_power_clicked() {
  appendToInputField("^");
}

void DefaultCalcWindow::on_pushButton_divide_clicked() {
  appendToInputField("/");
}

void DefaultCalcWindow::on_pushButton_plus_clicked() {
  appendToInputField("+");
}

void DefaultCalcWindow::on_pushButton_multiply_clicked() {
  appendToInputField("*");
}

void DefaultCalcWindow::on_pushButton_minus_clicked() {
  appendToInputField("-");
}

void DefaultCalcWindow::on_pushButton_leftBracket_clicked() {
  appendToInputField("(");
}

void DefaultCalcWindow::on_pushButton_rightBracket_clicked() {
  appendToInputField(")");
}

void DefaultCalcWindow::on_pushButton_X_clicked() {
  appendToInputField("X");
  if (ui->lineEdit->isEnabled()) {
    ui->pushButton_X->setEnabled(false);
    ui->pushButton_X_edit->setEnabled(true);
    ui->lineEdit->setEnabled(false);
    ui->lineEdit_2->setEnabled(true);
    ui->lineEdit_2->setFocus();
  }
}

void DefaultCalcWindow::on_pushButton_cos_clicked() {
  appendToInputField("cos(");
}

void DefaultCalcWindow::on_pushButton_acos_clicked() {
  appendToInputField("acos(");
}

void DefaultCalcWindow::on_pushButton_sin_clicked() {
  appendToInputField("sin(");
}

void DefaultCalcWindow::on_pushButton_asin_clicked() {
  appendToInputField("asin(");
}

void DefaultCalcWindow::on_pushButton_tan_clicked() {
  appendToInputField("tan(");
}

void DefaultCalcWindow::on_pushButton_atan_clicked() {
  appendToInputField("atan(");
}

void DefaultCalcWindow::on_pushButton_log_clicked() {
  appendToInputField("log(");
}

void DefaultCalcWindow::on_pushButton_ln_clicked() {
  appendToInputField("ln(");
}

void DefaultCalcWindow::on_pushButton_mod_clicked() {
  appendToInputField("mod(");
}

void DefaultCalcWindow::on_pushButton_sqrt_clicked() {
  appendToInputField("sqrt(");
}

void DefaultCalcWindow::on_pushButton_AC_clicked() {
  ui->lineEdit_2->clear();
  ui->lineEdit->clear();
  ui->Graf->replot();
  x.clear();
  y.clear();
}

void DefaultCalcWindow::on_pushButton_del_clicked() {
  if (ui->lineEdit->isEnabled()) {
    QString currentText = ui->lineEdit->text();
    if (!currentText.isEmpty()) {
      currentText.chop(1);
      ui->lineEdit->setText(currentText);
    }
  } else if (ui->lineEdit_2->isEnabled()) {
    QString currentText = ui->lineEdit_2->text();
    if (!currentText.isEmpty()) {
      currentText.chop(1);
      ui->lineEdit_2->setText(currentText);
    }
  }
}

void DefaultCalcWindow::on_pushButton_res_clicked() {
  QString inputText = ui->lineEdit->text();

  QString valueOfX = ui->lineEdit_2->text();

  inputText.replace("X", valueOfX);

  const char *inputCStr = inputText.toUtf8().constData();

  char *prefixString = TranslateOnPostfixNotation(inputCStr);

  QString resultText = QString::fromUtf8(prefixString);

  ui->lineEdit->setText(resultText);

  if (ui->lineEdit_2->isEnabled()) {
    ui->pushButton_X_edit->setEnabled(false);
    ui->pushButton_X->setEnabled(true);
    ui->lineEdit_2->setEnabled(false);
    ui->lineEdit->setEnabled(true);
    ui->lineEdit->setFocus();
  }
}

void DefaultCalcWindow::on_pushButton_X_edit_clicked() {
  if (ui->lineEdit_2->isEnabled()) {
    ui->pushButton_X_edit->setEnabled(false);
    ui->pushButton_X->setEnabled(true);
    ui->lineEdit_2->setEnabled(false);
    ui->lineEdit->setEnabled(true);
    ui->lineEdit->setFocus();
  }
}

void DefaultCalcWindow::on_pushButton_back_2_clicked() {
  QString str = ui->lineEdit->text();
  if (str.contains("X") == false) {
    ui->lineEdit->setText("Add x to expression");
  } else {
    double x_min_num = -5;
    double x_max_num = 5;
    double y_min_num = -5;
    double y_max_num = 5;
    double step = 0.001 * (qFabs(x_min_num) + qFabs(x_max_num));
    double Y = 0;
    double X = x_min_num;
    while (X < x_max_num) {
      QString str_1 = str;
      x.push_back(X);

      QString valueOfX = QString::number(X);

      str_1.replace("X", valueOfX);

      const char *inputCStr = str_1.toUtf8().constData();

      char *prefixString = TranslateOnPostfixNotation(inputCStr);

      Y = strtold(prefixString, nullptr);

      y.push_back(Y);
      X = X + step;
      if (qFabs(X) < 1e-10) {
        X = 0;
      }
    }
    ui->Graf->addGraph();
    ui->Graf->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->Graf->graph(0)->addData(x, y);
    ui->Graf->xAxis->setRange(x_min_num, x_max_num);
    ui->Graf->yAxis->setRange(y_min_num, y_max_num);
    ui->Graf->replot();
    x.clear();
    y.clear();
    ui->Graf->graph(0)->data()->clear();
  }
}
