#include <stdio.h>
#include <limits.h>
#define INT 999999999
long int m[20][20];
int s[20][20];
int p[20], i, j, n;

void print_Arr(int i, int j)
{
    if (i == j)
        printf(" A%d ", i);
    else
    {
        printf("( ");
        print_Arr(i, s[i][j]);
        print_Arr(s[i][j] + 1, j);
        printf(" )");
    }
}

void matrix_ChainMul()
{
    long int q;
    int k;
    for (i = n; i > 0; i--)
    {
        for (j = i; j <= n; j++)
        {
            if (i == j)
                m[i][j] = 0;
            else
            {
                for (k = i; k < j; k++)
                {
                    q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                    if (q < m[i][j])
                    {
                        m[i][j] = q;
                        s[i][j] = k;
                    }
                }
            }
        }
    }
}

int MatrixChainOrder(int p[], int i, int j)
{
    if (i == j)
        return 0;
    int k;
    int min = INT;
    int count;

    for (k = i; k < j; k++)
    {
        count = MatrixChainOrder(p, i, k) +
                MatrixChainOrder(p, k + 1, j) +
                p[i - 1] * p[k] * p[j];

        if (count < min)
            min = count;
    }

    // Return minimum count
    return min;
}

void main()
{
    int k;
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        for (j = i + 1; j <= n; j++)
        {
            m[i][i] = 0;
            m[i][j] = INT;
            s[i][j] = 0;
        }
    printf("\nEnter the dimensions: \n");
    for (k = 0; k <= n; k++)
    {
        printf("P%d: ", k);
        scanf("%d", &p[k]);
    }
    matrix_ChainMul();
    printf("\nM Matrix:\n");
    for (i = 1; i <= n; i++)
        for (j = i; j <= n; j++)
            printf("m[%d][%d]: %ld\n", i, j, m[i][j]);

    printf("\nS Matrix:\n");
    for (i = 1; i <= n; i++)
        for (j = i; j <= n; j++)
            if(i==j)
            {
                continue;
            }
            else{
            printf("s[%d][%d]: %ld\n", i, j, s[i][j]);
            }
    i = 1, j = n;
    printf("\nMultiplication Sequence : ");
    print_Arr(i, j);
    printf("\nMinimum number of multiplications is : %d ",MatrixChainOrder(p, 1, n));
}