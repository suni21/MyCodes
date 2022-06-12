#include <stdio.h>
#include <stdlib.h>

void wait(int *s)
{
    while (*s <= 0)
        ;
    (*s)--;
}

void signal(int *s)
{
    (*s)++;
}

void callReader(int *wrt, int *mutex, int *read_count)
{
    wait(mutex);
    (*read_count)++;
    if ((*read_count) == 1)
        wait(wrt);
    printf("Reader came\n");
    signal(mutex);
}

void sendReader(int *wrt, int *mutex, int *read_count)
{
    wait(mutex);
    if ((*read_count) != 0)
        (*read_count)--;
    if ((*read_count) == 0)
        signal(wrt);
    printf("Reader left\n");
    signal(mutex);
}

void write(int *wrt)
{
    wait(wrt);
    printf("Writing done\n");
    signal(wrt);
}

int main()
{
    int wrt = 1, mutex = 1, read_count = 0;

    int ch;
    printf("Your choices: ");
    printf("\n1 Call Reader\n2 Send Reader\n3 Writer\n0 Exit");
    while(1)
    {
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            callReader(&wrt, &mutex, &read_count);
            break;
        case 2:
            sendReader(&wrt, &mutex, &read_count);
            break;
        case 3:
            write(&wrt);
            break;
        case 0:
            exit(0);
        }
    }
    return 0;
}