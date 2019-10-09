#include <stdio.h>
#include <stdlib.h>

int main()
{
    char st[500];
    int i,vo,cons,space,digit,sente,word,count;
    vo=cons=space=digit=sente=word=count=0;
    printf("Enter the string: ");
    gets(st);

    for(i=0;st[i]!='\0';i++)
    {
        count++;
        if(st[i]== 'a'||st[i]== 'e'||st[i]== 'i'||st[i]== 'o'||st[i]== 'u'||st[i]== 'A'||st[i]== 'E'||st[i]== 'I'||st[i]== 'O'||st[i]== 'U')
            vo++;
        else if(st[i]>='a'&&st[i]<='z'||st[i]>='A'&&st[i]<='A')
            cons++;
        else if(st[i]>='1'&&st[i]<='9')
            digit++;
        else if(st[i]==' ')
            space++;
        else if(st[i]=='.')
            sente++;
    }
    printf("vowel:%d , consonent: %d, digit: %d, space: %d, word: %d,sentance:%d",vo,cons,digit,space,space+1,sente);
    return 0;
}
