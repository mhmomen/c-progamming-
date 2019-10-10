#include <stdio.h>
#include <stdlib.h>
void m1(int a, int b)
{
    int c;
    c= a+b;
    printf("addition:%d",c);

}
void m2(int a, int b)
{
    int c;
    c= a-b;
    printf("\nsubtraction:%d",c);

}
void m3(int a, int b)
{
    int c;
    c= a*b;
    printf("\nmultiplication:%d",c);

}
void m4(float a, float b)
{
    float c;
    c= a/b;
    printf("\ndivision:%.2f",c);

}


int main()
{
    int x,y;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the secend number: ");
    scanf("%d",&y);
   m1(x,y);
   m2(x,y);
   m3(x,y);
   m4(x,y);
    return 0;
}
