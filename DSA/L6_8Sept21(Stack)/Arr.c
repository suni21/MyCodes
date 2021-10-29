#include<stdio.h>
#include<stdlib.h>


struct stack
{
    int size;
    int top;
    int *s;
}*stk;

//empty function
int isEmpty()
{
    if(stk->top==-1)
    {
        printf("stack is empty/underflow");
    }
}

int isFull(int size)
{
    if(stk->top==(size-1))
    {
        printf("stack is full/overflow");
    }
}



// int check(int size)
// {
// if( stk -> top == size-1)
// return 1;
// else
// return 0;
// }

void create(struct stack *st,int size) 
{
printf("Enter the size of the stack"); 
scanf("%d",&st->size);
st->top = -1;

st->s =(int *) malloc((st->size) * sizeof(int));
}

void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
    {
        printf("tack is full/overflow");
    }
    else{
        st->top++;
        st->s[st->top]=x;
    }
}

void display(struct stack st)
{
   if(st.top==-1)
   {
       printf("enpty");
       for(int i=st.top;i>=0;i--)
       {
           printf("%d",st.s[i]);
       }
   }
}
int pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
    {
        printf("empty");
    }
    else
    {
        x=st->s[st->top];
        st->top=st->top-1;
    }
    return x;
}

int main()
{
    struct stack stk;
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    create(&stk, size);
    push(&stk,20);
    push(&stk,70);
    push(&stk,40);
    push(&stk,10);
    display(stk);
    printf("%d",pop(&stk));
    return 0;

}