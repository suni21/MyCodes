#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* createNode(int n) //create node and return address
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data = n;
    ptr->next = NULL;
    return ptr;
}

void bubbleSort(struct node *first)
{
    int swapp;
    struct node *ptr;
    struct node *ptr2=NULL;

    if(first==0)
    {
        printf("List is empty/underflow");
        return;
    }
    do
    {
    swapp=0
    while(swapp=1)
    }
    }
    

}