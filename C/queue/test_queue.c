//
//  test_queue.c
//  arithmetic
//
//  Created by heboyce on 2019/7/30.
//  Copyright © 2019 heboyce. All rights reserved.
//

#include "test_queue.h"
#include "queue.h"

void test_queue(void){
    
    hc_queue *queue = initQueue();
    for (int i = 0; i < 30; i++) {
        addItemToQueue(queue, i);
        printf("queue add :%d\n",i);
    }
    
    if (isFullQueue(queue) == hc_true) {
        printf("queue full\n");
    }
    
    for (int i = 0; i < 30; i++) {
        int m1 = -1;
        deleteItemToQueue(queue, &m1);
        printf("remve:%d\n",m1);
    }
    if (isEmptyQueue(queue)) {
        printf("queue is empty\n");
    }
    
}
