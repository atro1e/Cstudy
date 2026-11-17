#include <stdio.h>

#define maxsize 102

int main()
{
    int arr1[maxsize][maxsize] = {0,0};
    int arr2[maxsize][maxsize] = {0,0};


    int hang,lie;
    scanf("%d %d",&hang,&lie);

    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < lie; j++) {
            scanf("%d",&arr1[i][j]);
        }
        for (int j = 0; j < lie; j++) {
            scanf("%d",&arr2[i][j]);
        }
    }

    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < lie; j++) {
            printf("%d ",arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}