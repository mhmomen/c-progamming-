#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[300], ch;
    int i,count=0;
    printf("Enter the string: ");
    gets(s);

    printf("Enter the character :");
    scanf("%c",&ch);

    for(i=0;s[i]!='\0';i++)
    {
        if(ch==s[i])
            count++;
    }

    printf("%c : has %d characters",ch,count);
    return 0;
}
