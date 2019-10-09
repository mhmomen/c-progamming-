#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[300];
    int i,count=0;
    printf("Enter the string: ");
    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
       count++;
    }
    printf("%s : has %d character",s,count);
    return 0;
}
