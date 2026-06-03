#include <stdio.h>
#include <stdlib.h>

//? A linked list is a type of linear data structure individual items are not necessarily at contiguous locations.

//* The individual items are called nodes and connected with each other using links.

typedef struct Node
{
    int data;
    struct Node *next;
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

int main()
{

    //* allocate 3 nodes in the heap
    Node *first = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));

    //* assign data and link the nodes
    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    (*third).data = 30;
    third->next = first;

    //* print the linked list
    printList(first);  // 10, 20, 30
    printList(second); // 20, 30
    printList(third);  // 30
    return 0;
}