#include <stdio.h>
#include <stdlib.h>

int main()
{
    char L;
    printf("Enter a a character: ");
    scanf("%c",&L);

    if(L>='a'&&L<='z')
        printf("it is a small letter.");
    else if(L>='A'&&L<='Z')
        printf("it is a capital letter.");
    else if(L>='0'&&L<='9')
        printf("it is a digit.");

    else
        printf("invalid character!!");
    return 0;
}
