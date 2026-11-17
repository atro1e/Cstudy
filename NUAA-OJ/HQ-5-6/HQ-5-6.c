#include <stdio.h>

void bubble(int *arr, int size,int *num);

int main()
{
    int num = 0,size;
    scanf("%d",&size);

    int arr[size];
    for (int i = 0; i <size; i++) {
        scanf("%d",arr + i);
    }

    bubble(arr, size, &num);

    printf("%d",num);

    return 0;
}
    
    
    
    
void bubble(int *arr, int size,int *num)
{
    int temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                *num +=1;
            }
        }
    }
}