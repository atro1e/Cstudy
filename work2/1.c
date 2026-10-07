#include<stdio.h>
int main()
{
    int input,length,endnum;
    scanf("%d",&input);
    length = input/9; //数位长度,即包括小数点前后加起来的数长度
    endnum = (input-1)%9+1;//末尾数字
    if(input<10)
    printf("%d0%%\n",input);
    else if (input >9 && input < 19)
    {
        printf("9%d%%\n",endnum);
    }
     else if (input>18)
     {
        printf("99.");

        for(int i= (length - 2);i>0 ;i--)
        printf("9");

        printf("%d%%\n",endnum);
     }
     return 0;
}