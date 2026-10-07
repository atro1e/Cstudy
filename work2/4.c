#include<stdio.h>

double jueduizhi (double a,double b)
{
    if (a > b)
    return a-b;
    else
    return b-a;
}

int main()
{
    double input,nin,nnin;//分别对应原始输入,前一次和后一次迭代
    scanf("%lf",&input);
    if (input < 0)
    {
    printf("-1");
    return 0;
    }

    if (input == 0)
    {
    printf("0.0000");//出题人好坏呀
    return 0;
    }

    nin = input;
    nnin =  0.5*(nin+input/nin);//完成第一次迭代并初始赋值
        while (jueduizhi(nin,nnin)>=1e-5)
        {
        nin = nnin;
        nnin =  0.5*(nin+input/nin);
        } 
    printf("%.4f\n",nnin);
    

}