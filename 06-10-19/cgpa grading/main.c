#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;
    printf("Enter the student number: ");
    scanf("%d",&mark);

        if(mark>=80)
            printf("your grade is A+");
    else if(mark>=75)
            printf("your grade is A");
    else if(mark>=70)
            printf("your grade is A-");
    else if(mark>=65)
            printf("your grade is B+");
    else if(mark>=60)
            printf("your grade is B");
    else if(mark>=55)
            printf("your grade is -B");
    else if(mark>=50)
            printf("your grade is C+");
    else if(mark>=45)
            printf("your grade is C");
    else if(mark>=40)
            printf("your grade is D");

    else
        printf("You are fail!!!");


    return 0;
}
