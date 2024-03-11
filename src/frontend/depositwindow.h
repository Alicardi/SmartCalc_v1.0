#ifndef DEPOSITWINDOW_H
#define DEPOSITWINDOW_H

#include <QDialog>

namespace Ui {
class DepositWindow;
}

class DepositWindow : public QDialog {
  Q_OBJECT

 public:
  explicit DepositWindow(QWidget *parent = nullptr);
  ~DepositWindow();

 signals:
  void thirdWindow();

 private slots:
  void on_pushButton_menu_clicked();

 private:
  Ui::DepositWindow *ui;
};

#endif  // DEPOSITWINDOW_H
