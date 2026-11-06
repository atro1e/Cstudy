#include <stdio.h>

int count_eq(const int *a, int n, int key);

int main()
{
    int n,key;
    scanf("%d %d",&n,&key);

    int arr[n];
    for (int i = 0;i<n;i++){
        scanf("%d",arr+i);
    }

    printf("%d",count_eq(arr, n, key));
    
    return 0;

}

int count_eq(const int *a, int n, int key)
{
    int times= 0;
    for (int i = 0;i<n;i++){
        if (*(a+i) == key){
            times ++;
        }
    }
    return times;
}