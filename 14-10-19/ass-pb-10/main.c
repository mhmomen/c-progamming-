#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f,c;
    printf("Enter the temperature(C): ");
    scanf("%d",&c);
    f=(c*9/5)+32;
    printf("the temperature is(F):%dF",f);
    return 0;
}
