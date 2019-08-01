//
//  queue.c
//  arithmetic
//
//  Created by heboyce on 2019/7/30.
//  Copyright © 2019 heboyce. All rights reserved.
//

#include "queue.h"
#include <stdlib.h>

#define kQueueDefaultSize 30

//初始化队列
hc_queue *initQueue(void){
    hc_queue *queue = (hc_queue *)malloc(sizeof(hc_queue));
    queue->front = -1;
    queue->rear = -1;
    queue->data = (queue_item_type *)malloc(sizeof(queue_item_type)*kQueueDefaultSize);
    queue->size = 0;
    return queue;
}
//队列是否为空
hc_bool isFullQueue(hc_queue *queue){
    if (queue->size == kQueueDefaultSize) {
        return hc_true;
    }
    return hc_false;
}
//队列是否为空
hc_bool isEmptyQueue(hc_queue *queue){
    if (queue->rear == queue->front) {
        return hc_true;
    }
    return hc_false;
}

//添加元素到队列中
void addItemToQueue(hc_queue *queue,queue_item_type value){
    queue->rear++;
    *(queue->data+queue->rear) = value;
    
}
//删除队列中元素
void deleteItemToQueue(hc_queue *queue,queue_item_type *value){
    
    queue->front++;
    if (value != NULL) {
        *value = *(queue->data + queue->front);
    }
    
}
