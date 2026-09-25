#include<stdio.h>
int main()
{
    int total,ten,one;
    scanf("%d",&total);
        ten = total / 10;
        one = total % 10;
        total = ten + one  * 10;
        printf("%02d",total);
    return 0;
}
