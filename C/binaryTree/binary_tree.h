//
//  binary_tree.h
//  arithmetic
//
//  Created by heboyce on 2019/7/26.
//  Copyright © 2019 heboyce. All rights reserved.
//

#ifndef binary_tree_h
#define binary_tree_h

#include <stdio.h>

typedef int binary_item_type;

typedef struct __binary_tree{
    binary_item_type value;
    struct __binary_tree *parent;
    struct __binary_tree *leftChild;
    struct __binary_tree *rightChild;
    
}binary_tree;
/*
 初始化完全二叉树
 count 节点数
 */
binary_tree *initCompleteBinaryTree(int count);

/*
 前序遍历
 */
void preOrderBinaryTree(binary_tree *tree);
/*
 中序遍历
 */
void intOrderBinaryTree(binary_tree *tree);
/*
 后序遍历
 */
void postOrderBinaryTree(binary_tree *tree);

#endif /* binary_tree_h */
