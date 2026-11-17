#include <stdatomic.h>
#include <stdio.h>

unsigned int canDiv(const unsigned int n,const unsigned int factor);


int main()
{
    int min,max,factor;
    scanf("%d %d %d",&min,&max,&factor);

    for (int i = min; i <= max; i++) {
        if (canDiv(i, factor) == 1) {
            printf("%d ",i);
        }
    }

    printf("\n");
    return 0;


}


unsigned int canDiv(const unsigned int n,const unsigned int factor)
{
    if (n % factor == 0) {
        return 1;
    }else {
        return 0;
    }
}