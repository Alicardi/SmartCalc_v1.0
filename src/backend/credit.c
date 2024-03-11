#include "credit.h"

char *CalculateAnnuityCredit(long double sum, long double percent, int date) {
  long double monthlyInterestRate = percent / 12 / 100;

  long double monthlyPayment =
      sum * monthlyInterestRate / (1 - pow(1 + monthlyInterestRate, -date));

  long double totalOverpayment = monthlyPayment * date - sum;
  long double totalPayment = monthlyPayment * date;

  char result[256];
  snprintf(
      result, sizeof(result),
      "Ежемесячный платеж:\n%.2Lf ₽\nПереплата "
      "по "
      "кредиту:\n%.2Lf "
      "₽\nОбщая выплата:\n%.2Lf ₽\n",
      monthlyPayment, totalOverpayment, totalPayment);

  return strdup(result);
}

char *CalculateDifferentiatedCredit(long double sum, long double percent,
                                    int date) {
  long double allSum = sum;
  long double monthlyInterestRate = percent / 12 / 100;
  long double monthlyPayment = sum / date + sum * monthlyInterestRate;
  long double principalPayment = 0;
  long double totalInterest = 0;

  for (int i = 0; i < date; ++i) {
    double interestPayment = sum * percent / 100 / 12;
    principalPayment = monthlyPayment -
                       interestPayment;  // суммма на погашение основного долга
    totalInterest += interestPayment;  // сумма процентов
    sum -= principalPayment;           // остаточек
  }

  char result[256];
  long double resultSum = allSum + totalInterest;
  snprintf(
      result, sizeof(result),
      "Ежемесячный платеж:\n%.2Lf ₽"
      "\nНачисленные "
      "проценты:\n%.2Lf ₽\nДолг - проценты:\n%.2Lf ₽\n",
      principalPayment, totalInterest, resultSum);

  return strdup(result);
}