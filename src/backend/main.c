#include "main.h"

#include "stack.h"

int isDigit(char currentChar, char previousChar, char nextChar) {
  return ((currentChar >= '0' && currentChar <= '9') ||
          (currentChar == '.' && (previousChar >= '0' && previousChar <= '9') &&
           (nextChar >= '0' && nextChar <= '9')));
}

int isOperator(char currentChar) {
  return (currentChar == '+' || currentChar == '-' || currentChar == '*' ||
          currentChar == '/' || currentChar == '^');
}

// Проверка на валидность скобочного значения
int isValidExpression(const char *infixNotation, struct Stack *stack) {
  int length = strlen(infixNotation);
  int uncurrentInput = 0;
  initStack(stack);

  for (int i = 0; i < length && !uncurrentInput; i++) {
    char currentChar = infixNotation[i];
    char previousChar = (i > 0) ? infixNotation[i - 1] : '\0';
    char nextChar = (i < length - 1) ? infixNotation[i + 1] : '\0';
    if (currentChar == '(') {
      if (i > 0 &&
          ((previousChar >= '0' && previousChar <= '9') || previousChar == ')'))
        uncurrentInput = 1;
      if (nextChar == '*' || nextChar == '/' || nextChar == '^' ||
          nextChar == 'm' || nextChar == '.')
        uncurrentInput = 1;
      pushInStack(stack, currentChar);
    } else if (currentChar == ')') {
      if ((i == length - 1) &&
          (isOperator(previousChar) || previousChar == '(')) {
        uncurrentInput = 1;
      } else if (i < length - 1 &&
                 ((nextChar >= '0' && nextChar <= '9') || nextChar == '(')) {
        uncurrentInput = 1;
      } else if (stackIfEmpty(stack))  //  && nextChar == '\0'
      {
        uncurrentInput = 1;
      } else {
        popFromStack(stack);
      }
    }
  }

  if (!stackIfEmpty(stack)) {
    uncurrentInput = 1;
  }

  return uncurrentInput;
}

int isLetter(char currentChar) {
  return (currentChar == 'c' || currentChar == 'C' || currentChar == 's' ||
          currentChar == 'S' || currentChar == 't' || currentChar == 'T' ||
          currentChar == 'q' || currentChar == 'l' || currentChar == 'L' ||
          currentChar == 'm' || currentChar == 'M' || currentChar == 'P');
}

int getOperatorPriority(char currentChar) {
  int priority = 0;
  if (currentChar == '+' || currentChar == '-') {
    priority = 1;
  } else if (currentChar == '*' || currentChar == '/' || currentChar == 'm') {
    priority = 2;
  } else if (currentChar == '^') {
    priority = 3;
  } else if (currentChar == 'M' || currentChar == 'P') {
    priority = 4;
  } else if (isLetter(currentChar)) {
    priority = 5;
  }

  return priority;
}

char getMathFunctionLetter(const char *symbol) {
  char letters = '\0';
  if (strncmp(symbol, "sin(", 4) == 0) {
    letters = 's';
  } else if (strncmp(symbol, "asin(", 5) == 0) {
    letters = 'S';
  } else if (strncmp(symbol, "cos(", 4) == 0) {
    letters = 'c';
  } else if (strncmp(symbol, "acos(", 5) == 0) {
    letters = 'C';
  } else if (strncmp(symbol, "tan(", 4) == 0) {
    letters = 't';
  } else if (strncmp(symbol, "atan(", 5) == 0) {
    letters = 'T';
  } else if (strncmp(symbol, "sqrt(", 5) == 0) {
    letters = 'q';
  } else if (strncmp(symbol, "log(", 4) == 0) {
    letters = 'l';
  } else if (strncmp(symbol, "ln(", 3) == 0) {
    letters = 'L';
  } else if (strncmp(symbol, "mod(", 4) == 0) {
    letters = 'm';
  }
  return letters;
}

// Это база
char *TranslateOnPostfixNotation(const char *infixNotation) {
  size_t postfixIndex = 0;
  int incorrectInput = 0, length = strlen(infixNotation);
  if (length == 0) incorrectInput = 1;
  char *postfixNotation, *charResult;
  char *simpleInfixNotation = (char *)calloc(length + 1, sizeof(char));
  if (simpleInfixNotation != NULL) {
    incorrectInput = correctInput(infixNotation, length, &incorrectInput,
                                  simpleInfixNotation, postfixIndex,
                                  &postfixNotation, &charResult);
  } else {
    incorrectInput = 1;
  }
  free(simpleInfixNotation);
  return (incorrectInput != 0 ||
          strcmp(postfixNotation, "incorrect input") == 0)
             ? strdup("incorrect input")
             : charResult;
}

