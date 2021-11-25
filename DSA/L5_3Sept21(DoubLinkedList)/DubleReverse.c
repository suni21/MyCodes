#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{  
    int data;  
    struct node *prev;  
    struct node *next;  
};      
struct node *head, *tail = NULL;  
   
struct node *createNode(int n)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = n;
    p->prev = NULL;
    p->next = NULL;
    return p;
}

void display(struct node *s) //traversal
{
    while (s)
    {
        printf("%d--> ", s->data);
        s = s->next;
    }
    printf("NULL\n");
    printf("\n");
}

void reverseNode()
{
    struct node *temp = NULL;
    struct node *pres = head;

    while(pres)
    {
        temp = pres->prev;
        pres->prev = pres->next;
        pres->next = temp;

        pres = pres->prev;
    }

    if(temp != NULL)
    {
        head = temp->prev;
    }
}

int main()  
{  
    struct node *r;
    int nodes, n, ch;
    printf("Enter the number of nodes: ");
    scanf("%d", &nodes);

    printf("Enter the first element: ");
    scanf("%d", &n);
    r = createNode(n);
    head = r;
    while (nodes - 1)
    {
        printf("Enter the next element: ");
        scanf("%d", &n);
        r = createNode(n);
        struct node *w = head;
        while (w->next)
        {
            w = w->next;
        }
        w->next = r;
        r->prev = w;
        nodes--;
    }  
   display(head);
   reverseNode();
   display(head);
   return 0;  
    }  
