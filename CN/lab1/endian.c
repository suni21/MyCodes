#include <stdio.h>
#include<stdlib.h>


int main()
{
    int x;
    x= 0x11223344;

    char *c = (char *)&x;
    if (*c == 0x44)
    {
        printf("\nLittle endian. \n");
    }
    else
    {
        printf("\nBig endian. \n");
    }

    int converted = 0;

    printf("\nBefore Converting = 0x%x\n", x);

    converted |= ((0xff & x) << 24);
    converted |= (((0xff << 8) & x) << 8);
    converted |= (((0xff << 16) & x) >> 8);
    converted |= (((0xff << 24) & x) >> 24);

    printf("After Converting = 0x%x\n", converted);
    return 0;
}