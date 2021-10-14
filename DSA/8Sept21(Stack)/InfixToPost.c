#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct stack{
    int size;
    int top;
    char *arr;
}stack;

int isFull(stack s)
{
    return s.top == s.size - 1;
}

int isEmpty(stack s)
{
    return s.top == -1;
}

void push(stack *s, char data)
{
    if(!isFull(*s))
    {
        s->top++;
        s->arr[s->top] = data;
    }
    else
        printf("Stack overflow!\n");
}

char pop(stack *s)
{
    if(!isEmpty(*s))
    {
        char val = s->arr[s->top];
        s->top--;
        return val;
    }
    else
    {
        printf("Stack underflow!\n");
        return '\0';
    }
}

int stackTop(stack s)
{
    return s.arr[s.top];
}

int pre(char sy)
{
    if(sy == '^')
        return 3;
    else if(sy == '*' || sy == '/')
        return 2;
    else if(sy == '+' || sy == '-')
        return 1;
    else 
        return 0;
}

int para(char sy)
{
    if(sy == '(' || sy == ')')
        return 1;
    else    
        return 0;
}

int isOperator(char sy)
{
    if(sy == '^' || sy == '*' || sy == '/' || sy == '+' || sy == '-')
        return 1;
    else 
        return 0;
}

int infixToPostfix(char *infix)
{
    int x = 0;
    char *post = (char*)malloc(strlen(infix) * sizeof(char));
    int c = 0;

    stack *s = (stack*)malloc(sizeof(stack));
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