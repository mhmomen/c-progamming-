#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,large;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&n1,&n2,&n3);

    large = n1>n2 ? (n1>n3? n1:n3):(n2>n3? n2:n3);
    printf("the largest number is : %d",large);
    return 0;
}
