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

int countLeafN(struct node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    else
        return countLeafN(root->left) + countLeafN(root->right);
}

int countNoleafN(struct node *root)
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

int max(int a, int b)
{
    return a > b ? a : b;
}

int depth(struct node *root)
{
    if (!root)
        return 0;
    return 1 + max(depth(root->left), depth(root->right));
}

int sumOfNodes(struct node *root)
{
    if (root == NULL)
        return 0;
    static int sum = 0;
    return (root->data + sumOfNodes(root->right) + sumOfNodes(root->left));
}

void NodesAtMaxDepth(struct node *root, int k)
{
    if (root == NULL || k < 0)
        return;
    if (k == 0)
    {
        printf("%d ", root->data);
        return;
    }
    NodesAtMaxDepth(root->left, k - 1);
    NodesAtMaxDepth(root->right, k - 1);
}

void nodesAtKthLevel(struct node *root, int k)
{
    if (root == NULL || k < 0)
        return;
    if (k == 0)
    {
        printf("%d ", root->data);
        return;
    }
    nodesAtKthLevel(root->left, k - 1);
    nodesAtKthLevel(root->right, k - 1);
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
    int n;
    root = createNode(8);
    root = insert(root, 4);
    root = insert(root, 12);
    root = insert(root, 2);
    root = insert(root, 6);
    printf("\nLeaf count= %d\n", countLeafN(root));
    printf("No Leaf count= %d\n", countNoleafN(root));
    printf("No. of Nodes= %d\n", nodeCount(root));
    printf("Sum of nodes: %d\n", sumOfNodes(root));
    printf("Sum of all the elements=%d\n", addBT(root));
    printf("Depth of the tree: %d\n", depth(root));
    if (isBST(root))
    {
        printf("\nTree is BST\n");
    }
    else
    {
        printf("\nTree not a BST\n");
    }

    printf("Enter the level: ");
    scanf("%d", &n);
    nodesAtKthLevel(root, n);
    return 0;
}
