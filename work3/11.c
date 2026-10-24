#include <stdio.h>
#include <stdlib.h>

void inputarr(int *arr,int length);

int main ()
{
    int length1,length2,dis;
    scanf("%d %d %d",&length1,&length2,&dis);

    int arr1[length1],arr2[length2]; 

    inputarr(arr1,length1);
    inputarr(arr2,length2);


    int out = length1; //满足要求的值

    for(int i=0;i<length1;i++)
    {
        for(int j = 0;j<length2;j++)
        {
            if (abs(arr1[i] - arr2[j]) <= dis){
                out --;
                goto xiayilun;
            }
        }
    xiayilun:continue;
    }
    printf("%d\n",out);
    return 0;

}




void inputarr(int *arr,int length)//辅助数组输入初始化函数
{
for(int i = 0;i<length;i++)
    {
        scanf("%d",(arr+i));
    }
}


