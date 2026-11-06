#include <limits.h>
#include <stdint.h>
#include <stdio.h>

int valcal(int *arr,int stn,int now);

int main ()
{
    int size,stn;  // stn是题目中的k
    scanf("%d %d",&size,&stn);

    int arr[size];

    for (int i = 0;i<size;i++){
        scanf("%d",arr + i);
    }

    int maxlct = 0;
    int maxval = INT_MIN;

    for (int i=0;i< size-stn + 1;i++){
        if (valcal(arr, stn, i) > maxval){
            maxlct = i;
            maxval = valcal(arr, stn, i);
        }
    }

    printf("%d",maxlct);
    return 0;
}



int valcal(int *arr,int stn,int now)
{
    int sum = 0;
    for (int i =now;i<now + stn;i++){
        sum = sum + *(arr +i);
    }
    return sum;
}