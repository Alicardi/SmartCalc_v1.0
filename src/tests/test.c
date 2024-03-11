#include "test.h"

START_TEST(s21_calc_plus) {
  const char *infixNotation = "2+2.5";
  char *expectedResult = "4.5000000";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_minus) {
  const char *infixNotation = "234-0.2345611";
  char *expectedResult = "233.7654389";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_multiplication) {
  const char *infixNotation = "2*8*2*8.23435467";
  char *expectedResult = "263.4993494";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_division) {
  const char *infixNotation = "2/3/0.243564";
  char *expectedResult = "2.7371314";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_pow) {
  const char *infixNotation = "2^2^3";
  char *expectedResult = "256.0000000";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_sqrt) {
  const char *infixNotation = "sqrt(346)";
  char *expectedResult = "18.6010752";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_cos) {
  const char *infixNotation = "cos(45)";
  char *expectedResult = "0.5253220";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_acos) {
  const char *infixNotation = "acos(0.24)";
  char *expectedResult = "1.3284305";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_sin) {
  const char *infixNotation = "sin(99)";
  char *expectedResult = "-0.9992068";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_asin) {
  const char *infixNotation = "asin(0.99)";
  char *expectedResult = "1.4292569";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_tan) {
  const char *infixNotation = "tan(101)";
  char *expectedResult = "0.5067526";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_atan) {
  const char *infixNotation = "atan(-0.14523)";
  char *expectedResult = "-0.1442217";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_log) {
  const char *infixNotation = "log(10)";
  char *expectedResult = "1.0000000";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_ln) {
  const char *infixNotation = "ln(6.32423)";
  char *expectedResult = "1.8443883";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_mod) {
  const char *infixNotation = "345mod(22)";
  char *expectedResult = "15.0000000";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_M) {
  const char *infixNotation = "-6";
  char *expectedResult = "-6.0000000";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_P) {
  const char *infixNotation = "(+6)";
  char *expectedResult = "6.0000000";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_error_bracket_1) {
  const char *infixNotation = "(*6-6)";
  char *expectedResult = "incorrect input";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_error_bracket_2) {
  const char *infixNotation = "(6-6";
  char *expectedResult = "incorrect input";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_error_bracket_3) {
  const char *infixNotation = "6-6)";
  char *expectedResult = "incorrect input";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_error_bracket_4) {
  const char *infixNotation = "(6-6)(6+6)";
  char *expectedResult = "incorrect input";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_error_bracket_5) {
  const char *infixNotation = "6(6-6)";
  char *expectedResult = "incorrect input";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_error_bracket_6) {
  const char *infixNotation = "(6-6)+";
  char *expectedResult = "incorrect input";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_error_bracket_7) {
  const char *infixNotation = "(6-6+)";
  char *expectedResult = "incorrect input";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_big) {
  const char *infixNotation = "6+(7*8)/23-cos(17)";
  char *expectedResult = "8.7099459";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_dobleDot) {
  const char *infixNotation = "2.2.2+4.4";
  char *expectedResult = "incorrect input";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_big_2) {
  const char *infixNotation = "-15+(7.2435*2)^2^3-cos(45)";
  char *expectedResult = "1940115911.5798926";
  char *result = TranslateOnPostfixNotation(infixNotation);
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_creditAnn) {
  long double sum = 10000;
  long double percent = 5;
  int date = 12;
  char *result = CalculateAnnuityCredit(sum, percent, date);
  char *expectedResult =
      "Ежемесячный платеж:\n856.07 ₽\nПереплата "
      "по "
      "кредиту:\n272.90 "
      "₽\nОбщая выплата:\n10272.90 ₽\n";
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

START_TEST(s21_calc_creditDiff) {
  long double sum = 10000;
  long double percent = 5;
  int date = 12;
  char *result = CalculateDifferentiatedCredit(sum, percent, date);
  char *expectedResult =
      "Ежемесячный платеж:\n872.33 "
      "₽\nНачисленные "
      "проценты:\n267.62 "
      "₽\nДолг - проценты:\n10267.62 ₽\n";
  ck_assert_str_eq(result, expectedResult);
}
END_TEST

Suite *suite_fun_calc(void) {
  Suite *suite;
  TCase *all_tcase;

  suite = suite_create("s21_calc");
  all_tcase = tcase_create("All_case");

  tcase_add_test(all_tcase, s21_calc_plus);
  tcase_add_test(all_tcase, s21_calc_minus);
  tcase_add_test(all_tcase, s21_calc_multiplication);
  tcase_add_test(all_tcase, s21_calc_division);
  tcase_add_test(all_tcase, s21_calc_pow);
  tcase_add_test(all_tcase, s21_calc_sqrt);
  tcase_add_test(all_tcase, s21_calc_cos);
  tcase_add_test(all_tcase, s21_calc_acos);
  tcase_add_test(all_tcase, s21_calc_sin);
  tcase_add_test(all_tcase, s21_calc_asin);
  tcase_add_test(all_tcase, s21_calc_tan);
  tcase_add_test(all_tcase, s21_calc_atan);
  tcase_add_test(all_tcase, s21_calc_log);
  tcase_add_test(all_tcase, s21_calc_ln);
  tcase_add_test(all_tcase, s21_calc_mod);
  tcase_add_test(all_tcase, s21_calc_M);
  tcase_add_test(all_tcase, s21_calc_P);
  tcase_add_test(all_tcase, s21_calc_error_bracket_1);
  tcase_add_test(all_tcase, s21_calc_error_bracket_2);
  tcase_add_test(all_tcase, s21_calc_error_bracket_3);
  tcase_add_test(all_tcase, s21_calc_error_bracket_4);
  tcase_add_test(all_tcase, s21_calc_error_bracket_5);
  tcase_add_test(all_tcase, s21_calc_error_bracket_6);
  tcase_add_test(all_tcase, s21_calc_error_bracket_7);
  tcase_add_test(all_tcase, s21_calc_big);
  tcase_add_test(all_tcase, s21_calc_dobleDot);
  tcase_add_test(all_tcase, s21_calc_big_2);

  tcase_add_test(all_tcase, s21_calc_creditAnn);
  tcase_add_test(all_tcase, s21_calc_creditDiff);

  suite_add_tcase(suite, all_tcase);
  return suite;
}

int main(void) {
  int failed_count;
  Suite *suite;
  SRunner *srunner;

  suite = suite_fun_calc();
  srunner = srunner_create(suite);

  srunner_set_fork_status(srunner, CK_NOFORK);
  srunner_run_all(srunner, CK_NORMAL);
  failed_count = srunner_ntests_failed(srunner);
  srunner_free(srunner);
  return (failed_count == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
