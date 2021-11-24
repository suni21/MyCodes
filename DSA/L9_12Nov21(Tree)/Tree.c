#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    struct node *right;
    int data;
};
struct node *createnode(int n)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->left = NULL;
    node->data = n;
    node->right = NULL;
    return node;
}

void preorder(struct node *root)
{
    if (root)
    {
        printf(" %d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root)
{
    if (root)
    {
        inorder(root->left);
        printf(" %d ", root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        printf(" %d ", root->data);
    }
}

int compare(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}


int nodes(struct node *root)
{
    if (!root)
        return 0;
    else
        return 1 + nodes(root->left) + nodes(root->right);
}

int main()
{
    struct node *root = createnode(10);
    struct node *left1 = createnode(20);
    struct node *right1 = createnode(30);
    
    
    /* 
        10
      /    \
     20     30
   */

    root->left = left1;
    root->right = right1;

    printf("\nPost order: \n");
    postorder(root);
    printf("\nPre order: \n");
    preorder(root);
    printf("\nIn order: \n");
    inorder(root);
    return 0;
}