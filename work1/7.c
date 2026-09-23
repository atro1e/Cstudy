#include <stdio.h>

int main() {
    int n,m;
    scanf("%d" ,&n);

    m = n % 2;    

    if (m == 1)
        printf("%d",1);
    else 
        printf("%d",0);
    return 0;
}