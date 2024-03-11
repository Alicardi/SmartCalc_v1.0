#include "creditwindow.h"

#include "ui_creditwindow.h"

extern "C" {
#include "../backend/credit.c"
}

CreditWindow::CreditWindow(QWidget *parent)
    : QDialog(parent), ui(new Ui::CreditWindow) {
  ui->setupUi(this);
}

CreditWindow::~CreditWindow() { delete ui; }

void CreditWindow::on_pushButton_menu_clicked() {
  this->close();
  emit secondWindow();
}

void CreditWindow::on_pushButton_result_clicked() {
  long double sum = ui->lineEdit_sum->text().toDouble();
  long double percent = ui->lineEdit_percent->text().toDouble();
  int date = ui->lineEdit_date->text().toInt();

  QString durationUnit = ui->comboBox->currentText();

  if (durationUnit == "Месяцы") {
    // Ничего не меняем, потому что date уже в месяцах
  } else if (durationUnit == "Годы") {
    // Преобразуем годы в месяцы
    date *= 12;
  }

  // Проверяем, какой radioButton выбран
  if (ui->radioButton_1->isChecked()) {
    // Выполняем аннуитетный расчет
    char *result = CalculateAnnuityCredit(sum, percent, date);
    processCreditResult(result);
  } else if (ui->radioButton_2->isChecked()) {
    // Выполняем дифференцированный расчет
    char *result = CalculateDifferentiatedCredit(sum, percent, date);
    processCreditResult(result);
  } else {
    // Обработка случая, если ни один из radioButton не выбран
    QMessageBox::warning(
        this, "Внимание",
        "Выберите тип кредита (аннуитетный или дифференцированный).");
  }
}

void CreditWindow::processCreditResult(char *result) {
  if (result != nullptr) {
    // Преобразуем результат обратно в QString
    QString resultText = QString::fromUtf8(result);

    // Устанавливаем результат в QMessageBox
    QMessageBox::information(this, "Результат", resultText);

    // Освобождаем память, выделенную для результата
    free(result);
  } else {
    // Обработка ошибки выделения памяти
    QMessageBox::critical(this, "Ошибка",
                          "Не удалось выделить память для результата.");
  }
}
