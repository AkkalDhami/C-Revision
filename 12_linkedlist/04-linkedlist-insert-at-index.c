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

Node *insertAtIndex(Node *head, int data, int position)
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return head;
    }

    newNode->data = data;
    newNode->next = NULL;

    //* Insert at beginning
    if (position == 1)
    {
        newNode->next = head;
        head = newNode;

        return head;
    }

    Node *current = head;
    int count = 1;

    // Move to node before insertion position
    while (current != NULL && count < position - 1)
    {
        current = current->next;
        count++;
    }

    //* Invalid position
    if (current == NULL)
    {
        printf("Invalid position\n");
        free(newNode);

        return head;
    }

    //* Insert node
    newNode->next = current->next;
    current->next = newNode;

    return head;
}

int main()
{
    Node *first = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    Node *last = (Node *)malloc(sizeof(Node));

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = last;

    last->data = 40;
    last->next = NULL;

    printf("Linked List before insertion:\n");
    printList(first);

    //* Insert 5 at position 1
    first = insertAtIndex(first, 5, 1);

    printf("\nAfter inserting 5 at position 1:\n");
    printList(first);

    //* Insert 25 at position 4
    first = insertAtIndex(first, 25, 4);

    printf("\nAfter inserting 25 at position 4:\n");
    printList(first);

    //* Insert 50 at position 7
    first = insertAtIndex(first, 50, 7);

    printf("\nAfter inserting 50 at position 7:\n");
    printList(first);

    return 0;
}

/*
? Time Complexity
*-------------------

? Insert at beginning:
* O(1)

? Insert at middle/end:
* O(n)

? Space Complexity:
* O(1) (excluding new node memory)

* where n = number of nodes
*/