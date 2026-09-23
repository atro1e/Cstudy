#include <stdio.h>//调用stdio标准库
int main() //主函数
{   
    int a,b,c,bigger,most;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        bigger = a;
    }
     else
    {
        bigger = b;
    }
    if (bigger > c)
    {
        most = bigger;
    }
    else
    {
        most = c;
    }
printf("%d",most);
    return 0;  //抛出退出码0
}