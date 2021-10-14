#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int top, size;
    int *arr;
} stack;

int isEmpty(struct stack s)
{
    if (s.top == -1)
    {
        printf("Stack is Empty or Underflow");
    }
}

int isFull(struct stack s)
{
    if (s.top == (s.size - 1))
    {
        printf("Stack is Full or Overflow");
    }
}

int push(struct stack *st, int x)
{
    if (!isFull(*st))
    {
        char data;
        data = st->arr[st->top];
        st->top--;
        return data;
    }
    else
    {
        isFull(*st);
    }
}

char stackTop(struct stack st)
{
    return st.arr[st.top];
}

int precedence(char ch)
{
    if (ch == '^')
        return 4;
    else if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 0;
}

int isParanthesis(char ch)
{
    if(ch == '(' || ch == ')')
        return 1;
    else    
        return 0;
}

int isOperator(char ch)
{
    if(ch == '^' || ch == '*' || ch == '/' || ch == '+' || ch == '-')
        return 1;
    else 
        return 0;
}

int infixToPostfix(char *infix)
{
    int x = 0;
    char *post = (char*)malloc(strlen(infix) * sizeof(char));
    int c = 0;

    struct stack *s = (struct stack*)malloc(sizeof(stack));
    s->size = strlen(infix);
    s->top = -1;
    s->arr = (char*)malloc(s->size * sizeof(char));
    s->arr[++s->top] = '(';

    while(infix[x] != ')')
    {
        if(!isOperator(infix[x]) && !para(infix[x]))
        {
            post[c++] = infix[x];
            x++;
        }
        else if(isOperator(infix[x]))
        {
            if(pre(stackTop(*s)) >= pre(infix[x]))
            {
                post[c++] = pop(s);
                push(s, infix[x]);
                x++;
            }
            else
            {
                push(s, infix[x]);
                x++;
            }
        }
        else if(para(infix[x]))
        {
            if(infix[x] == ')')
            {
                while(s->arr[s->top] != '(')
                {
                    post[c++] = pop(s);
                }
                x++;
                pop(s);
            }
            else
            {
                push(s, infix[x]);
                x++;
            }
        }
    }
    post[c] = '\0';
    printf("%d",post);
}

int main()
{
    char *eq = (char*)malloc(20 * sizeof(char));
    printf("Enter infix equation:");
    gets(eq);
    const char *s2 = {")"};
    char *infix = strcat(eq, s2);
    printf("%s\n", infixToPostfix(infix));
    return 0;
}
