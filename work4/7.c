#include <stdio.h>

int main ()
{
    int size;
    scanf("%d",&size);
    long long int arr[size];
    for (int i = 0;i<size;i++){
        scanf("%lld",(arr + i));
    }


    int bef,aft;
    scanf("%d %d",&bef,&aft);
    long long int sum = 0;
    for(int i =bef;i< aft + 1;i++){
        sum = sum + *(arr + i);
    }

    printf ("%lld",sum);
    return 0;
}