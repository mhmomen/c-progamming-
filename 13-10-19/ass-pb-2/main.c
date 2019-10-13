#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,t;
    printf("enter two numbers:" );
    scanf("%d%d",&a,&b);

    printf("\nthe result:");

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n %d %d",a,b);

    return 0;
}
