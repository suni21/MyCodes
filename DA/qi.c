#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *nextnode;
};

struct node *createNode(int n)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = n;
    ptr->nextnode = NULL;
    return ptr;
}

void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d-->", ptr->data);
        ptr = ptr->nextnode;
    }
    printf("NULL\n");
}

void rearrange(struct node *head)
{
    struct node *current = head;
    struct node *pOdd = NULL;
    struct node *pEven = NULL;
    struct node *hOdd = NULL;
    struct node *hEven = NULL;

    while (current)
    {
        if (current->data % 2 == 1)
        {
            if (pOdd)
                pOdd->nextnode = current;
            else
                hOdd = current;
                pOdd = current;
        }
        else
        {
            if (pEven)
                pEven->nextnode = current;
            else
                hEven = current;
                pEven = current;
        }
        current = current->nextnode;
    }
    if(hEven)
    {
        pEven->nextnode=NULL;
    }

    if(hOdd)
    {
        pOdd->nextnode=hEven;
    }
    else{
        hOdd=hEven;
        return hOdd;
    }
}

int main()
{
    int arr[]={2,5,3,9,6,7,8};
    int n=10;
    createNode(n);
    rearrange(arr);
    display(n);

}