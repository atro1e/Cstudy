#include <stdio.h>//调用stdio标准库
int main() //主函数
{   
    long long timesum,numsum,input,nowtime;
    input = 0;
    numsum = 0;
    nowtime =0;
    scanf("%lld",&timesum);
    while(nowtime < timesum)
        {
            scanf("%lld",&input);
            numsum=numsum + input;
            nowtime +=1;
        }
    printf("%lld\n",numsum);
    return 0;//抛出退出码0
}