#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    int c;
    c= a+b;
    printf("result:%d",c);
}
int sub(int a, int b)
{
    int c;
    c= a-b;
    printf("result:%d",c);
}
int multi(int a, int b)
{
    int c;
    c= a*b;
    printf("result:%d",c);
}
int divs(float a, float b)
{
    float c;
    c= a/b;
    printf("the result:%.2f",c);
}
int main()
{
    char op;
    printf("chose the oparetor:\n addition:1 \n subtraction:2\n multification:3 \n division:4\n");
    scanf("%c",&op);
    int x,y,c;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the secend number: ");
    scanf("%d",&y);

    switch(op)
     {


        {
        case '1':
            add(x,y);
            break;
        }
        {
        case '2':
            sub(x,y);
            break;
        }
        {
        case '3':
            multi(x,y);
            break;
        }
        {
        case '4':
            divs(x,y);
            break;
        }
        default:
            printf("invalid option");
     }
    return 0;
}
