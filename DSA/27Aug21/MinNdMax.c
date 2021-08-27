#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;

struct node *createNode(int n)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = n;
    p->next = NULL;

    return p;
}

void display()
{
    while (head)
    {
        printf("%d-->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int findMax(struct node *head)
{
    int max = 1;
    while (head!=NULL)
    {
        if(max < head->data)
            max = head->data;
        head = head->next;
    }
    return max;
}

int findMin(struct node *head)
{
    int min = 1;
    while (head!=NULL)
    {
        if(min > head->data)
            min = head->data;
        head = head->next;
    }
    return min;
}

int main()
{
    struct node *ptr;
    int ch, n;

    printf("Enter the data: ");
    scanf("%d", &n);

    ptr = createNode(n);
    head = ptr;
    do
   {
       printf("Enter next node data: ");
       scanf("%d",&n);
       ptr=createNode(n);
       struct node *ptr1=head;
        while(ptr1->next!=NULL)
        {
            ptr1=ptr1->next;
        }
        ptr1->next=ptr;
        printf("press (1/0) to add node : ");
        scanf("%d",&ch);
   }while(ch);

    display(head);

    printf("Maximum element: %d\n", findMax(head));
    printf("Minimum element: %d\n", findMin(head));
    return 0;
}