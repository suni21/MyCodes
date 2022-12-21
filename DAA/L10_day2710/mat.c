#include <stdio.h>
#include <limits.h>
#define MAX 999999999
long int m[20][20];
int s[20][20];
int p[20], i, j, n;

void matrixChainMul()
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
    int min = MAX;
    int count;

    for (k = i; k < j; k++)
    {
        count = MatrixChainOrder(p, i, k) + MatrixChainOrder(p, k + 1, j) + p[i - 1] * p[k] * p[j];
        if (count < min)
            min = count;
    }
    return min;
}
void print_optimul_parens(int i, int j)
{
    if (i == j)
        printf(" A%d ", i);
    else
    {
        printf("( ");
        print_optimul_parens(i, s[i][j]);
        print_optimul_parens(s[i][j] + 1, j);
        printf(" )");
    }
}
void main()
{
    int k;
    printf("Enter the size= ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        for (j = i + 1; j <= n; j++)
        {
            m[i][i] = 0;
            m[i][j] = MAX;
            s[i][j] = 0;
        }
    printf("\nEnter the dimensions: \n");
    for (k = 0; k <= n; k++)
    {
        printf("P%d: ", k);
        scanf("%d", &p[k]);
    }
    matrixChainMul();
    printf("\nM Matrix:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++){
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }
        
    printf("\nS Matrix:\n");           
    for (i = 1; i <= n; i++)
    {
         for (j = i; j <= n; j++)
        {
            if(i==j)
            {
                continue;
            }
            else{
            printf("%d  ",s[i][j]);
            } 
        }
        printf("\n");      
    }
              
    i = 1, j = n;
    printf("Sequence: ");
    print_optimul_parens(i, j);
    printf("\nMinimum number of multiplications: m[%d][%d]= %d ",i,j,MatrixChainOrder(p, 1, n));
}