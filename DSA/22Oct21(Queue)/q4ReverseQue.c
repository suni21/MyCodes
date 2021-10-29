#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int front;
    int rear;
    int size;
    int *arr;
}queue;

struct stack
{
    int size;
    int top;
    int *arr;
}stack;

int isEmpty(struct stack *stk)
{
    if (stk->top==-1)
        return 1;
    else
        return 0;
}
int isFull(struct stack *stk)
{
    if (stk->top==stk->size-1)
        return 1;
    else
        return 0;
}
void push(struct stack *stk, int x)
{
    if (!isFull(stk))
    {
        stk->top++;
        stk->arr[stk->top] = x;
    }
    else
    {
        printf("Stack Overflow\n");
    }
}
int pop(struct stack *st)
{
    if(!isEmpty(st))
    {
        char data;
        data = st->arr[st->top];
        st->top--;
        return data;
    }
    else
    {
        printf("Stack Underflow\n");
    }
}
int isFullQue(struct queue *que)
{
    if(que->rear == que->size-1)
    return 1;
    else
        return 0;
}

int isEmptyQue(struct queue *que)
{
    if(que->rear == -1 && que->front == -1)
        return 1;
    else
        return 0;
}

void enqueue(struct queue *que, int x)
{
    if(isFullQue(que))
    {
        printf("Queue Overflow\n");
    }
    else if(isEmptyQue(que))
    {
        que->front = que->rear = 0;
        que->arr[que->rear] = x;
    }
    else
    {
        que->rear++;
        que->arr[que->rear] = x;
    }
}

int dequeue(struct queue *que)
{
    int val = -1;
    if(isEmptyQue(que))
    {
        printf("Queue is empty!\n");
        return val;
    }
    else if(que->front == que->rear)
    {
        val = que->arr[que->front];
        que->front = que->rear = -1;
        return val;
    }
    else
    {
        val = que->arr[que->front++];
        return val;
    }
}

void traversal(struct queue *que)
{
    for(int i = que->front; i <= que->rear; i++)
    {
        printf("%d ",que->arr[i]);
    }
    printf("\n");
}

void reverse(struct queue *que)
{
    struct stack stk;
    stk.top==-1;
    stk.size=que->size;
    stk.arr=(int*)malloc(stk.size * sizeof(int));

       while (!isEmptyQue(que))
       {
             push(&stk,dequeue(que));
       }
       
       while (!isEmpty(&stk)) 
       {
            enqueue(que, pop(&stk));
       }
       printf("\n");
}

int main()
{
    struct queue *que = (struct queue*)malloc(sizeof(struct queue));
    que->front = que->rear = -1;
    que->size = 4;
    que->arr = (int*)malloc(que->size * sizeof(int));
    enqueue(que, 60);
    enqueue(que, 35);
    enqueue(que, 94);
    enqueue(que, 23);
    traversal(que);
    reverse(que);
    traversal(que);
    return 0;
}