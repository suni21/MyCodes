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
        printf("%d ", s->data);
        s = s->next;
    }
    printf("NULL\n");
    printf("\n");
}
int checkEmpty( struct node *list )
 {
   if( !list )
      return 1;
   return 0;
 }
