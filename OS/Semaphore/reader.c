#include<stdio.h>
#include<stdlib.h>
 
int x=1;

void wait(int x)
{
    while(x<=0)
    x--;
}
 
void signal()
{
    x++;
}
 
void reader()
{
    wait(x);
    printf("\nReader present");
    signal(x);
}
 
void writer()
{
    wait(x);
    printf("\nWriter present");
    signal();
}

int main()
{
    int ch;
    printf("\n1 Reader\n2 Writer\n0 Exit");
    while(1)
    {
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                        reader();
                    break;
            case 2:  
                        writer();
                    break;
            case 0:
                    exit(0);
                    break;
        }
    }
   
    return 0;
}