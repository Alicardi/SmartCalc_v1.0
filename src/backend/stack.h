#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 100

struct Stack {
  long double result[MAX_SIZE];
  int top;
};

void initStack(struct Stack *Stack);
int stackIsFull(struct Stack *Stack);
int stackIfEmpty(struct Stack *Stack);
void pushInStack(struct Stack *Stack, double operant);
double popFromStack(struct Stack *Stack);

#endif  // STACK_H
