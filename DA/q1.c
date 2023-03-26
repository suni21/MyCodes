#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} Node;

void segregateEvenOdd(struct Node **head_ref)
{

    struct Node *evenStart = NULL;
    struct Node *evenEnd = NULL;
    struct Node *oddStart = NULL;
    struct Node *oddEnd = NULL;
    struct Node *currNode = *head_ref;

    while (currNode != NULL)
    {
        int val = currNode->data;

        if (val % 2 == 0)
        {
            if (evenStart == NULL)
            {
                evenStart = currNode;
                evenEnd = evenStart;
            }
            else
            {
                evenEnd->next = currNode;
                evenEnd = evenEnd->next;
            }
        }
        else
        {
            if (oddStart == NULL)
            {
                oddStart = currNode;
                oddEnd = oddStart;
            }
            else
            {
                oddEnd->next = currNode;
                oddEnd = oddEnd->next;
            }
        }
        currNode = currNode->next;
    }

    if (oddStart == NULL || evenStart == NULL)
        return;
    evenEnd->next = oddStart;
    oddEnd->next = NULL;
    *head_ref = evenStart;
}

void push(struct Node **head_ref, int new_data)
{

    struct Node *new_node = (struct Node *)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main()
{
    struct Node *head = NULL;

    push(&head, 2);
    push(&head, 5);
    push(&head, 3);
    push(&head, 9);
    push(&head, 6);
    push(&head, 7);
    push(&head, 8);

    printf("\nOriginal Linked list \n");
    printList(head);


    segregateEvenOdd(&head);

    printf("\nModified Linked list \n");
    printList(head);

    return 0;
}