#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define kHCStackSize 20

hc_stack* initStack(void){
	
	hc_stack *stack = (hc_stack *)malloc(sizeof(hc_stack));
	stack->base = (stack_item_type *)malloc(sizeof(stack_item_type)*kHCStackSize);
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


hc_bool push(hc_stack* stack, stack_item_type item) {
	
	if (isFull(stack) == hc_true) {
        //此处犯了很低级的错误没有*sizeof(stack_item_type) 谨记！！！
		stack_item_type *base = (stack_item_type *)realloc(stack->base, (stack->size + kHCStackSize)*sizeof(stack_item_type));
		if(base == NULL) return hc_false;
		stack->base = base;
		stack->size = stack->size + kHCStackSize;
	}
	*(stack->base+stack->top) = item;
	stack->top++;
	
	return hc_true;
}

hc_bool pop(hc_stack* stack,stack_item_type* item){
  
	if (isEmpty(stack)) {
		return hc_false;
	}
    stack->top = stack->top - 1;
    if (item != NULL) {
        *item = *(stack->base + stack->top);
    }
	return hc_true;
}

void freeStack(hc_stack *stack){
	
	free(stack->base);
	free(stack);
	
}

void printStack(hc_stack *stack){
	
	stack_item_type* tempBase = stack->base;
	printf("print stack top--->base\n");
	for (int index = 0;index < stack->top;index++) {
		printf("%d\n",tempBase[stack->top-index-1]);
	}

}
