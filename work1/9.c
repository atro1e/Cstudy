#include<stdio.h>
int main()
{
    int yuan100,yuan50,yuan20,yuan10,yuan5,yuan1,total;
    scanf("%d",&total);
    yuan100 = total / 100;
    total %= 100;
    yuan50 = total / 50;
    total %= 50;
    yuan20 = total / 20;
    total %= 20;
    yuan10 = total / 10;
    total %= 10;
    yuan5 = total / 5;
    total %= 5;
    yuan1 = total;

    printf("%d\n", yuan100);
    printf("%d\n", yuan50);
    printf("%d\n", yuan20);
    printf("%d\n", yuan10);
    printf("%d\n", yuan5);
    printf("%d\n", yuan1);

    return 0;
}