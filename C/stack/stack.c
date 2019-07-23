#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define kHCStackSize 20

hc_stack* initStack(void){
	
	hc_stack *stack = (hc_stack *)malloc(sizeof(hc_stack));
	stack->base = (int *)malloc(sizeof(stack_item_type)*kHCStackSize);
	stack->top  = 0;	
	stack->size = kHCStackSize;
	return stack;

}

hc_bool isFull(hc_stack *stack){
	
	if (stack->size == stack->top) {
		return hc_true;
	}else{
		return hc_false;
	}
	
}

hc_bool isEmpty(hc_stack *stack){
	
	if (stack->top == 0) {
		return hc_true;
	}else{
		return hc_false;
	}
	
}


void push(hc_stack* stack, stack_item_type item) {
	
	if (isFull(stack) == hc_true) {
		stack->base = (stack_item_type *)realloc(stack->base, stack->size + kHCStackSize);
		stack->size = stack->size + kHCStackSize;
	}
	stack->base[stack->top] = item;
	stack->top++;
	
}

void pop(hc_stack* stack,stack_item_type* item){
	
	if (isEmpty(stack)) {
		return;
	}
	
	item = &stack->base[stack->top--];
	
}

void freeStack(hc_stack *stack){
	
	free(stack->base);
	free(stack);
	
}

void printStack(hc_stack *stack){
	
	stack_item_type* tempBase = stack->base;
	printf("print stack top--->base\n");
	for (int index = 0;index >= stack->top;index--) {
		
		printf("%d\n",tempBase[stack->top-index-1]);
		
	}
	
	
}