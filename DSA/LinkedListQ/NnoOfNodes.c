#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* creatNode(int n)
{
    struct node *newNode =(struct node *)malloc(sizeof(struct node));
    newNode->data =n;
    newNode->next =NULL;

    return newNode;
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
   struct node *head=NULL,*ptr;
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
    createNode(4);
    display(head);

   return 0;
}