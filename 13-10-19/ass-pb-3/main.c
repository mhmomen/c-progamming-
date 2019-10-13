#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter the letter: ");
    scanf("%c",&ch);

    printf("the lowercase of the letter is:%c",ch+32);
    return 0;
}
