#include<stdio.h>
int main()
{
    char op;
    printf("enter the oparetor(+,-,*,/): ");
    scanf("%c",&op);

    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%lf %lf",&n1,&n2);

    switch(op)
    {
    case '+':
        {
        printf("%lf + %lf \n",n1,n2,n1+n2);
        break;
        }
         case '-':
        {
        printf("%lf - %lf \n",n1,n2,n1-n2);
        break;
        }
         case '*':
        {
        printf("%lf * %lf \n",n1,n2,n1*n2);
        break;
        }
         case '/':
        {
        printf("%lf / %lf \n",n1,n2,n1/n2);
        break;
        }
         default:
            printf("not valid oparetor");

    }
}
