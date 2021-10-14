#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *top)
{
    while (top)
    {
        printf("Elements: %d\n", top->data);
        top = top->next;
    }
}
int isEmpty(struct node *top)
{
    if (top == NULL)
        return 1;
    else
        return 0;
}
int isfull(struct node *top)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
        return 1;
    else
        return 0;
}
void push(struct node *top, int val)
{
    if (isfull(top))
    {
        printf("Stack overflow");
    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = val;
        temp->next = top;
        temp = top;
    }
}
int pop(struct node *top)
{
    if (isEmpty(top))
    {
        printf("stack underflow");
    }
    else
    {
        struct node *temp = top;
        top = (top)->next;
        int val = temp->data;
        free(temp);
        return val;
    }
}
int main()
{
    struct node *top = NULL;
    int a;
        printf("Press:");
        printf("1 for checking if stack is empty\n");
        printf("2 to print elements of stack\n");
        printf("3 to push \n");
        printf("4 pop\n ");
    while (1)
    {
       
        printf("Enter your choice:");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
        {
            if (isEmpty(top))
            {
                printf("The stack is empty :");
            }
            else
            {
                printf("Stack is not empty ");
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
            printf("Enter the number of Elements to pop");
            scanf("%d", &p);
            for (int i = 0; i < p; i++)
            {
                int n = pop(top);
                printf("element popped out is %d", &n);
            }
            break;
        }
    
       }
    }
    return 0;
}