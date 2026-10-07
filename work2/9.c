#include<stdio.h>
int main ()
{
    char s[300];
    scanf("%s",s);
        for(int i = 0 ;s[i]!='\0' ;i++)
        {
        if (s[i]=='A')
        printf("T");
        if (s[i]=='T')
        printf("A");
        if (s[i]=='C')
        printf("G");
        if (s[i]=='G')
        printf("C");
        }
    printf("\n");
}