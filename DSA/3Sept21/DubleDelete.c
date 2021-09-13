#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head = NULL;

struct node *createNode(int n)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = n;
    p->prev = NULL;
    p->next = NULL;
    return p;
}

void display() //traversal
{
    struct node *s;
    while (s)
    {
        printf("%d<-->", s->data);
        s = s->next;
    }
    printf("NULL\n");
}

void deleteFromFront()
{
    struct node *w = head;
    head = head->next;
    head->prev = NULL;
    free(w);
}

void deleteFromEnd(struct node *a)
{
    struct node *s;
    while (s->next)
    {
        a = s;
        s = s->next;
    }
    a->next = NULL;
    free(s);
}

void deleteAtIndex(int index)
{
    struct node *s;
    struct node *w, *q = s->next;
    if (s == NULL)
        printf("Empty list\n");
    if (index == 1)
    {
        head = head->next;
        head->prev = NULL;
        free(w);
    }
    else
    {
        for (int i = 1; i < index; i++)
        {
            w = s;
            s = s->next;
            q = q->next;
        }
        free(s);
        w->next = q;
        q->prev = w;
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
    struct node *w = head;
    while (w->next)
    {
        w = w->next;
    }
    w->next = head;

    do
    {
        printf("Enter your choice: ");
        printf("\n1 for Display");
        printf("\n2 for deletion at head");
        printf("\n3 for deletion at end");
        printf("\n4 for deletion at index");
        printf("\n0 to exit\n");
        printf("choice: ");
        scanf("%d", &ch);
        printf("\n");
        switch (ch)
        {

           case 1:
           {
            display(head);
            break;
           }
           case 2:
           {
            deleteFromFront();
            break;
           }
           case 3:
           {
            deleteFromEnd(head);
            break;
           }
           case 4:
           {
            int index;
            printf("Enter the index you want to delete: ");
            scanf("%d", &index);
            deleteAtIndex(index);
            break;
           }
        }
    }while (ch);
   return 0;
}