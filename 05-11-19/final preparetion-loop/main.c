#include<stdio.h>
int main()
{
    int n,i,small,a[10];
    printf("Enter the number of array:");
    scanf("%d",&n);
    printf("the element:\n");

    for(i=0; i<n;i++)
        scanf("%d",&a[i]);
    small=a[0];

    for(i=1; i<n;i++)
    {
        if(small>a[i])
            small=a[i];
    }
    printf("the smallest number:%d",small);
    return 0;
}
