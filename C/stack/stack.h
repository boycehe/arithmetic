#include <stdio.h>
#include "../hc_constant.h"

typedef int stack_item_type;

typedef struct _hc_stack
{
	stack_item_type *base;
	int top;
	int size;
}hc_stack;

hc_stack* initStack(void);

hc_bool isFull(hc_stack* stack);

hc_bool isEmpty(hc_stack* stack);

void push(hc_stack* stack, stack_item_type item);

void pop(hc_stack* stack,stack_item_type* item);

void printStack(hc_stack *stack);

void freeStack(hc_stack *stack);