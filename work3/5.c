#include<stdio.h>
int main()
{
    int in;
    scanf("%d",&in);
    
    int inarr[in];
    for (int i=0;i<in;i++){
    scanf("%d",&inarr[i]);
    }


    int zheng=0,fu=0,zero=0;
    for (int i =0;i<in;i++)
    {
        if(inarr[i]>0)
        zheng+=1;
        else if(inarr[i]<0)
        fu +=1;
        else if(inarr[i] == 0)
        zero+=1;
    else
     printf("滚木?!");
    }
    printf("%d %d %d",zheng,fu,zero);

}