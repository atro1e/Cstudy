#include<stdio.h>

int daqingxi(int a[][2],int length);

int main()
{

int input;
scanf("%d",&input);

int in[input][2];//对应的是某一个数的唯一标识符 序号 
for(int i = 0;i<input;i++)//完成数组初始化
{
in[i][0]=i+1;
in[i][1]=i+1;
}//这样每个数初始就赋值成了(num.num),且是从1开始,比如3就是(3,3)后续只动最后的元素

printf("NO.%d",daqingxi(in,input));
return 0;
}



int daqingxi(int a[][2],int length)
{
    while(1)
    {
        int n = 0; // 对应每个数的ID 之后要累加1
        while(1)
        {
            for(int i=0;i<2;i++)
            {
            if (a[n][0]== -1)
            {
                continue;
            }//先判断这个ID 有没有被杀掉?

            a[n][1]=n+1;
            n++;

            if (n>length-1)
            break;
            

           

            if (n>length)
            {
            break;
            }
            a[n][0]=-1;
            n++;
            }
        }

    int sum = 0;
    for(int i=0;i<n;i++)
        {
            if (a[i][0]!=-1)
            {
                sum ++;
            }
        }
    if (sum ==1)
    {
        int j=0;
        for (;a[j][0]==-1;j++)  //托莉酱指点
        {
            ;  //not bug
        }
        return a[j][0];
    }
}
}

