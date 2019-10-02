#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[4][4],i,j,t=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            arr[i][j]=t++;
            printf("a[%d][%d]= %d \n",i,j,arr[i][j]);
        }
    }
    return 0;
}
