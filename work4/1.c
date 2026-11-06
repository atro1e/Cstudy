#include <stdio.h>

#define illegal -1
#define arrlength 100002

void inputarr(int *arr,int length);//辅助数组输入初始化函数
void op1(int *a,int *now,int input);
void op2(int *a, int *now,int delete);
void op3( int *arr, int *now,int input);


int main ()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int a[arrlength];
    for(int i = 0;i<arrlength;i++){
        a[i] = -1;
    }

    inputarr(a, n);

    int nowsize = n;  //此时的nowsize是 当前数组里的元素总数

    int op,val; //对应每一次时的输入 分别对应命令(op?)和操作的数字



    for(int times = 0;times < m;times++)
    {
    scanf("%d %d",&op,&val);

        switch (op) {
        case 1:
            op1(a,&nowsize,val);
            break;
        case 2:
            op2(a,&nowsize,val);
            break;
        case 3:
            op3(a,&nowsize,val);
            break;
        }
    }

    return 0;

}

void inputarr(int *arr,int length)//辅助数组输入初始化函数
{
for(int i = 0;i<length;i++)
    {
        scanf("%d",(arr+i));
    }
}


void op1(int *a,int *now,int input)
{
    *(a + *now ) = input; //按照托莉酱说的"巧合" 那么这里就是下一个的位置不用+1
    *now +=1;
}

void op2(int *a, int *now,int delete)
{
    for(int i = 0;i<*now;i++){
        if (*(a+i) == delete){
            *(a+i) =*(a+*now - 1);
             *(a+*now - 1) = -1;
            *now -=1;
            return;
        }
    }
    printf("op2未删除任何值\n");
}

void op3( int *arr, int *now,int input)
{
    int max = 0;
    int i = 0;
    int max_val = (*(arr + i))^input;
    for (i = 0;i<*now;i++){
        if (((*(arr + i))^input)> max_val){
            max_val = ((*(arr + i))^input);
        }
    }
    printf("%d\n",max_val);
}



