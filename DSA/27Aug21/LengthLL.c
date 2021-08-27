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

int lengthOfNode()
{
    
}