#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[30],n,i,small;
    printf("\nEnter the th number of arry: ");
    scanf("%d",&n);
    printf("\nEnter the element number: ");
    for(i=0;i<n; i++)
        scanf("%d",&arr[i]);
    small= arr[0];
    for(i=1;i<n;i++)
    {
        if(small>arr[i])
            small= arr[i];
    }
    printf("the smallest number:%d ",small);
    return 0;
}
