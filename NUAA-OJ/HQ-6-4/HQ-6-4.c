#include <stdio.h>
#include <string.h>


int main()
{
    char str[14];
    scanf("%s",str);
    int size = strlen(str);

    if (size !=7 || *str == '0') {
        printf("FORMAT ERROR\n");
        return 0;
    }

    for (int i = 0; i < 7; i++) {
        if (*(str + i) < '0' || *(str + i) > '9') {
        printf("FORMAT ERROR\n");
        return 0;
        }
    }

    int sumid = 0;
    int loc = 0;
    for (int i = 7; i > 1;i--) {
        sumid += i * (*(str + loc) - '0');
        loc ++;
    }

    sumid = sumid % 10;
    printf("%d\n",sumid);

    if (sumid != *(str + 6) - '0') {
        printf("INVALID\n");
    }else {
        printf("VALID\n");
    }

    for(int i = 0; i < 6; i++){ //硬编码真该死啊,但是我就这么做
        printf("%c",*(str+i));
    }
    printf("%d",sumid);
    printf("\n");

}