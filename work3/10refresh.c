#include<stdio.h>

void inputarr(int *arr,int length);
void sequence_arr(int *,int);  //排序算法  



int main()
{
    int length1,length2;
    scanf("%d %d",&length1,&length2);

    int arr1[length1],arr2[length2];

    inputarr(arr1, length1);
    inputarr(arr2, length2);


    sequence_arr(arr1, length1);
    sequence_arr(arr2, length2);
//完成数组初始化和数组排序
    int *longarr,*shortarr;
    int longlength,shortlength;
    if (length1 >=length2){
        longarr = arr1;
        shortarr = arr2;
        longlength = length1 ; 
        shortlength = length2 ;
    }
    else{
        longarr = arr2;
        shortarr = arr1;
        longlength = length2 ;
        shortlength = length1 ;   
    }

    int *lpo,*spo;//分别对应指向长数组短数组的指针
    lpo = longarr;
    spo = shortarr;
    int finalarr[longlength];
    int ninl=0,nins=0;

    int k=0;//K是最终数组中整数的个数

    int nowinfinalarr = 0;
    while(nins < shortlength && ninl < longlength)
    {
        if (*spo < *lpo){
            spo++;
            nins++;
        }
        else if(*spo == *lpo){
            finalarr[nowinfinalarr]= *spo;
            nowinfinalarr ++ ;
            spo++;
            nins++;
            lpo++;
            ninl++;
            k++;
        }
        else if (*spo > *lpo){
            lpo ++;
            ninl++;
        }
    }

printf("%d\n",k);

for (int i = 0;i<k;i++){
    printf("%d ",finalarr[i]);
}
}



void inputarr(int *arr,int length)//辅助数组输入初始化函数
{
for(int i = 0;i<length;i++)
    {
        scanf("%d",(arr+i));
    }
}

void sequence_arr(int *arr,int length)  //排序算法  
{
    int smallest;
    int temp;
    int smloca = 0; //最小元素在数组的位置
    smallest = *arr;
    for (int i= 0;i<length;i++)
    {
        for (int j=i;j<length;j++){
            if (*(arr+j)<smallest)
            {
                smallest = *(arr+j);
                smloca = j;
            }
        }
    temp = *(arr+i);
    *(arr+i) = smallest;
    *(arr +smloca) = temp;
    smloca = 0;
    temp = 0;
    smallest = 2147483647;
    }
}