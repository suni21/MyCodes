#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int isEmpty(struct node *front)
{
    if (front == NULL)
        return 1;
    else
        return 0;
}

int isFull()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
        return 1;
    else
        return 0;
}

void enqueue(struct node **front, struct node **rear, int x)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        ptr->data = x;
        ptr->next = NULL;

        if (*front == NULL)
        {
            *front = *rear = ptr;
        }
        else
        {
            (*rear)->next = ptr;
            *rear = ptr;
        }
        printf("%d enqueued\n", x);
    }
}

void dequeue(struct node **front)
{
    struct node *ptr = *front;
    if (isEmpty(*front))
    {
        printf("Queue Underflow\n");
    }
    else
    {
        *front = (*front)->next;
        printf("%d dequeued\n", ptr->data);
        free(ptr);
    }
}

void traversal(struct node *front)
{
    while (front)
    {
        printf("%d--->", front->data);
        front = front->next;
    }
    printf("NULL\n");
}

int peek(struct node *front)
{
    int val = -1;
    if (front == NULL)
        printf("Empty queue!");
    else
        val = front->data;
    return val;
}

int main()
{
    struct node *front = NULL, *rear = NULL;
    int ch;
    printf("Press:");
    printf("\n1 for checking queue is empty or not");
    printf("\n2 for checking queue is full or not");
    printf("\n3 for Display the elements");
    printf("\n4 for Enqueue");
    printf("\n5 for Dequeue");
    printf("\n6 for peek");
    printf("\n7 to exit\n");

    do
    {
        printf("Enter the choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            if (isEmpty(front))
                printf("Queue is empty\n");
            else
                printf("Queue is not empty\n");
            break;
        }
        case 2:
        {
            if (isFull())
                printf("Queue is Full\n");
            else
                printf("Queue is not Full\n");
            break;
        }
        case 3:
        {
            traversal(front);
            printf("\n");
            break;
        }
        case 4:
        {
            int data;
            printf("Enter to enqueue: ");
            scanf("%d", &data);
            enqueue(&front, &rear, data);
            printf("\n");
            break;
        }
        case 5:
        {
            dequeue(&front);
            printf("\n");
            break;
        }
        case 6:
        {
            printf("%d \n", peek(front));
            printf("\n");
            break;
        }
        }
    } while (ch);
    return 0;
}