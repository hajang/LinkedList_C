//
// Created by Ha on 16. 1. 1..
//

#ifndef LINKEDLIST_STACKWITHLIST_H
#define LINKEDLIST_STACKWITHLIST_H

#include "LinkedList.h"

// 스택 초기화 - NULL 반환
bool createStack(Node **stack){
    *stack = NULL;
    return true;
}

// 스택 관련 메모리 반환 - 루프 돌며 리스트 종주 메모리 반환
bool deleteStack(Node **stack){
    Node *node;

    while(node != NULL){
        node = (*stack)->next;
        free(*stack);
        *stack = node;
    }
    return true;
}

// 스택에 data 삽입 - 새 node 생성 후 head 앞에 추가
void push(Node **stack, void *data){
    Node *node = createNode(data);
    addNode(stack, node);
}

// 스택 pop 연산 - head 반환 후 head = head->next
void pop(Node **stack){
    Node *node = *stack;
    *stack = (*stack)->next;
}

// 스택의 top에 있는 데이터 반환
void *top(Node **stack){
    return (*stack)->data;
}

// 스택이 비었는지 확인 - return head == NULL
bool empty(Node *list){
    return list == NULL;
}


#endif //LINKEDLIST_STACKWITHLIST_H
