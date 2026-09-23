#include<stdio.h>
int main()
{
    int score;

    scanf("%d",&score);

        if (score >=90)
        printf("%c",'A');
        else if (score >79 && score < 90)
        printf("%c",'B');
        else if (score >69 && score < 80)
        printf("%c",'C');
        else if (score >59 && score < 70)
        printf("%c",'D');
        else if ( score < 60)
        printf("%c",'E');
        
    return 0;
}