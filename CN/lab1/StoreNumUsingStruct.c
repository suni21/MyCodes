#include<stdio.h>
#include<stdlib.h>

struct pkt
{
    char ch1;
    char ch2[2];
    char ch3;
};
void display(struct pkt p1);
int main()
{
    unsigned int var;
    int a,b,c,d;

    printf("Enter number: ");
    scanf("%x",&var);
    a=(var&0xFF); 
    b=((var>>8)&0xFF); 
    c=((var>>16)&0xFF); 
    d=((var>>24)&0xFF);

    struct pkt p;
    p.ch1=a;
    p.ch2[0]=b;
    p.ch2[1]=c;
    p.ch3=d;

    display(p);
    return 0;
}

void display(struct pkt p1)
{
    printf("\nch1=%x",p1.ch1);
    printf("\nch2=%x",p1.ch2[0]);
    printf("\nch2=%x",p1.ch2[1]);
    printf("\nch3=%x",p1.ch3);

    int o=(int)(p1.ch3<<24)+(int)(p1.ch2[1]<<16)+(int)(p1.ch2[0]<<8)+(int)(p1.ch1);
    printf("\nOrigninal number=%x",o);

}