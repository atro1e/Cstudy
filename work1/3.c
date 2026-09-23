#include<stdio.h>
int main(void)
{
    int n;
    float r,x,p;

    scanf("%f %d",&r,&n);
    p = 1;
    x =r+1;
    while(n>0)
    {
        p = p*x;
        n--;
    }
    printf("%.3f\n",p);
    return 0;
}