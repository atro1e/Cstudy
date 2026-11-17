#include <stdio.h>

int main ()
{
    long long size;
    scanf("%lld",&size);

    long long arr[size];
    for (long long i = 0; i<size; i++) {
        scanf("%lld",&arr[i]);
    }

    long long zheng=0,fu=0,zero=0;
    for (long long i = 0;i<size;i++){
        if (arr[i] < 0) {
            fu++;
        }
        else if (arr[i] > 0) {
            zheng ++;
        }
        else{
            zero++;
        }
    }

    printf("%lld %lld %lld",zheng,fu,zero);
    return 0;
    
}