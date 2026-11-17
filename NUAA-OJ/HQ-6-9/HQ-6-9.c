#include<stdio.h>
#include <stdlib.h>
#include <string.h>

void cutstr(const char *bigstr,char *temp,int smallsize,int loc);


int main()
{
    char *str = malloc(201);
    scanf("%s",str);

    char *small = malloc(21);
    scanf("%s",small);

    char *temp = malloc(21);

    int size = strlen(str);

    if (strlen(small) > size) {
        printf("-1\n0\n");
        return 0;
    }

    int sum = 0;

    int first = 0;
    for(int i = 0; i < size - strlen(small) + 1 ;i++){
        cutstr(str,temp,strlen(small),i);
        if(strstr(temp,small) != NULL ){
            sum +=1;
            first ++;
            if (first == 1) {
                printf("%d\n",i + 1);
            }
        } 
    }

    if (first == 0) {
    printf("-1\n0\n");
    free(str);
    free(small);
    free(temp);
    return 0;
    }

    printf("%d\n",sum);
    free(str);
    free(small);
    free(temp);
    return 0;
}

void cutstr(const char *bigstr,char *temp,int smallsize,int loc)
{
    strncpy(temp, bigstr + loc, smallsize);
    *(temp + smallsize) = '\0';
}
