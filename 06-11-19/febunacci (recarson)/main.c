#include <stdio.h>
#include <stdlib.h>
int fib(int f)
{
    if(f==0 ||f==1)
        return (f);
    else
        return(fib(f-1)+fib(f-2));
}

int main()
{
    int i, n;
    printf("enter the number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        printf("%d ",fib(i));

}
