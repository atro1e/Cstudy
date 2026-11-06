#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LEN 10000

int eachstr(char *str,int loc);


int main()
{
    char str[STR_LEN] = {'\0'};

    scanf("%s",str);

    int size = (int) strlen(str);

//注意考虑数组越界  到时候不要忘了  不不不不会越界的 '\0'会救我们

    int loc = 0;

    char *tempstr = malloc(17); //对应个数的数字 避免sprintf的 \0 干扰

    for(;;){
        int length = eachstr(str, loc); //求出小数组长度

        if (length == 1) {
            loc ++;
            break;
        }

        sprintf(tempstr, "%d",length); //把小数组长度插回大数组


        for (int i = 0;;i++) {  
            if (*(tempstr + i) != '\0') {
            *(str + loc + 1) = *(tempstr + i); 
            }else {
            break;
            }
        }

        for(int j = 1;j<loc + length;j++){ //完成重复元素的清除
            if (*(str + loc + j) == *(str + loc ) ){
                *(str + loc + j) = '\0';
            }
        }

        loc = loc + length;

        if (str[loc] =='\0'){
            break;
        }
    }

    for(int i = 0;i<size;i++){
        if (*(str + i) != '\0'){
            printf("%c",*(str + i));
        }
    }

    free(tempstr);
    return 0;
}



int eachstr(char *str,int loc) //专门用来统计小字符串的长度
{
    int temp = 1;

    for (;;loc ++) {
        if (*(str +loc) != *(str + loc +1) ) {
            break;
        }

        temp++;

    }

    return temp;
}