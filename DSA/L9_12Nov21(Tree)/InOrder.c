#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int n)
{
    struct node *node = (struct node*)malloc(sizeof(struct node));
    node->data = n;
    node->left = NULL; 
    node->right = NULL;

    return node;
}

void inOrder(struct node *root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
        
    }
}

int main()
{
    struct node *root = createNode(4);
    struct node *root1 = createNode(1);
    struct node *root2 = createNode(6);
    struct node *root3 = createNode(5);
    struct node *root4 = createNode(2);

    root->left = root1;
    root->right = root2;
    root1->left = root3;
    root1->right = root4;

    inOrder(root);
    
    return 0;
}