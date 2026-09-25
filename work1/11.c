#include<stdio.h>
char numtochar(char ch)
{
    return ch +4;
}

int main()
{
    int c1,c2,c3,c4,c5;
    scanf("%c%c%c%c%c\n",&c1,&c2,&c3,&c4,&c5);
    c1 = numtochar(c1);
    c2 = numtochar(c2);
    c3 = numtochar(c3);
    c4 = numtochar(c4);
    c5 = numtochar(c5);
    printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5);
    return 0;
}


