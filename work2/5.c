#include<stdio.h>
int main ()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c = b/a;
    d = b%a;
    if (d != 0)
        printf("%d",c+1);
    else
        printf("%d",c);

}