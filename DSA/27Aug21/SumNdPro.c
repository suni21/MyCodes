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

int productNodes()
{
    int n;
    struct node* ptr = head;
 
    int product = 1;
    while (ptr != NULL) 
    {
        product=product*(ptr->data);
        ptr = ptr->next;
    }
    return product;
}

int sumNodes()
{
    int n;
   struct node* ptr = head; 
   int sum = 0;
   while (ptr != NULL)
   {
       sum=sum+(ptr->data);
       ptr=ptr->next;
   }
   return sum;
}

int main()
{
    struct node *ptr;
   int n,ch;
   printf("Enter data: ");
   scanf("%d",&n);
    
   ptr=createNode(n);
   head=ptr;

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

   printf("product element: %d\n", productNodes(head));
   printf("Sum element: %d\n", sumNodes(head));

   return 0;
}