char correctOperator(size_t i, char *currentChar, char previousChar) {
  int returnError = 1;
  if (*currentChar == '-' && (previousChar == '(' || i == 0)) {
    *currentChar = 'M';
    returnError = 0;
  } else if (*currentChar == '+' && (previousChar == '(' || i == 0)) {
    *currentChar = 'P';
    returnError = 0;
  } else if (!isOperator(previousChar)) {
    returnError = 0;
  }
  return returnError;
}
// Проверка пришедшей строки и создание сокращенного значения тригонометрии
int correctInput(const char *infixNotation, int length, int *incorrectInput,
                 char *simpleInfixNotation, size_t postfixIndex,
                 char **postfixNotation, char **charResult) {
  struct Stack stack;
  initStack(&stack);
  int dobleDot = 0;
  double finalResult;
  int isValid = isValidExpression(infixNotation, &stack);
  if (isValid == 0) {
    for (int i = 0; i < length && !(*incorrectInput); i++) {
      char currentChar = infixNotation[i];
      char previousChar = (i > 0) ? infixNotation[i - 1] : '\0';
      char nextChar = (i < length - 1) ? infixNotation[i + 1] : '\0';
      if (getMathFunctionLetter(&infixNotation[i]) &&
          ((isOperator(previousChar) || currentChar == 'm' ||
            previousChar == '(') ||
           previousChar == '\0')) {
        char math_function_letter = getMathFunctionLetter(&infixNotation[i]);
        simpleInfixNotation[postfixIndex++] = math_function_letter;
        while (infixNotation[i] != '(') {
          i++;
        }
        simpleInfixNotation[postfixIndex++] = '(';
      } else if (isOperator(currentChar) &&
                 correctOperator(i, &currentChar, previousChar) == 0 &&
                 i < length - 1)
        simpleInfixNotation[postfixIndex++] = currentChar;
      else if (isDigit(currentChar, previousChar, nextChar) ||
               (currentChar == '(' || currentChar == ')'))
        simpleInfixNotation[postfixIndex++] = currentChar;
      else
        *incorrectInput = 1;
    }
    if (*incorrectInput != 1) {
      *postfixNotation = simpleInfixOnPostfix(simpleInfixNotation);
      finalResult = calcPostfixNotation(*postfixNotation, &dobleDot);
      if (dobleDot == 1)
        *incorrectInput = 1;
      else
        *charResult = FromDoubleToChar(finalResult);
    }
  } else
    *incorrectInput = 1;
  return *incorrectInput;
}
// Перевод из double в char
char *FromDoubleToChar(double finalResult) {
  char *str = (char *)malloc(50 * sizeof(char));
  if (str != NULL) {
    sprintf(str, "%.7lf", finalResult);
  }
  return str;
}
// Промежуточная функция между инфиксом и постфиксом
char *simpleInfixOnPostfix(char *simpleInfixNotation) {
  char *result;
  char *stack = (char *)calloc((strlen(simpleInfixNotation) + 1), sizeof(char));
  if (stack != NULL) {
    int stackIndex = 0;
    int resultLength = strlen(simpleInfixNotation) * 2;
    int postfixIndex = 0;
    char *postfixExpression = (char *)calloc((resultLength + 1), sizeof(char));
    if (postfixExpression != NULL) {
      result = transferOfValues(simpleInfixNotation, postfixExpression,
                                postfixIndex, stackIndex, stack);
      // free(postfixExpression);
    } else {
      result = strdup("incorrect input");
    }
    free(stack);
  } else {
    result = strdup("incorrect input");
  }

  return result;
}
// Запись в постфиксную польскую нотацию
char *transferOfValues(char *simpleInfixNotation, char *postfixExpression,
                       int postfixIndex, int stackIndex, char *stack) {
  for (size_t i = 0; i < strlen(simpleInfixNotation); i++) {
    char currentChar = simpleInfixNotation[i];

    if (isDigit(currentChar, '0', '0')) {
      while (i < strlen(simpleInfixNotation) &&
             isDigit(simpleInfixNotation[i], '0', '0')) {
        postfixExpression[postfixIndex++] = simpleInfixNotation[i++];
      }
      postfixExpression[postfixIndex++] = ' ';
      i--;
    } else if ((isOperator(currentChar) && currentChar != '^') ||
               isLetter(currentChar)) {
      while (stackIndex > 0 && getOperatorPriority(stack[stackIndex - 1]) >=
                                   getOperatorPriority(currentChar)) {
        subtractionStack(postfixExpression, &postfixIndex, stack, &stackIndex);
      }
      stack[stackIndex++] = currentChar;
    } else if (currentChar == '^') {
      while (stackIndex > 0 && getOperatorPriority(stack[stackIndex - 1]) >
                                   getOperatorPriority(currentChar)) {
        subtractionStack(postfixExpression, &postfixIndex, stack, &stackIndex);
      }
      stack[stackIndex++] = currentChar;
    } else if (currentChar == '(') {
      stack[stackIndex++] = currentChar;
    } else if (currentChar == ')') {
      while (stackIndex > 0 && stack[stackIndex - 1] != '(') {
        subtractionStack(postfixExpression, &postfixIndex, stack, &stackIndex);
      }
      if (stackIndex > 0 && stack[stackIndex - 1] == '(') {
        stackIndex--;
      }
    }
  }

  while (stackIndex > 0) {
    subtractionStack(postfixExpression, &postfixIndex, stack, &stackIndex);
  }

  postfixExpression[postfixIndex] = '\0';

  return postfixExpression;
}

