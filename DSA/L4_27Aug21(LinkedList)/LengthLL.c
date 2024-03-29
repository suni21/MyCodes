#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;

struct node* createNode(int n) //create node and return address
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data = n;
    ptr->next = NULL;
    return ptr;
}

int lengthNode(struct node *head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}
void display(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d-->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node *ptr;
    int n, i;
    ptr=createNode(n);
    head=ptr;
    printf("Enter data: ");

       do{
        printf("\nEnter the data for node: ");
        scanf("%d", &n);
        ptr=createNode(n);
        struct node *tail = head;
        while(tail->next!=NULL)
        {
            tail = tail->next; 
        }
        tail->next = ptr;
        printf("\nEnter (1/0) to add node or to stop: ");
        scanf("%d", &i);
    }while(i);
    display(head);
    printf("Length of list: %d\n", lengthNode(head));

    return 0;
}