#include<stdio.h>
int main()
{
    int sum=0,i,a[10],n;
    printf("Enter 10 numbers= ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("%d",sum);
    return 0;
}
