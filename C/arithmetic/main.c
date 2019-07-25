#include <stdio.h>
#include <stdlib.h>
#include "test_stack.h"

int main(int argc, char *argv[]) {
	//test_stack();
    
    int count = 23;
    
    hc_stack *stack = initStack();
    
    for (int i = 0;i < count;i++) {
        push(stack, i);
        printf("push %d\n",i);
    }
    printf("push done print stack\n");
    
   
    
    printf("*****begin pop*****\n");
    for (int i = 0;i < count;i++) {
        int m3 = 121;
        pop(stack, &m3);
        printf("pop:%d\n",m3);
       
    }
    
    printf("*****end pop*****\n");
    printStack(stack);
    
    if (isEmpty(stack) == hc_true) {
        printf("stack is empty\n");
    }else{
        printf("stack not empty\n");
    }
    
    
    //freeStack(stack);
   
}
