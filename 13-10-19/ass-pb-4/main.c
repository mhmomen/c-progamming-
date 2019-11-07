#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day,year,month, week;
    printf("Enter the days:");
    scanf("%d",&day);

    while(day>0){
    year=day/365;
       printf("years: %d",year);
    day=day%365;
    month = day/30;
        printf("\nmonths:%d",month);
    day=day%30;
    week = day/7;
        printf("\nweeks:%d",week);
    day=day%7;
        printf("\ndays:%d",day);
    }
    return 0;
}
