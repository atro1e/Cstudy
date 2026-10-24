#include<stdio.h>

void swap_arr(int a[][2], int b[][2] ,int nowarr);


int main()
{
    int t;
    scanf("%d",&t);
    int in[t][2];
    int temp[t][2];
    for (int i=0;i<t;i++)
    {
        scanf("%d %d",&in[i][0],&in[i][1]);
    }


    for(int i=0;i<t;i++)
    {
        swap_arr(in,temp,i);
    }


    for(int i=0;i<t;i++)
    printf("%d %d\n",in[i][0],in[i][1]);
}



void swap_arr(int a[][2], int b[][2] ,int nowarr)
{
    b[nowarr][0] = a[nowarr][0];
    b[nowarr][1] = a[nowarr][1];
    a[nowarr][0] = b[nowarr][1];
    a[nowarr][1] = b[nowarr][0];
}