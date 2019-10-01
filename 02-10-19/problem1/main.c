#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[12],n,i,sum=0;
    printf("Enter the number of student: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        printf("the mark of student %d :",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum is %d",sum);
    return 0;
}
