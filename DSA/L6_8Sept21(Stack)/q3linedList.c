#include <stdlib.h>
#include <stdio.h>
struct stack
{
    int data;
    struct stack *next;
};

int isEmpty(struct stack *top)
{
    if (top == NULL)
        return 1;
    else
        return 0;
}
int isfull(struct stack *top)
{
    struct stack *ptr = (struct stack *)malloc(sizeof(struct stack));
    if (ptr == NULL)
        return 1;
    else
        return 0;
}
void push(struct stack **top, int val)
{
    if (isfull(*top))
    {
        printf("Stack overflow");
    }
    else if (isEmpty(*top))
    {
        *top = (struct stack *)malloc(sizeof(struct stack));
        (*top)->data = val;
        (*top)->next = NULL;
    }
    else
    {
        struct stack *temp = (struct stack *)malloc(sizeof(struct stack));
        temp->data = val;
        temp->next = *top;
        *top = temp;
    }
}
int pop(struct stack **top)
{
    int val = -1;

    if (isEmpty(top))
    {
        printf("stack underflow");
        return val;
    }
    else
    {
        struct stack *temp = *top;
        val = (*top)->data;
        *top = (*top)->next;
        free(temp);
        return val;
    }
}
void traversal(struct stack *top)
{
    while (top)
    {
        printf("Elements: %d\n", top->data);
        top = top->next;
    }
    printf("\n");
}
int main()
{
    struct stack *top = NULL;
    int a;
    printf("Press:");
    printf("1 for checking if stack is empty\n");
    printf("2 to print elements of stack\n");
    printf("3 to push \n");
    printf("4 pop\n ");
    do
    {

        printf("Enter your choice:");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
        {
            if (isEmpty(top))
            {
                printf("The stack is empty:\n");
            }
            else
            {
                printf("Stack is not empty\n");
            }
            break;
        }
        case 2:
        {
            traversal(top);
            break;
        }
        case 3:
        {
            int data;
            printf("Enter the data to push: ");
            scanf("%d", &data);
            push(&top, data);
            break;
        }
        case 4:
        {
            int p;
            p = pop(&top);
            printf("popper %d\n", p);
            // printf("Enter the number of Elements to pop");
            // scanf("%d", &p);
            // for (int i = 0; i < p; i++)
            // {
            //     int n = pop(top);
            //     printf("element popped out is %d", &n);
            // }
            break;
        }
        }
    } while (a);
    return 0;
}