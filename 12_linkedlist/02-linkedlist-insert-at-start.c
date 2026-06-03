#include <stdio.h>
#include <stdlib.h>

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

Node *insertAtStart(Node *head, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

int main()
{

    Node *first = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printf("Linked List before insertion:\n");
    printList(first);

    first = insertAtStart(first, 5);

    printf("\nLinked List after insertion at first:\n");
    printList(first);

    return 0;
}

/*
? Time Complexity
*-------------------
* Insertion at first:
* O(1)

* Traversal:
* O(n)

* where n = number of nodes.
*/