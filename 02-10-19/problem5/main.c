#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j , a[20][20];
    printf("Enter the input : ");
    scanf("%d",&n);
    for(i=0; i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
              a[i][j]=1;
            }
            else
            {
                a[i][j]=0;
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
