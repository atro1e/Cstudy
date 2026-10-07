#include <stdio.h>


int prime_judge(int in);
int pail_judge(int in);

int main ()
{
    int nownum,lastnum,n=0;//分别对应一开始的数11,用户输入的数即"11到lastnum,含有两者同时满足的数的个数
    scanf("%d",&lastnum);
    for(nownum=11;nownum<=lastnum;nownum++)
    if (prime_judge(nownum) ==1 && pail_judge(nownum) ==1)
    n++;

    printf("%d\n",n);
}

int prime_judge(int in)//如果是质数就返回1,合数就是0
{
    int divisor =2;
    while(1)
    {
        if (in%divisor ==0 && in > divisor)
        return 0;
        else if (in % divisor !=0 && in > divisor)
        {
        divisor++;
        continue;
        }
        else {
        return 1;
        }
    }
}

int pail_judge(int in)//如果是回文数就返回1,非则0.
{
    //先判断位数,题目说了只考虑两位和三位
    if (in/100==0)
    {
        if (in==11)
        return 1;
        else
        return 0;
    }
    //然后只需考虑百位和各位
    int hun,one;
    hun = in/100;
    one = in%10;

    if (hun==one)
    return 1;
    else
    return 0;
}