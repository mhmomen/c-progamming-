#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(0<n)
    {
        fact=fact*n;
        n--;
    }
    printf("\nthe factorial is: %d",fact);
    return 0;
}
