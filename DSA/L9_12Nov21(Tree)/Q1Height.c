#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int n)
{
    struct node* node = (struct node*)malloc(sizeof(struct node)); //allocate memory
    node->data = n;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int treeHeight(struct node* node)
{
   if (node==NULL)
    {
       return 0;
    }  
   else
   {
      
       int l_root = treeHeight(node->left);
       int r_root = treeHeight(node->right);

       if (l_root > r_root)
           return l_root+1;
       else 
           return r_root+1;
   }
}

int main()
{
    struct node *root = createNode(2);

    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->right->left= createNode(60);
    root->right->left->left = createNode(70);

/*     10
    /    \
   20     30
  / \     /
 40  50  60
         /
        70
*/
    printf("Height of tree= %d\n", treeHeight(root)-1);
    printf("\n");

    return 0;
}
