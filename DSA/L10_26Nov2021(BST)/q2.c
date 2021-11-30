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
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = n;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void *insert(struct node *root, int n)
{
    if (root == NULL)
        return createNode(n);
    else if (n > root->data)
        root->right = insert(root->right, n);
    else
        root->left = insert(root->left, n);
    return root;
}

int countLeafN(struct node* root)
{
  if(root == NULL)      
    return 0;
  if(root->left == NULL && root->right==NULL)     
    return 1;           
  else
    return countLeafN(root->left)+countLeafN(root->right);     
}

int countNoleafN(struct node* root) 
{ 
    if (root == NULL || (root->left == NULL && root->right == NULL)) 
        return 0; 
    return 1 + countNoleafN(root->left) + countNoleafN(root->right); 
} 

int nodeCount(struct node *root)
{
    if (root == NULL)
        return 0;
    else
    return 1 + nodeCount(root->left) + nodeCount(root->right);
}

int addBT(struct node *root)
{
    if (root == NULL)
        return 0;
    return (root->data + addBT(root->left) + addBT(root->right));
}

int main()
{
    /* 
        8
      /   \
     4     12
    / \ 
   2   6
*/

    struct node *root;
    root = createNode(8);
    root=insert(root, 4);
    root=insert(root, 12);
    root=insert(root, 2);
    root=insert(root, 6);
    printf("\nLeaf count= %d\n",countLeafN(root));
    printf("No Leaf count= %d\n",countNoleafN(root));
    printf("No. of Nodes= %d\n", nodeCount(root));
    printf("Sum of all the elements=%d\n",addBT(root));
    return 0;
}
