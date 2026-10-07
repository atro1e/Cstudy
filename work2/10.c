#include<stdio.h>
int main()
{
    long int in,n=100,i=0;
    scanf("%ld",&in);

    if (in == 0)
    {
        printf("0");
        return 0;
    }

    char nnum[16] ={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    //上面对应"原数据除以16后对应的位数上的符号"

    char output[100]={0};
    while (in>0)
    {
        output[n-1]=nnum[in%16];
        in = in/16;
        n -= 1;
    }

    while(1)
    {

    if (output[i]!=0)
    break;

    i++;
    }

    for(i;i<=99;i++)
    printf("%c",output[i]);
printf("\n");
}
