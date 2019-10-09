#include <stdio.h>
#include <stdlib.h>
void pm1(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("# ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}
void pm2(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=n;k>=i;k--)
        {
            printf("# ");
        }
        printf("\n");
    }
}


int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

  pm1(n);
  pm2(n);
}
