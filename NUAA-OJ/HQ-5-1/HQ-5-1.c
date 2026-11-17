#include <limits.h>
#include <stdio.h>

int main ()
{
    int m,n;
    scanf("%d %d",&m,&n);

    int arr[6][6] = {0,0};

    for (int i = 0; i < m; i++) {  //这是关于m个站点的初始化
        for (int j = 0; j < n; j++) {  //这是关于J个时间的初始化
            scanf("%d",&arr[i][j]);
        }
    }

    int arrsum[6] = {0};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arrsum[i] += arr[i][j];
        }
    }

    int maxsum = INT_MIN;
    int maxloc = 0;
    for (int i = 0; i < m; i++) {
        if(arrsum[i] > maxsum){
            maxloc = i;
            maxsum = arrsum[i];
        }
    }

    printf("%d %d",maxsum,maxloc + 1);
     
}