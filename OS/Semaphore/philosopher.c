#include <stdio.h>
int s =1;
void wait(int s)
{
    while(s<=0);
    s--;
}
void signal()
{
    s++;
}
void producer()
{
    wait(s);
    printf("\n1 item Produced");
    signal();
}
void consumer()
{
    wait(s);
    printf("\n1 item consumed");
    signal();
}
int main()
{
      int x;
      printf("\n\t***MAIN MENU*");
      printf("\nEnter the option");
      printf("\n1.Producer ");
      printf("\n2.Consumer ");
      printf("\n3.EXIT");
      printf("\nOption :  ");
      scanf("%d",&x);
      while(x != 3)
      {
         switch (x)
         {
         case 1:
             producer();
             break;
        case 2:
             consumer();
             break;
         
         } 
           printf("\n\t***MAIN MENU*");
           printf("\n\nEnter the option");
           printf("\n1.Producer ");
           printf("\n2.Consumer ");
           printf("\n3.EXIT");
           printf("\nOption :  ");
           scanf("%d",&x);
      }
}