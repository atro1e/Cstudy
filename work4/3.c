#include <stdio.h>

long long sumforchild(long long *arr,long long size,long long length);

int main ()
{
    long long size ;
    scanf("%lld",&size);

    long long arr[size];
    for(long long i = 0;i < size;i++){
        scanf("%lld",&arr[i]);
    }

    long long sum = 0;
    for(long long i = 1;i<=size;i++){
        sum = sum +sumforchild(arr, size, i);
    }

    printf("%lld",sum);

    return 0;
}



long long sumforchild(long long *arr,long long size,long long length)  //数组;数组大小;子数组长度
{
    long long sum = 0;
    for(long long i=0;i<(size-length+1);i++){
        long long max = *(arr + i);
        for(long long j = 0;j<length;j++){
            if(*(arr + i + j) > max){
                max = *(arr + i + j);
            }
        }
        sum = sum + max;
    }

    return sum;
}