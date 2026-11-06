#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b);

int main()
{
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i = 0;i < size;i++){
        scanf("%d",&arr[i]);
    }

    qsort(arr, size, sizeof(int), cmp);




    int maxsize = 0;
    int tempsize = 0 + 1;

    for(int i = 0;i<size;i++){

        if( i == size - 1){
            if (tempsize > maxsize) {
            maxsize = tempsize;
            }
            break;
        }

        if(*(arr + i + 1) == *(arr + i) +1 ){
            tempsize ++;
            continue;
        }

        if(*(arr + i + 1) == *(arr + i) ){
        continue;
        }

        if (tempsize > maxsize) {
            maxsize = tempsize;
            tempsize = 0 + 1;
        }else {
        tempsize = 0 + 1;
        }
    }

    printf("%d",maxsize);
    
    return 0;
}


int cmp(const void *a,const void *b)
{
    return  *((int*)a) - *((int *)b);
}