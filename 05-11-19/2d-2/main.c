#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6][6],i,j;

    printf("two dimantional arry:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
            {
                a[i][j]=1;
            }
            else
                a[i][j]=0;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
