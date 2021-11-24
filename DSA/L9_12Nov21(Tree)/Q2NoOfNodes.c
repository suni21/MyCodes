#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int n)
{
    struct node *node = (struct node *)malloc(sizeof(struct node)); //allocate memory
    node->data = n;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int nodeCount(struct node *node)
{
    if (node == NULL)
        return 0;
    else
    return 1 + nodeCount(node->left) + nodeCount(node->right);
}

int main()
{
    struct node *root = createNode(2);

    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->right->left = createNode(60);
    root->right->left->left = createNode(70);

/*     2
    /    \
   20     30
  / \     /
 40  50  60
         /
        70
*/
    printf("No. of Nodes= %d\n", nodeCount(root));
    printf("\n");

    return 0;
}
