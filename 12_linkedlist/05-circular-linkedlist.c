#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

void printList(Node *n)
{
    while (n != NULL)
    {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("NULL\n");
}

void printList2(Node *n)
{
    while (n != NULL)
    {
        printf("%d -> ", n->data);
        n = n->prev;
    }
    printf("NULL\n");
}

int main()
{

    Node *first = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = NULL;

    first->prev = NULL;
    second->prev = first;
    third->prev = second;

    //* next node data
    printList(first);

    //* prev node data
    printList2(third);

    free(first);
    free(second);
    free(third);

    return 0;
}
