#include<stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b);
int gpsitv(int min,int *arr,int size);


#define arrlength 100002

int main ()
{
    int inputarr[arrlength][2] = {0,0};   //数组0是原始值 1是在排序后的新数组位置
    int arrsize;
    int opnum;
    scanf("%d %d",&arrsize,&opnum);

    for (int i =0;i<arrsize;i++){
        scanf("%d ",&inputarr[i][0]);
    }

    int aftarr[arrsize];
    for (int i = 0;i<arrsize;i++){
        aftarr[i] = inputarr[i][0];
    }

    qsort(aftarr, arrsize, sizeof(aftarr[0]), cmp);

    



}

int cmp(const void *a,const void *b)
{
    return *((int *)a) - *((int *)b);
}

int gpsitv(int min,int *arr,int size)
{

    int lbt;
    int mid = size / 2; //*(arr + lbt)和之前的数 全部小于等于min
    lbt = mid;

    while(1)
    {   

        if (*(arr + lbt) <= min && *(arr + lbt + 1) >min){
            return lbt;
        }
        

        if (*(arr +lbt) < min){
            mid = size/2;
            size = size /2;
        }else if (*(arr +lbt) > min){
            mid = mid + size/2;
            size = size /2;  
        }else if(*(arr +lbt) > min){
            lbt++;
        }
    }
}