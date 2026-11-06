#include <stdio.h>

void gswap(void *a, void *b, size_t n);


int main ()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    gswap(&a, &b, sizeof(long long int));
    printf("%lld %lld",a,b);
    return 0;
}


void gswap(void *a, void *b, size_t n)
{
//    void *temp;
    unsigned char temp;
    unsigned char *arra = a;
    unsigned char *arrb = b;
    for (size_t i = 0;i<n;i++){
        temp = *(arra + i);
        *(arra + i) = *(arrb + i);
        *(arrb + i) =  temp;
    }
}