#include<stdio.h>
#include<stdlib.h>

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
        char val;
        val = st->arr[st->top];
        st->top--;
        return val;
    }
    else
    {
        printf("Stack Underflow\n");
    }
}
void enqueue(struct stack *stk1, struct stack *stk2, int x)
{
    if(isFull(stk1))
    {
        printf("Stack Overflow\n");
        return;
    }
    while(!isEmpty(stk1))
    {
        push(stk2, pop(stk1));
    }
    push(stk1, x);
    while(!isEmpty(stk2))
    {
        push(stk1, pop(stk2));
    }
}

int dequeue(struct stack *stk1)
{
    int val = -1;
    if(isEmpty(stk1))
    {
        printf("Underflow!\n");
        return val;
    }
    val = pop(stk1);
    return val;
}

void traversal(struct stack *que)
{
    for(int i = que->top; i>=0; i++)
    {
        printf("%d ",que->arr[i]);
    }
    printf("\n");
}

int main()
{
    int size;
    printf("enter size:");
    scanf("%d",&size);
    struct stack stk1, stk2;
    stk1.top=stk2.top=-1;
    stk1.top=stk2.top=size;
    stk1.arr= (int*)malloc(size*sizeof(int));
    stk2.arr= (int*)malloc(size*sizeof(int));
    enqueue(&stk1,&stk2, 60);
    enqueue(&stk1,&stk2, 35);
    enqueue(&stk1,&stk2, 94);
    enqueue(&stk1,&stk2, 23);
    traversal(&stk1);
    dequeue(&stk1);
    traversal(&stk1);
    return 0;
}