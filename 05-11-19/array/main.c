#include <stdio.h>
void main()
{
    int i,j,t,a[10],n;

    printf("the number of input:");
    scanf("%d",&n);

    printf("the element:");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("the asending order:\n");
    for(j=1;j<=n;j++)
        printf("%d ",a[j]);
}

