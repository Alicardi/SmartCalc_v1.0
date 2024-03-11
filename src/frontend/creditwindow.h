#ifndef CREDITWINDOW_H
#define CREDITWINDOW_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class CreditWindow;
}

class CreditWindow : public QDialog {
  Q_OBJECT

 public:
  explicit CreditWindow(QWidget *parent = nullptr);
  ~CreditWindow();

  void processCreditResult(char *result);

 signals:
  void secondWindow();

 private slots:
  void on_pushButton_menu_clicked();

  void on_pushButton_result_clicked();

 private:
  Ui::CreditWindow *ui;
};

#endif  // CREDITWINDOW_H
