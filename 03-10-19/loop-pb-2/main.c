#include<stdio.h>
int main()
{
    int n, i, a[20]={0}, small;
    printf("Enter the number of arrry: ");
    scanf("%d",&n);
    printf("Enter the input:");
    for (i=0;i<n;i++)
    {
        scanf("%d",& a[i]);
    }
    small=a[0];
    for(i=1; i<n;i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(small!=a[i])
            printf("%d ",a[i]);

    }

    return 0;
}


