#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char *str = malloc(70);    
    scanf("%s",str);

    int size = (int) strlen(str);


    if (strncmp("EB90", str, 4) !=0 ) {
        printf("SYNC ERROR");
        free(str);
        return 0;
    }

    printf("SYNC OK\n");

    int check = 0;
    char *temp = malloc(3);

    for (int i = 4 ; i < size - 2;i+=2) {  //ATTENTION 步长!!
        strncpy(temp, str + i, 2);
        temp[2] = '\0'; //'0' !='\0'
        int val = strtol(temp, NULL, 16);
        check = check ^ val;

    }
    char *finalid = malloc(3);
    strncpy(finalid, str + size - 1 - 1, 2);
    finalid[2] = '\0';
    int intfinid = strtol(finalid, NULL, 16);

    if (check == intfinid ) {
        printf("CHECK OK\n");
    }else {
    printf("CHECK ERROR\n");
    }

    printf("%02X\n",check);

    free(str);
    free(temp);
    free(finalid);

    return 0;
}