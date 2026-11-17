    #include<stdio.h>
    #include <stdlib.h>

    typedef struct plane{
        int rank;
        int id;
        int val;
    } plane;

    int cmp(const void *a,const void *b);
    void bubble(plane *arr,int size);

    int main()
    {
        int size;
        scanf("%d",&size);

        plane arr[size];
        for (int i = 0; i < size; i++) {
            scanf("%d",&arr[i].val);
            arr[i].id = i + 1;
        }

        bubble(arr, size);

        for (int i =0; i < size; i++) {
        if (arr[i].val == arr[i-1].val ){
            arr[i].rank = arr[i-1].rank;
            continue;
        }
        arr[i].rank = i +1;
        }

        int min,max;

        min = arr->val;
        max = arr[size - 1].val;

        //qsort(arr, size,sizeof(plane), cmp);

        for (int i = 0; i < size; i++) {
            printf("%d ",arr[i].id);
        }
        printf("\n");

        printf("%d %d",min,max);

        return 0;
    }

    void bubble(plane *arr, int size)
    {
        plane temp;

        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - 1 - i; j++) {
                if (arr[j].val > arr[j + 1].val) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    int cmp(const void *a,const void *b)
    {
        const plane *x = a;
        const plane *y = b;


        return x->id - y->id;  //显然数据加减都在int范围内 
    }