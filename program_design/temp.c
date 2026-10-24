#include<stdio.h>

int km(int);
int main ()
{
    int distance,price,isnew;
    double per[3][2]={
        {0.9,0.8},
        {0.8,0.7},
        {0.75,0.5}
    };//对应折扣率
    scanf("%d %d %d",&distance,&price,&isnew);
    printf("%.2f",price *per[km(distance)][isnew]);
    return 0;
}



