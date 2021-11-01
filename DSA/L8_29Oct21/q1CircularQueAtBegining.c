#include<stdio.h>
#include<stdlib.h>

struct QueueCir
{
    int front;
    int rear;
    int size;
    int *arr;
}Queue;

int isFull(struct QueueCir que)
{
    if((que.rear+1)%que.size==que.front)
    return 1;
    else 
    return 0;
}

int isEmpty(struct QueueCir que)
{
    if(que.front==-1 && que.rear==-1)
    return 1;
    else 
    return 0;
}

void traversal(struct QueueCir *que)
{
    for(int i = que->front; i != que->rear; i = (i+1)%que->size)
    {
        printf("%d ", que->arr[i]);
    }
    printf("%d\n", que->arr[que->rear]);
}

void enqueue(struct QueueCir *que, int data)
{
    if(isFull(*que))
    {
        printf("Queue Overflow\n");
    }
    else if (isEmpty(*que))
    {
        que->rear = que->front = 0;
        que->arr[que->rear] = data;
        printf("%d enqueued!\n", data);
    }
    else
    {
        que->rear = (que->rear + 1) % que->size;
        que->arr[que->rear] = data;
        printf("%d enqueued!\n", data);
    }
}

void dequeue(struct QueueCir *que)
{
    if(isEmpty(*que))
    {
        printf("Queue Underflow\n");
    }
    else if(que->rear == 0 && que->front == 0)
    {
        printf("Dequeued item%d\n", que->arr[que->front]);
        que->rear = que->front = -1;
    }
    else
    {
        printf("Dequeued element %d\n", que->arr[que->front]);
        que->front = (que->front + 1) % que->size;
    }
    
}

int main()
{
    struct QueueCir q = (struct QueueCir*)malloc(sizeof(struct QueueCir));
    q->r = q->f = -1;
    q->size = 5;
    q->arr = (int*)malloc(q->size * sizeof(int));
    int a;
    do
    {
        printf("Enter\n1 for checking empty or not\n2 for checking full or not\n3 for Display the elements\n4 for Enqueue\n5 for Dequeue\n0 to exit\n");
        scanf("%d", &a);

        switch (a)
        {
        case 1:
        {
            if(isEmpty(*q))
                printf("Queue is empty!\n");
            else
                printf("Queue is not empty!\n");
            break;
        }
        case 2:
        {
            if(isFull(*q))
                printf("Queue is Full!\n");
            else
                printf("Queue is not Full!\n");
            break;
        }
        case 3:
        {
            traversal(q);
            break;
        }
        case 4:
        {
            int data;
            printf("Enter the data to enqueue: ");
            scanf("%d", &data);
            enqueue(q, data);
            break;
        }
        case 5:
        {
            dequeue(q);
            break;
        }

        }
    }while(a);
    return 0;
}
