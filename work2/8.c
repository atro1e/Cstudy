#include<stdio.h>
int main()
{
    double days,k,nowlength;//对应当前时间,输入高度,当前高度
    nowlength=0;
    days = 1;
    scanf("%lf",&k);
    while ("iloveatri")
    {
        nowlength = 16/days + nowlength;
        if (nowlength>=k)
        {
            printf("%.0f",days);
            return 0 ;
        }
        if (days >= 365)
        {
            printf("-1");
            return 0;
        }
        else
            days++;
    } 
     
    
}