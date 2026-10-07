#include<stdio.h>
int maxcofactor(int a,int b)
{
    int factor = 1,sumfactor = 1,min;
    if (a<b)
    min = a;
    else
    min = b;
    while (factor <= min)
    {
        if(a%factor==0 && b%factor == 0)
            {
                sumfactor = factor;
                factor ++;
            }    
        else
            factor ++;
        
    }
    return sumfactor;

}
int mincofactor(int a,int b)
{   
    if (a==1 && b==1)
    return 1;
    int factor = 1,sumfactor,min,max;
    if (a<b)
    {
    min = a;
    max = b;
    }
    else
    {
    min = b;
    max = a;
    }

    do{
    sumfactor = min*factor;
    factor++;
    }    while (sumfactor%max != 0);

    return sumfactor;

}

int main()
{
    int a,b,max,min;

    scanf("%d %d",&a,&b);
    if (a<1 || b<1)
    {
    printf("-1");
    return 0;
    }
    max = maxcofactor(a,b);
    min = mincofactor(a,b);
    printf("%d %d",max,min);
}