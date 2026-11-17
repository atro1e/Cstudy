#include <stdio.h>

unsigned int factorSum(unsigned int n);


int main ()
{
    int numa,numb;
    scanf("%d %d",&numa,&numb);

    if (factorSum(numa) == numb && factorSum(numb) == numa) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }

    return 0;
}

unsigned int factorSum(unsigned int n)
{
    unsigned int sum = 1;

    if (n <= 1) {
        return 0;
    }

    for (unsigned int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            sum += i;

            if (i != n / i) {
                sum += n / i;
            }
        }
    }

    return sum;
}