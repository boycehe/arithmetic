//
//  queue.h
//  arithmetic
//
//  Created by heboyce on 2019/7/30.
//  Copyright © 2019 heboyce. All rights reserved.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>
#include "hc_constant.h"

typedef int queue_item_type;

typedef struct _hc_queu{
    queue_item_type *data;
    int front; //记录队列头元素位置
    int rear; //记录队列尾元素位置
    int size; //存储数据元素的个数
}hc_queue;

//初始化队列
hc_queue *initQueue(void);
//队列是否为空
hc_bool isFullQueue(hc_queue *queue);
//队列是否为空
hc_bool isEmptyQueue(hc_queue *queue);
//添加元素到队列中
void addItemToQueue(queue_item_type value);
//删除队列中元素
void deleteItemToQueue(queue_item_type value);




#endif /* queue_h */
