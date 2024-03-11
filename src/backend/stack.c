#include "stack.h"

#include "main.h"

void initStack(struct Stack *Stack) { (*Stack).top = -1; }

int stackIsFull(struct Stack *Stack) { return ((*Stack).top == MAX_SIZE - 1); }

int stackIfEmpty(struct Stack *Stack) { return ((*Stack).top == -1); }

void pushInStack(struct Stack *Stack, double operant) {
  if (!stackIsFull(Stack)) (*Stack).result[++(*Stack).top] = operant;
}

double popFromStack(struct Stack *Stack) {
  return !stackIfEmpty(Stack) ? (*Stack).result[(*Stack).top--] : -1;
}