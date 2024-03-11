#ifndef MAIN_H
#define MAIN_H

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

int isDigit(char currentChar, char previousChar, char nextChar);
int isOperator(char currentChar);
// int isBracket(char currentChar, char previousChar, char nextChar, int length,
// int i);
int isValidExpression(const char *infixNotation, struct Stack *stack);
int isLetter(char currentChar);
char getMathFunctionLetter(const char *symbol);
char *TranslateOnPostfixNotation(const char *infix_notation);
char correctOperator(size_t i, char *currentChar, char previousChar);
int correctInput(const char *infixNotation, int length, int *incorrectInput,
                 char *simpleInfixNotation, size_t postfixIndex,
                 char **postfixNotation, char **charResult);
// char *analyzeInfixNotation(const char *infixNotation, char
// *simpleInfixNotation, int *incorrectInput, char currentChar);
char *simpleInfixOnPostfix(char *simpleInfixNotation);
char *transferOfValues(char *simpleInfixNotation, char *postfixExpression,
                       int postfixIndex, int stackIndex, char *stack);
void subtractionStack(char *postfixExpression, int *postfixIndex, char *stack,
                      int *stackIndex);
double calcPostfixNotation(char *postfixExpression, int *dobleDot);
char *FromDoubleToChar(double finalResult);
// int checkBracket(struct Stack *stack, char currentChar, int *countBracket);
void calcWithOperator(struct Stack *stack, double operand2, double operand1,
                      char *postfixExpression, int i);
void calcWithMathFunction(struct Stack *stack, double operand1,
                          char *postfixExpression, int i);

#endif  // MAIN_H
