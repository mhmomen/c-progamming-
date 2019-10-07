#include <stdio.h>
#include <stdlib.h>
void momen(int a, int b)
{
  if (a>b)
        printf("the biggest number is %d",a);
    else if(b>a)
    printf("the biggest number is %d",b);
  else
    printf("%d and %d are equal",a,b);
}

int main()
{
    int n1,n2;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter secend number: ");
    scanf("%d",&n2);

    momen(n1,n2);
    return 0;
}
