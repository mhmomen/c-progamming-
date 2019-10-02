#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i,j, a[20],t;
    printf("Enter the number of input:");
    scanf("%d",&n);
    printf("\nthe input number");
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
    printf("The asanding order\n\n");
    for(j=1;j<=n;j++)
        printf("%d ",a[j]);
    return 0;
}
