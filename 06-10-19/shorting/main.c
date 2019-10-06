#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b&&a>c)
    {
        if(b>c)
            printf("the asanding short are:%d %d %d",a,b,c);
        else
            printf("the asanding short are:%d %d %d",a,c,b);
    }
    else if(b>a&&b>c)
    {
        if(a>c)
            printf("the asanding short are:%d %d %d",b,a,c);
        else
            printf("the asanding short are:%d %d %d",b,c,a);
    }
    else

    {
        if(a>b)
           printf("the asanding short are:%d %d %d",c,a,b);
        else
            printf("the asanding short are:%d %d %d",c,b,a);
    }
    return 0;
}
