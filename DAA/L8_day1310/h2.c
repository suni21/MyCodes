#include <stdio.h>
#include <stdlib.h>

struct huffman
{
    int freq;
    char prop;
    struct huffman *left, *right;
} * start;

void heapify(struct huffman *h, int i, int n)
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

        temp = h[largest].prop;
        h[largest].prop = h[i].prop;
        h[i].prop = temp;

        struct huffman *l = h[largest].left;
        h[largest].left = h[i].left;
        h[i].left = l;
        l = h[largest].right;
        h[largest].right = h[i].right;
        h[i].right = l;
        heapify(h, largest, n);
    }
}

void build_heap(struct huffman *s, int n)
{
    int start = n / 2;
    while (start--)
        heapify(s, start, n);
}

void upper_heapify(struct huffman *s, int n)
{
    int i = n - 1;
    while (i != 0)
    {
        int j = (i - 1) / 2;
        if (s[j].freq > s[i].freq)
        {
            int temp = s[j].freq;
            s[j].freq = s[i].freq;
            s[i].freq = temp;
            temp = s[j].prop;
            s[j].prop = s[i].prop;
            s[i].prop = temp;
            struct huffman *l = s[j].left;
            s[j].left = s[i].left;
            s[i].left = l;
            l = s[j].right;
            s[j].right = s[i].right;
            s[i].right = l;
            i = j;
        }
        else
        {
            break;
        }
    }
}

struct huffman extract_largest(struct huffman *s, int *n)
{
    struct huffman val = s[0];
    s[0] = s[(*n) - 1];
    (*n)--;
    heapify(s, 0, (*n));
    return val;
}

void huffman_gen(struct huffman *s, int n)
{
    build_heap(s, n);
    while (n != 1)
    {
        struct huffman s1 = extract_largest(s, &n);
        struct huffman *temp1 = (struct huffman *)malloc(sizeof(struct huffman));
        temp1->freq = s1.freq;
        temp1->prop = s1.prop;
        temp1->left = s1.left;
        temp1->right = s1.right;
        struct huffman s2 = extract_largest(s, &n);
        struct huffman *temp2 = (struct huffman *)malloc(sizeof(struct huffman));
        temp2->freq = s2.freq;
        temp2->prop = s2.prop;
        temp2->left = s2.left;
        temp2->right = s2.right;
        s[n].freq = s1.freq + s2.freq;
        s[n].prop = 0;
        s[n].left = temp1;
        s[n].right = temp2;
        n++;
        upper_heapify(s, n);
    }
}

void display(struct huffman *s)
{
    if (s == NULL)
        printf("NULL ");
    else
    {
        printf("%d->", s->freq);
        display(s->left);
        display(s->right);
    }
}

int main()
{
    int n;
    printf("enter the no. of letters:");
    scanf("%d", &n);
    struct huffman *ch = (struct huffman *)malloc(n * sizeof(struct huffman));
    for (int i = 0; i < n; i++)
    {
        ch[i].prop = 1;
        ch[i].left = NULL;
        ch[i].right = NULL;
    }
    for (int i = 0; i < n; i++)
    {
        printf("enter the freq:");
        scanf("%d", &ch[i].freq);
    }
    huffman_gen(ch, n);
    printf("%d->", ch[0].freq);
    display(ch[0].left);
    display(ch[0].right);

    return 0;
}