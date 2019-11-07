#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("chose the option:\n\n addition (+)\n subtraction(-)\n multiplication(*)\n division(/)\n\n");
    scanf("%c",&ch);

    float num1,num2;
    printf("Enter 1st number : ");
    scanf("%f",&num1);
    printf("Enter 2st number : ");
    scanf("%f",&num2);

    switch(ch)
    {
        case '+':
            printf("the result:%f",num1+num2);
            break;
        case '-':
            printf("the result:%f",num1-num2);
            break;
        case '*':
            printf("the result:%f",num1*num2);
            break;
        case '/':
            printf("the result:%.2f",num1/num2);
            break;
        default:
            printf("Invalid option!!");
    }
    return 0;
}
