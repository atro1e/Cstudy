#include <stdio.h>


int main ()
{
    int size,opn;
    scanf("%d %d",&size,&opn);
    int arr[size];
    for (int i = 0;i<size;i++){
        scanf("%d ",arr+i);
    }

    for (int i=0;i<opn;i++){
        int up,down,min;
        scanf("%d %d %d",&up,&down,&min);

        int times = 0;
        for (;up<=down;up++){
            if(arr[up - 1] <= min ){
                times++;
            }
        }
        printf("%d\n",times);
    }
}