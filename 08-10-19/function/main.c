#include <stdio.h>
#include <stdlib.h>
 void cgpa(int mark)
 {
     if(mark>100)
        printf("Invalid numbers!!");
     else if(mark>=80)
        printf("A+");
    else if(mark>=70)
        printf("A");
    else if(mark>=60)
        printf("B");
    else if(mark>=50)
        printf("C");
    else if(mark>=40)
        printf("D");
    else
        printf("you are fail in exam!!!");

 }

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    cgpa(num);
    return 0;
}
