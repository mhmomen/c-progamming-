#include <stdio.h>
void main()
{
    int i,j,a[4][4],x=1;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]=x++;
            printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        }
    }
}

