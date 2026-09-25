#include<stdio.h>
#include <math.h>
int main()
{
    double d,p,r,m,up,down;
    d = 300000;
    p = 6000;
    r = 0.01;
    up =p/(p-d*r);
    down = 1+r;
    m = log(up)/log(down);
    printf("%d",(int)round(m));
    return 0;

}