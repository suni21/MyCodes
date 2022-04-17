#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
    int n;
    printf("Enter the number of processes:");
    scanf("%d",&n);
    pid_t t;
    for(int i=0;i<n;i++){
        t=fork();
        if(t==0)
        break;
    }
    printf("pid:%d , ppid:%d\n",getpid(),getppid());
    sleep(3);
}