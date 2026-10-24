#include <stdio.h>
#include <string.h>

int get_next_num(int in,int sum);
int JosephVissarionovichStalin(int a[],int length);


int main()
{
    int input;
    scanf("%d",&input);
    int in[input];
    memset(in, 0, sizeof(in));//这里我是deepseek说的 我也不知什么意思 反正数组创建万岁
    printf("NO.%d\n",JosephVissarionovichStalin(in,input));
 

}


int get_next_num(int in,int sum)
{
    if (in < sum-1)
    return in + 1;
    else
    return 0;
}


int JosephVissarionovichStalin(int a[],int length)
{
    int sum=length;
    int nowarrnum = 0;  //数组的当前位置是
    int n=1;
    int sacrifice = 0;
    while(sacrifice < length-1)
    {
        if(a[nowarrnum] ==-1)
        {
            nowarrnum = get_next_num(nowarrnum, sum);
            continue;
        }//检查这个数是否还活着

        if (n%3==0)
        {
            a[nowarrnum] = -1;
            sacrifice++;
        }
        n++;
        nowarrnum = get_next_num(nowarrnum, sum);
    }

    for (int i=0;i<length;i++)
    {
        if (a[i]!=-1){
        return i+1;}
    }
        return -1;
     ;
    
}

