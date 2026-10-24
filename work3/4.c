#include<stdio.h>
int main()

{
char inchar[20];

int inin[20]={};
for (int i =0;i<20;i++)
inin[i]=-1;


scanf("%s",inchar);
for(int i=0;i<20;i++)
{
if (inchar[i]=='\0')
break;
inin[i]=inchar[i]-'0';
}
int weishu=0;

while(1)
{
    if(inin[weishu]==-1)
    break;

    weishu++;

}

int sum=0;
for(int i=0;i<=weishu-1;i++)
{
    sum = sum+inin[i];
}

printf("%d %d",weishu,sum);
return 0;
}


