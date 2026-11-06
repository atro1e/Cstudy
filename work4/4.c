#include <stdio.h>
#include <stdlib.h>

#define size 1000

int main ()
{
    char *arr = malloc(1+size*sizeof(char));

    for (int i =0;i<size;i++){
        *(arr+i) = '\0';
    }


    scanf("%s",arr);

    int i= 0;
    for(;*(arr+i)!='\0';){
        i++;
    }

    i--;


    for(;i>=0;i--){
        printf("%c",*(arr + i));
    }

    free(arr);

    return 0;
}