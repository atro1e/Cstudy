#include <stdio.h>

int main() {
    double a,pie;
    pie = 3.14159;
    scanf("%lf", &a);
    printf("%.4lf %.4lf %.4lf", 2*a,2*pie*a, pie*a*a);
    return 0;
}