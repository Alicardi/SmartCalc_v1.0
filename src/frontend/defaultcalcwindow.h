#ifndef DEFAULTCALCWINDOW_H
#define DEFAULTCALCWINDOW_H

#include <QDialog>
#include <QLineEdit>

namespace Ui {
class DefaultCalcWindow;
}

class DefaultCalcWindow : public QDialog {
  Q_OBJECT

 public:
  explicit DefaultCalcWindow(QWidget *parent = nullptr);
  ~DefaultCalcWindow();

 signals:
  void firstWindow();

 private slots:
  void appendToInputField(const QString &text);

  void on_pushButton_back_clicked();

  void on_pushButton_1_clicked();

  void on_pushButton_cos_clicked();

  void on_pushButton_2_clicked();

  void on_pushButton_3_clicked();

  void on_pushButton_4_clicked();

  void on_pushButton_5_clicked();

  void on_pushButton_6_clicked();

  void on_pushButton_7_clicked();

  void on_pushButton_8_clicked();

  void on_pushButton_9_clicked();

  void on_pushButton_dot_clicked();

  void on_pushButton_0_clicked();

  void on_pushButton_power_clicked();

  void on_pushButton_divide_clicked();

  void on_pushButton_plus_clicked();

  void on_pushButton_multiply_clicked();

  void on_pushButton_minus_clicked();

  void on_pushButton_leftBracket_clicked();

  void on_pushButton_rightBracket_clicked();

  void on_pushButton_X_clicked();

  void on_pushButton_acos_clicked();

  void on_pushButton_sin_clicked();

  void on_pushButton_asin_clicked();

  void on_pushButton_tan_clicked();

  void on_pushButton_atan_clicked();

  void on_pushButton_log_clicked();

  void on_pushButton_ln_clicked();

  void on_pushButton_mod_clicked();

  void on_pushButton_sqrt_clicked();

  void on_pushButton_AC_clicked();

  void on_pushButton_del_clicked();

  void on_pushButton_res_clicked();

  void on_pushButton_X_edit_clicked();

  void on_pushButton_back_2_clicked();

 private:
  Ui::DefaultCalcWindow *ui;
  QVector<double> x, y;
};

#endif  // DEFAULTCALCWINDOW_H
