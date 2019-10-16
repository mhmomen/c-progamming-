#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[500],c;
    int i,count=0;
    printf("Enter string: ");
    gets(ch);

    printf("Enter the letter to find frequency: ");
    scanf("%c",&c);

    for(i=0;ch[i]!='\0';i++)
    {
        if(c==ch[i])
            count++;
    }
    printf("frequency of '%c' is: %d",c,count);
    return 0;
}
