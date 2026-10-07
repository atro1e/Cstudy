#include<stdio.h>
int multi(int in){
    int result;
    result = 1;
    
    for (int i = in ;i > 0 ;i --)
    {
    result = result * i;
    }
    return result;
}

int main()
{
    int input,result;
    result = 0;
    scanf("%d",&input);
    if (input <1)
        printf("-1");
    else
        {
        for (int i= input;i >0;i--)
        result = multi(i)+result;
        printf("%d\n",result);
        }
    
}