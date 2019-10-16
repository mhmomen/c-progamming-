#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[500];
    int i,s,w,cl,sl,cn,vow,d;
    s=w=cl=sl=cn=vow=d=0;
    printf("Enter the string: ");
    gets(line);

    for(i=0;line[i]!='\0';i++)
    {
            if(line[i]>='A'&&line[i]<='Z')
                cl++;
            if(line[i]>='a'&&line[i]<='z')
            sl++;
            if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
            vow++;
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
            cn++;
        else if(line[i]>='0'&&line[i]<='9')
            d++;
        else if (line[i]==' ')
            w++;
        else if(line[i]=='.')
            s++;
    }
    printf("capital letter: %d",cl);
    printf("\nsmall letter: %d",sl);
    printf("\nvowel: %d",vow);
    printf("\nconsonant: %d",cn);
    printf("\ndigit: %d",d);
    printf("\nword: %d",w+1);
    printf("\nsentence: %d",s);

    return 0;
}
