#include<stdio.h>
int main()
{   
    int n, m, i, j, k, alloc[20][20], max[20][20], avail[20];
    int f[20],ans[20], ind=0, need[20][20]; 
    
  
    printf("Enter no. of processes: ");
    scanf("%d",&n);
    
   
    printf("Enter no. of resources: ");
    scanf("%d",&m);
  
    printf("Enter Allocation Matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("R%d :",i+1);
            scanf("%d",&alloc[i][j]);
        }
        printf("\n");
    }
    

    printf("Enter Max matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("R%d :",i+1);
            scanf("%d",&max[i][j]);
        }
        printf("\n");
    }
    printf("Enter the values in available: \n");
    for(j=0;j<m;j++)
    {
        printf("R%d :",j+1);
        scanf("%d",&avail[j]);
    }
    for(k=0;k<n;k++)
    {
        f[k]=0;
    }
    
    for(i=0;i<n;i++)    //For each process
    {
        for(j=0;j<m;j++)    //For each resource
        {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }
    int y=0;

    for(k=0;k<n;k++)    
    {
        for(i=0;i<n;i++)  
        {
            if(f[i]==0)     
            {
                int flag = 0; 
                for(j=0;j<m;j++)  
                {
                    if(need[i][j] > avail[j])    
                    {
                        flag=1;
                        break;
                    }
                }
                
                if(flag==0)
                {
                    ans[ind++] = i;
                    for(y=0;y<m;y++)   
                    {
                        avail[y] = avail[y] + alloc[i][y];   
                    }
                    f[i]=1; 
                }
            }
        }
    }
    printf("Safe sequence: \n");
    printf("<");
    for(i=0;i<n-1;i++)  
    {
        printf("P%d,", ans[i]);
    }
    printf("P%d>", ans[n-1]); 
    return 0;

}