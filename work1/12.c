#include<stdio.h>
int main()
{
    int num;
    for(int i=0;i<4;i++)
    {
        num = 0;
        while (num<i)
        {
            
            printf("%c",'*');
            num++;
        }
        printf("%c\n",'*');

    }


    return 0;
}
