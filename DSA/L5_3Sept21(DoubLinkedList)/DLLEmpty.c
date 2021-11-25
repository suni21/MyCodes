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

void display(struct node *s) 
{
    while (s)
    {
        printf("%d--> ", s->data);
        s = s->next;
    }
    printf("NULL\n");
    printf("\n");
}
int checkEmpty( struct node *list )
 {
   if( !list )
      return 1;
       printf("List not empty ");
   return 0;
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
    checkEmpty(head);
    return 0;  
    }  