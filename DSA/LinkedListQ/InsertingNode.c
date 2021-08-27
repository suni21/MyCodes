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

void display(struct node *ptr)
{
    while (ptr!= NULL)
    {
        printf("%d-->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void front(int n)
{
    struct node *p;
    // p=createNode(n);
    p = (struct node *)malloc(sizeof(struct node));
    p->data = n;
    p->next = head;
    head=p;
}

void end(int n)
{
    struct node *p, *q;
    // p=createNode(n);
    p = (struct node *)malloc(sizeof(struct node));
    p->data = n;
    p->next = NULL;
    q = head;
    while (q->next!= NULL)
    {
        q = q->next;
    }
    q->next = p;
}

int main()
{
    struct node *ptr;
    int n, i;
    printf("Enter the data elements:");
    scanf("%d", &n);
    ptr=createNode(n);
    head=ptr;

       do{
        printf("\nEnter the data for next node: ");
        scanf("%d", &n);
        ptr=createNode(n);
        struct node *tail = head;
        while(tail->next!=NULL)
        {
            tail = tail->next; 
        }
        tail->next = ptr;
        printf("\nEnter 1 to add node or 0 to stop: ");
        scanf("%d", &i);
    }while(i);
    
    display(head);

    front(9);
    end(45);
    printf("\n");
    display(head);
    return 0;
}

void insertatIndex(int n, int index)
{
    struct node *ind ,*q = NULL, *p = head;
    ind = createNode(n);

    if(index < 1 && index > countNode(head))
    {
        printf("Invalid index!\n");
        return head;
    }

    if(index == 1)
    {
        ind->next = head;
        head = ind;
        return head;
    }
    else
    {
        for(int i = 1; i < index; i++)
        {
            q = p;
            p = p->next;
        }
        ind->next = q->next;
        q->next = ind;
        return head;
    }
     
}
