#include<stdio.h>
#include<stdlib.h>

int main()
{
    int all[4][3]={0}, max[4][3]={0}, avail[3]={0};
    int p,r;
    int need[4][3]={0};
    printf("Enter no of Processes: ");
    scanf("%d",&p);

    printf("Enter no of Resources: ");
    scanf("%d",&r);

    printf("Enter for allocation matrix:");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("(%d%d)",i+1,j+1);
            printf("%d",&all[i][j]);
        }
    }

    printf("Enter for max matrix:");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("(%d%d)",i+1,j+1); 
            printf("%d",&max[i][j]);
        }
    }

    printf("Enter for available matrix:");
        for(int j=0;j<r;j++)
        {
            printf("(%d)",j+1); 
            printf("%d",&avail[j]);
        }
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            need[i][j]=max[i][j]-all[i][j];
        }
    }

    //for safe sequence
    // int ss=0;

    // for(int i=0;i<p;i++)
    // {
    //     for(int j=0;j<p;j++)
    //     {

    //     }
    // }
return 0;

}