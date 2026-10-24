#include <stdio.h>

void xiangqianxiangqianxiangqian(int *,int,int);


int main()
{
    int length,val;
    scanf("%d %d",&length,&val);

    int arr[length];

    for (int i = 0;i<length;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0;i<length;i++)
    {
        if (arr[i] == val)
        {
            xiangqianxiangqianxiangqian(arr,i,length);
            i--;
        }
    }
    
    //没看到题目还要整数k 
    int k = 0;
    for(;k<length;k++)
    {
        if(arr[k] == -1)
        {
            break;
        }
    }
    printf("%d\n",k);



    for (int i = 0;i<length;i++)
    {
    if(arr[i]!=-1)
    {
        printf("%d ",arr[i]);
    }
    }
    return 0;
}

void xiangqianxiangqianxiangqian(int *arr,int now,int length)
{
    for ( ;now<length-1;now++)
    {
    *(arr+now) = *(arr +now+1);
    }
    *(arr + length - 1)=-1;
}