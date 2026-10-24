#include <stdio.h>
int main()
{
    int l,r,k;
    scanf("%d %d %d",&l,&r,&k);
    int n = 0;
    for (;l<=r;l++)
    {
        if (l%k ==0)
        {
            n = n+l;
        }
    }
    printf("%d",n);
}