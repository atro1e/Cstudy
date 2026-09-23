#include<stdio.h>
int main() {
    long long n,timesum = 1;
    scanf("%lld",&n);
    while(n >0)
    {
        timesum = n*timesum;
        n--;
    }
    printf("%lld\n",timesum);
    return 0;
}
