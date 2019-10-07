#include <stdio.h>
#include <stdlib.h>

void gcd(int a, int b)
{
    if(b==0)
        printf("\n\nthe GCD:%d",a);
    else
        return gcd(b,a%b);
}

int main()
{
    int n1,n2,t;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter secend number: ");
    scanf("%d",&n2);

    if(n2>n1)
    {
        t=n2;
        n2=n1;
        n1=t;
    }
    gcd(n1,n2);
    return 0;
}
