#include<stdio.h>
#include<stdlib.h>
#define size 5

struct stack
{
    int data[size];
    int top;
};

int push(struct stack *s,int x)
{
    if(s->top==size-1)
        return 1;
    s->top++;
    s->data[s->top]=x;
    return 0;
}
int pop(struct stack *s,int *x)
{
    if(s->top==-1)
        return 1;
    *x=s->data[s->top];
    s->top--;
    return *x;
}
void traverse(struct stack *s)
{
    if(s->top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        int i;
    printf("Stack elements are:\n");
    for(i=0;i<=(s->top);i++)
    {
        printf("%d\n",s->data[i]);
    }

    }
}
int main()
{
    struct stack stk;
    stk.top=-1;
    int ch,x,m,q,k;
    printf("Press:\n");
        printf("1.To Push\n");
        printf("2.To Pop\n");
        printf("3.To Traverse\n");
        printf("4.To Quit\n");
        printf("\n");
    while(1)
    {
       printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d",&x);
                k=push(&stk,x);
                if(k==1)
                  printf("Stack Overflow/Full\n");
                else
                  printf("%d Pushed\n",x);
                break;
            case 2:
                q=pop(&stk,&m);
                if(q==1)
                    printf("Stack is underflow/Empty\n");
                else
                    printf("%dPopped\n",q);
                break;
            case 3:
                traverse(&stk);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("error 404\n");
        }
    }
}