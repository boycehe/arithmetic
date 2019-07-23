#include <stdio.h>
#include "test_stack.h"

void test_stack(void){
	
	int count = 10;
	
	hc_stack *stack = initStack();
	for (int i = 0;i < count;i++) {
		push(stack, i);
		printf("push %d\n",i);
	}
	printf("push done print stack\n");
	
	printStack(stack);
	printf("*****begin pop*****\n");
	for (int i = 0;i < count;i++) {
		stack_item_type *m1 = (stack_item_type*)malloc(sizeof(stack_item_type));
		pop(stack,&m1);
		
		if (*m1 == -1) {
			printf("pop error\n");
		}else{
			printf("pop:%d\n",m1);	
		}
		
	}
	
	printf("*****end pop*****\n");
	
	if (isEmpty(stack) == hc_true) {
		printf("stack is empty\n");
	}else{
		printf("stack not empty\n");
	}
	
	freeStack(stack);
	
	
	
}