void subtractionStack(char *postfixExpression, int *postfixIndex, char *stack,
                      int *stackIndex) {
  postfixExpression[(*postfixIndex)++] = stack[--(*stackIndex)];
  postfixExpression[(*postfixIndex)++] = ' ';
}

double calcPostfixNotation(char *postfixExpression, int *dobleDot) {
  *dobleDot = 0;
  int countDot = 0;
  struct Stack stack;
  initStack(&stack);
  char str[MAX_SIZE];
  double operand1 = 0, operand2 = 0;
  for (int i = 0; postfixExpression[i] && *dobleDot == 0; i++) {
    if ((postfixExpression[i] >= '0' && postfixExpression[i] <= '9') &&
        (i == 0 || postfixExpression[i - 1] == ' ')) {
      int strIndex = 0;
      while (isDigit(postfixExpression[i], postfixExpression[i - 1],
                     postfixExpression[i + 1]) &&
             *dobleDot == 0) {
        str[strIndex++] = postfixExpression[i];
        if (postfixExpression[i] == '.') countDot++;
        if (countDot > 1) *dobleDot = 1;
        i++;
      }
      str[strIndex] = '\0';
      double number = atof(str);
      pushInStack(&stack, number);
      countDot = 0;
    } else if (postfixExpression[i] == ' ')
      continue;
    else {
      if (isOperator(postfixExpression[i]) || postfixExpression[i] == 'm') {
        operand2 = popFromStack(&stack);
        operand1 = popFromStack(&stack);
        calcWithOperator(&stack, operand2, operand1, postfixExpression, i);
      } else if (isLetter(postfixExpression[i]) &&
                 postfixExpression[i] != 'm') {
        operand1 = popFromStack(&stack);
        calcWithMathFunction(&stack, operand1, postfixExpression, i);
      }
    }
  }
  return popFromStack(&stack);
}

void calcWithOperator(struct Stack *stack, double operand2, double operand1,
                      char *postfixExpression, int i) {
  if (postfixExpression[i] == '/')
    pushInStack(stack, operand1 / operand2);
  else if (postfixExpression[i] == '*')
    pushInStack(stack, operand1 * operand2);
  else if (postfixExpression[i] == '-')
    pushInStack(stack, operand1 - operand2);
  else if (postfixExpression[i] == '+')
    pushInStack(stack, operand1 + operand2);
  else if (postfixExpression[i] == '^')
    pushInStack(stack, pow(operand1, operand2));
  else if (postfixExpression[i] == 'm')
    pushInStack(stack, fmod(operand1, operand2));
}

void calcWithMathFunction(struct Stack *stack, double operand1,
                          char *postfixExpression, int i) {
  if (postfixExpression[i] == 'c')
    pushInStack(stack, cos(operand1));
  else if (postfixExpression[i] == 'C')
    pushInStack(stack, acos(operand1));
  else if (postfixExpression[i] == 's')
    pushInStack(stack, sin(operand1));
  else if (postfixExpression[i] == 'S')
    pushInStack(stack, asin(operand1));
  else if (postfixExpression[i] == 't')
    pushInStack(stack, tan(operand1));
  else if (postfixExpression[i] == 'T')
    pushInStack(stack, atan(operand1));
  else if (postfixExpression[i] == 'q')
    pushInStack(stack, sqrt(operand1));
  else if (postfixExpression[i] == 'l')
    pushInStack(stack, log10(operand1));
  else if (postfixExpression[i] == 'L')
    pushInStack(stack, log(operand1));
  else if (postfixExpression[i] == 'M')
    pushInStack(stack, -(operand1));
  else if (postfixExpression[i] == 'P')
    pushInStack(stack, +(operand1));
}
