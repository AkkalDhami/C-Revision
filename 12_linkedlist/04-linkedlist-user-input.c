#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void linkedlistTraversal(Node *node)
{
    while (node != NULL)
    {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main()
{
    Node *first = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));

    printf("Enter data for first, second, third node: ");
    scanf("%d %d %d", &first->data, &second->data, &third->data);

    first->next = second;
    second->next = third;
    third->next = NULL;

    linkedlistTraversal(first);

    return 0;
}