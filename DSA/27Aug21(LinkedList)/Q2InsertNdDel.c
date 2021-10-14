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

void insertInFront(int n)
{
    struct node *p;
    // p=createNode(n);
    p = (struct node *)malloc(sizeof(struct node));
    p->data = n;
    p->next = head;
    head=p;
}

void insertatEnd(int n)
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

void deleteInFront()
{
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
    printf("\nFirst Node deleted");
}
void deleteFromEnd()
{
    struct node *p,*q;
    p = (struct node *)malloc(sizeof(struct node));
    p=head;
    q=head;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
  if(p==head)
  {
      head=NULL;
  }
  else
  {
      q->next=NULL;
  }
 free(p);
 printf("\nLast Node deleted");
}
int main()
{
    struct node *ptr;
    int n, i ,ch;
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
        printf("\nEnter (1/0) to add node or to stop node: ");
        scanf("%d", &i);
    }while(i);

    printf("Enter your choice:\n1 to display nodes \n 2 to intertion in the begining\n 3 to instert at end\n 4 to delete from front \n 5 to delete from end: \n");
    scanf("%d",&ch);
    display(head);
    switch (ch)
        {
        case 1:
        {
            display(head);
            break;
        }
        case 2:
        {
            int x;
            printf("Enter the element to insert: ");
            scanf("%d", &x);
            insertInFront( x);
            break;
        }
        case 3:
        {
            int x;
            printf("Enter the element to insert: ");
            scanf("%d", &x);
            insertatEnd( x);
            break;
        }
        case 4:
        {
            deleteInFront();
            break;
        }
        case 5:
        {
            deleteFromEnd();
            break;
        }

        default:
        {
            printf("Invalid input!\n");
        }
        }

    display(head);

    return 0;
}