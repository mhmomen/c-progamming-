#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n2,n4,sum;
    printf("Enter the 4 digit number: ");
    scanf("%d",&n);

    n4=n%10;
    n=n/100;
    n2=n%10;
    sum=n2+n4;
    printf("the sum of 2nd and 4th digits:\n %d",sum);
    return 0;
}
