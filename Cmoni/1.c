#include <stdio.h>

int main ()
{
    int size;
    scanf("%d",&size);
    
    int arr[size];
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int a=0,b=0,c=0,d=0,f=0;
    for (int i = 0; i<size; i++) {
        if (arr[i] >=90 ){
            a++;
        }else if (arr[i] < 90 && arr[i] >=80) {
            b++;
        }else if (arr[i] <80 && arr[i] >= 70) {
            c++;
        }
        else if (arr[i] < 70 && arr[i] >=60 ) {
            d++;
        }else if (arr[i] < 60) {
            f++;
        }
    }

    printf("%d %d %d %d %d",a,b,c,d,f);
    return 0;

}



