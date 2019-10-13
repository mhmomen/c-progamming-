#include <stdio.h>
#include <stdlib.h>

int main()
{   //*input marks*//
    int m1,m2,m3,mav;
    printf("Enter three subject marks: ");
    scanf("%d%d%d",&m1,&m2,&m3);
    //*average marks*//
    mav=(m1+m2+m3)/3;

    //*Grade*//

    printf("your Grade is:\n");

    if(mav>=80)
        printf("A+");
    else if(mav>=70)
        printf("A");
    else if(mav>=60)
        printf("B");
    else if(mav>=50)
        printf("C");
    else if(mav>=40)
        printf("D");
    else
        printf("You are fail!!");

    return 0;
}
