#include <stdio.h>
#include "LinkedList.h"
#include "StackWithList.h"

// main for testing stackwithlist
int main(){
    Node *stack;
    if(createStack(&stack))
        printf("stack created\n");

    push(&stack, (void *)1);
    push(&stack, (void *)2);
    push(&stack, (void *)3);
    push(&stack, (void *)4);
    push(&stack, (void *)5);

    printf("top : %d\n", top(&stack));

    pop(&stack); printf("pop\n");

    printf("top : %d\n", top(&stack));

    push(&stack, (void *)10); printf("push 10\n");

    printf("top : %d\n", top(&stack));

    if(deleteStack(&stack))
        printf("stack deleted\n");
    return 0;
}


// main for testing linkedlist
int list_main(){
    Node *list = createNode((void *)2);
    Node *newNode = createNode((void *)0);
    addNode(&list, newNode);

    Node *node = findNode(list, (void *)0);
    if(node != NULL)
        printf("%d\n", node->data);
    else
        printf("not found\n");

    Node *newNode2 = createNode((void *)1);
    if(insertNodeAfter(node, newNode2))
        printf("insert node success\n");
    else
        printf("insert node failed\n");


    printList(list);

    // delete simulation

    if(deleteNode(list, newNode2))
        printf("delete node success\n");
    else
        printf("delete node failed\n");

    printList(list);

    return 0;
}