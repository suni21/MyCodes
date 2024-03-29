#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int frequency;
    char data;
    struct node *left;
    struct node *right;
} node;
int heap_array_size = 100; 
int heap_size = 0;
const int INF = 100000;

void swap(node *a, node *b)
{
    node t;
    t = *a;
    *a = *b;
    *b = t;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf(" %d ", root->frequency);
        inorder(root->right);
    }
}

node *createnode(char data, int freq)
{
    node *p;
    p = malloc(sizeof(struct node));
    p->data = data;
    p->frequency = freq;
    p->left = NULL;
    p->right = NULL;

    return p;
}

int get_right_child(int index)
{
    if ((((2 * index) + 1) <= heap_size) && (index >= 1))
        return (2 * index) + 1;
    return -1;
}
int get_left_child(int index)
{
    if (((2 * index) <= heap_size) && (index >= 1))
        return 2 * index;
    return -1;
}

int get_parent(int index)
{
    if ((index > 1) && (index <= heap_size))
    {
        return index / 2;
    }
    return -1;
}

void insert(node A[], node *a, int key)
{
    heap_size++;
    A[heap_size] = *a;
    int index = heap_size;
    while ((index > 1) && (A[get_parent(index)].frequency > a->frequency))
    {
        swap(&A[index], &A[get_parent(index)]);
        index = get_parent(index);
    }
}

node *build_queue(node c[], int size)
{
    node *a = malloc(sizeof(node) * heap_array_size);
    int i;
    for (i = 0; i < size; i++)
    {
        insert(a, &c[i], c[i].frequency); 
    }
    return a;
}

void min_heapify(node A[], int index)
{
    int left_child_index = get_left_child(index);
    int right_child_index = get_right_child(index);

    int smallest = index;

    if ((left_child_index <= heap_size) && (left_child_index > 0))
    {
        if (A[left_child_index].frequency < A[smallest].frequency)
        {
            smallest = left_child_index;
        }
    }

    if ((right_child_index <= heap_size && (right_child_index > 0)))
    {
        if (A[right_child_index].frequency < A[smallest].frequency)
        {
            smallest = right_child_index;
        }
    }
    if (smallest != index)
    {
        swap(&A[index], &A[smallest]);
        min_heapify(A, smallest);
    }
}

node *extract_min(node A[])
{
    node minm = A[1];
    A[1] = A[heap_size];
    heap_size--;
    min_heapify(A, 1);
    node *z;
    // copying minimum element
    z = malloc(sizeof(struct node));
    z->data = minm.data;
    z->frequency = minm.frequency;
    z->left = minm.left;
    z->right = minm.right;
    return z; // returning minimum element
}

// Huffman code
node *greedy_huffman_code(node C[])
{
    node *min_queue = build_queue(C, 6); // making min-queue

    while (heap_size > 1)
    {
        node *h = extract_min(min_queue);
        node *i = extract_min(min_queue);
        node *z;
        z = malloc(sizeof(node));
        z->data = '\0';
        z->left = h;
        z->right = i;
        z->frequency = z->left->frequency + z->right->frequency;
        insert(min_queue, z, z->frequency);
    }
    return extract_min(min_queue);
}

int main()
{
    node *a = createnode('a', 45);
    node *b = createnode('b', 10);
    node *c = createnode('c', 11);
    node *d = createnode('d', 16);
    node *e = createnode('e', 9);
    node *f = createnode('f', 50);
    node C[] = {*a, *b, *c, *d, *e, *f};

    node *z = greedy_huffman_code(C);
    inorder(z); // printing tree
    printf("\n");

    return 0;
}