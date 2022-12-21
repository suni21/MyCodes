#include <stdio.h>

int n;
int G[10][10], visited[10];
int count = 0;

void dfs(int v)
{
    visited[v] = 1;
    for (int j = 1; j <= n; j++)
        if (!visited[j] && G[v][j])
            dfs(j);
}
void main()
{
    printf("Enter number of vertices= ");
    scanf("%d", &n);
     for (int i = 1; i <= n; i++)
    {
        visited[i] = 0;
        for (int j = 1; j <= n; j++)
            G[i][j] = 0;
    }
    printf("\nEnter matrix: \n");
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &G[i][j]);

    for (int i = 1; i <= n; i++)
        visited[i] = 0;
    dfs(0);
    dfs(1);
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            count++;
    }
    if (count == n)
        printf("\n Graph is connected");
    else
        printf("\n Graph is not connected");
}
