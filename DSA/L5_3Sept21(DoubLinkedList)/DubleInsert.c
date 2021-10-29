#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
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

void display(struct node *s) //traversal
{
    while (s)
    {
        printf("%d ", s->data);
        s = s->next;
    }
    printf("NULL\n");
    printf("\n");
}

void insertInFront(int n)
{
    struct node *p = createNode(n);
    p->next = head;
    head->prev = p;
    head = p;
    printf("\n");
}
void insertAtIndex(struct node *x,int n)
{
    int index;
    struct node *y = createNode(n);
    struct node *z;

    if (index == 1)
    {
        y->next = head;
        head->prev = y;
        head = y;
    }
    else
    {
        for (int i = 1; i < index; i++)
        {
            z = x;
            x = x->next;
        }
        z->next = y;
        y->prev = z;
        y->next = x;
        x->prev = y;
    }
    printf("\n");
}

void insertAtEnd(struct node *s,int n)
{
    struct node *p = createNode(n);
    while (s->next != NULL)
    {
        s = s->next;
    }
    s->next = p;
    p->prev = s;
    printf("\n");
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

    do
    {
        printf("Enter your choice: ");
        printf("\n1 for Display");
        printf("\n2 for insertion in Front");
        printf("\n3 for insertion at end");
        printf("\n4 for insertion at index");
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
            int a;
            printf("Enter the elements to insert: ");
            scanf("%d", &a);
            insertInFront(a);
            break;
        }
        case 3:
        {
            int b, index;
            printf("Enter the element to insert: ");
            scanf("%d", &b);
            printf("Enter the index: ");
            scanf("%d", &index);
            insertAtIndex(head,b);
            break;
        }
        case 4:
        {
            int c;
            printf("Enter the element to insert: ");
            scanf("%d", &c);
            insertAtEnd(head,c);
            break;
        }
        }
    } while (ch);
    printf("\n");
    return 0;
}