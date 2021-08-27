#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

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
    struct node *first=NULL,*second=NULL, *third=NULL,*fourth=NULL;
    first = (struct node *)malloc(sizeof(struct node )) ;
    second = (struct node *)malloc(sizeof(struct node )) ;
    third =  (struct node *)malloc(sizeof(struct node )) ;
    fourth=(struct node *)malloc(sizeof(struct node )) ;


    first->data=1;
    first->next=second;
    
    second->data=13;
    second->next=third;

    third->data=14;
    third->next=fourth;

    fourth->data=45;
    fourth->next=NULL;

    display(first);
    return 0;
    
}
