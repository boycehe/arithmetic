#include <stdio.h>
#include <stdlib.h>
#include "test_stack.h"

void test_stack(void){
	
	int count = 23;
	
	hc_stack *stack = initStack();
	for (int i = 0;i < count;i++) {
		push(stack, i);
		printf("push %d\n",i);
	}
	printf("push done print stack\n");
	
	printStack(stack);
   
	printf("*****begin pop*****\n");
	for (int i = 0;i < count;i++) {
         int *m1 = (int*)malloc(sizeof(int));
        printf("m1;%p\n",m1);
        /*
	    hc_bool result = pop(stack,&m1);
		
		if (result == hc_false) {
			printf("pop error\n");
		}else{
			printf("pop:%d\n",*m1);	
		}
       */
		
	}
	
	printf("*****end pop*****\n");
	
	if (isEmpty(stack) == hc_true) {
		printf("stack is empty\n");
	}else{
		printf("stack not empty\n");
	}
	
    
//	freeStack(stack);

}
