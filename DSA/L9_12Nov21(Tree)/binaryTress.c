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
    struct node *node = (struct node*)malloc(sizeof(struct node));  // Allocating memory
    node->data = n; 
    node->left = NULL;
    node->right = NULL;

    return node;
}


int main()
{
    struct node *root = createNode(50);
    struct node *root1 = createNode(70);
    struct node *root2 = createNode(90);
    root->left = root1;
    root->right = root2;

    printf("%d %d %d\n", root->data, root->left->data, root->right->data);
    
    return 0;
}