#include<stdio.h>
#include<stdlib.h>

struct Huffman{
    char data;
    int freq;
    struct Huffman *left;
    struct Huffman *right;
}*hu;
struct minHeap{
    int size;
    int n;
    struct minHeap *arr;
};

struct Huffman *createnode(int n)
{
    struct Huffman *temp = (struct Huffman *)malloc(sizeof(struct Huffman));
    temp->data = n;
    temp->left = n;
    temp->right = NULL;

    return temp;
}

void heapify(struct Huffman *h, int i, int n)
{
    int l = 2 * i + 1;
    int r = l + 1;
    int  largest = i;
    if (l < n && h[largest].freq > h[l].freq)
        largest = l;
    if (r < n && h[largest].freq > h[r].freq)
        largest = r;
    if (largest != i)
    {
        int temp = h[largest].freq;
        h[largest].freq = h[i].freq;
        h[i].freq = temp;

        temp = h[largest].data;
        h[largest].data = h[i].data;
        h[i].data = temp;

        struct Huffman *l = h[largest].left;
        h[largest].left = h[i].left;
        h[i].left = l;
        l = h[largest].right;
        h[largest].right = h[i].right;
        h[i].right = l;
        heapify(h, largest, n);
    }
}

void bulid_Heap(struct Huffman *h,int n)
{
    int hu=n/2;
    while(hu--)
        hepify(h,hu,n);
}
void printCodes(struct Huffman* h, int arr[], int top)
{
    if (h->left)
    {
        arr[top] = 0;
        printCodes(h->left, arr, top + 1);
    }
 
    if (h->right)
    {
        arr[top] = 1;
        printCodes(h->right, arr, top + 1);
    }
 
    if (isLeaf(h))
    {
        printf("%c: ", h->data);
        printArr(arr, top);
    }
}
int main()
{
    int n;
    printf("Enter the size= ");
    scanf("%d",&n);


}

