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

void preorder(struct node *root)
{
    if (root) //!=NULL
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

struct node *search(struct node *root, int n)
{
    if (root == NULL)
    {
        printf("\nElement not present in Tree");
    }
    else if (n < root->data)
    {
        return search(root->left, n);
    }
    else if (n > root->data)
    {
        return search(root->right, n);
    }
    else
        printf("\nElement is present in Tree.");
    printf("\nElement= %d\n", root->data);
    return root;
}

int isBST(struct node *root)
{
    static struct node *pre = NULL;

    if (root) //!=NULL
    {
        if (!isBST(root->left))
            return 0;
        if (pre != NULL && root->data <= pre->data)
            return 0;
        pre = root;
        return isBST(root->right);
    }
    return 1;
}

struct node *findMin(struct node *root)
{
    if (root == NULL)
        return NULL;
    else if (root->left != NULL)
        return findMin(root->left);
    printf("\nMinimum element= %d", root->data);
}

struct node *findMax(struct node *root)
{
    if (root == NULL)
        return NULL;
    else if (root->right != NULL)
        return findMax(root->right);
    printf("\nMaximum element= %d", root->data);
}

struct node *min(struct node *root)
{
    struct node *temp = root->right;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

struct node *delete (struct node *root, int n)
{
    if (root == NULL)
        printf("\nElement not present");
    if (root->data > n)
        root->left = delete (root->left, n);
    else if (root->right < n)
        root->right = delete (root->right, n);

    else
    {
        //case1: no child(leaf node)
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        //case2: 1 child
        else if (root->left == NULL || root->right == NULL)
        {
            struct node *temp = root;
            if (root->left == NULL)
                root = root->right;
            else
                root = root->left;
            free(temp);
            return root;
        }
        //case3: 2 child
        else
        {
            struct node *temp = min(root->right);
            root->data = temp->data;
            root->right = delete (root->right, temp->data);
        }
    }
}

int main()
{
    /* 
        8
      /   \
     4     12
    / \   /  \
   2   6 9   21
*/

    struct node *root;
    root = createNode(8);

    root->left = createNode(4);
    root->right = createNode(12);
    root->left->left = createNode(2);
    root->left->right = createNode(6);
    root->right->left = createNode(9);
    root->right->right = createNode(20);

    printf("\nIn-order: \n");
    inorder(root);

    printf("\nPre-order: \n");
    preorder(root);

    printf("\nPost-order: \n");
    postorder(root);

    if (isBST(root))
    {
        printf("\nTree is BST\n");
    }
    else
    {
        printf("\nTree not a BST\n");
    }

    /* 
         8                              
       /   \
      4     12
     / \   /  \
    2   6 9   21
   /
  1

*/

 /* 
         8
       /   \
      4     12
     / \   /  \
    2   6 9   20
   /           \
  1            21

*/
    printf("\nAfter insertion\n");
    insert(root, 1);
    insert(root, 21);
    inorder(root);

    search(root, 12);

    findMin(root);
    findMax(root);

    printf("\nDeleted node= %d\n",root->data);
    root=delete(root, 8);

/* 
         20
       /   \
      4     12
     / \   /  \
    2   6 9   21
   /          
  1            

*/
    printf("\nRoot=%d\n", root->data);
    inorder(root);

    return 0;
}