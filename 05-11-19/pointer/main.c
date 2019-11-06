#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pt, c;

    c = 203;
    pt=&c;
    printf("%d",*pt);
    return 0;
}
