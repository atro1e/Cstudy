#include<stdio.h>

void onebyone(int *arr,int length);


int main()
{
    int length;
    scanf("%d",&length);
    int arr[length];
    for (int i =0;i<length;i++)
    {
        scanf("%d",arr+i);
    }
    
    onebyone(arr,length);

    for (int i = 0;i<length;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;



}

void onebyone(int *arr,int length)
{
    int upper=0,down=0;
    for(int i = 0;i<length/2;i++)
    {
        upper = *(arr+i);
        down  = *(arr + length -1 -i);
        *(arr +i)= down;
        *(arr + length -1 - i) = upper; 
    }
}