#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char *str;
    str = malloc(130);
    scanf("%s",str);

    int big = 0, small = 0,num = 0;

    int size = strlen(str);
    char nowletter;
    for (int i = 0; i < size; i++) {
        nowletter = *(str + i);
        if (nowletter >= 'a'  && nowletter <= 'z') {
            small++;
        }else if (nowletter >='A' && nowletter <='Z') {
            big++;
        }else{
            num++;  //祈祷用户不会输入非法字符
        }
    }

    printf("%d %d %d",big,small,num);

    free(str);
    return 0;
}