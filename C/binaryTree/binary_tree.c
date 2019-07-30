//
//  binary_tree.c
//  arithmetic
//
//  Created by heboyce on 2019/7/26.
//  Copyright © 2019 heboyce. All rights reserved.
//

#include "binary_tree.h"
#include "stack.h"
#include <stdlib.h>

binary_tree *initCompleteBinaryTree(int count){
    
    binary_tree *tree = (binary_tree *)malloc(sizeof(binary_tree));

    hc_stack *stack = initStack();
    
    for (int i = 0; i < count; i++) {
        push(stack, i);
    }
    
    binary_tree *tmp_tree = tree;
 
    while (tmp_tree != NULL || isEmpty(stack) == hc_false) {
        
        
    }
    
    return tree;
    
}

binary_tree *completeBinaryTree(binary_tree *tree,int count){
   
   
    return NULL;
}

void preOrderBinaryTree(binary_tree *tree){
    
}

void intOrderBinaryTree(binary_tree *tree){
    
}

void postOrderBinaryTree(binary_tree *tree){
    
}
