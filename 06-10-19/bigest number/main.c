#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b&&a>c)
        printf("the biggest number is %d",a);
   else if(b>a&&b>c)
            printf("the biggest number is %d",b);
    else if(c>a&&c>b)
        printf("the biggest number is %d",c);
    else if(a==b&&b==c)
        printf("%d and %d and %D are equal",a,b,c);

    return 0;
}
