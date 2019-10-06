#include <stdio.h>
#include <stdlib.h>

int main()
{
    int runs, wickets;
    printf("Enter runs: ");
    scanf("%d",&runs);
    printf("Enter wickets: ");
    scanf("%d",&wickets);

    if(runs>500&&wickets>10)
        printf("The legend");
    else if(runs>300&&wickets>8)
        printf("the great");
    else
        printf("not a alrounder");
    return 0;
}
