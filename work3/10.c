#include <stdio.h>

void inputarr(int *arr,int length);
int one_ele_in_one_arr(int *arr,int length,int tar);
void printxn(int whattoprint,int n);

int main()
{
    int length1,length2;
    scanf("%d %d",&length1,&length2);

    int arr1[length1],arr2[length2];

    inputarr(arr1, length1);
    inputarr(arr2, length2);


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

///////////////////////////////////////////////////////////OK
    int k = 0; //k是交集元素的总数
    int botharr[longlength][2];  //分别对应[交集数字][出现次数]
    for(int i=0;i<longlength;i++){
        botharr[i][0]=-1;
        botharr[i][1]=-1;

    }

    for(int i = 0;i<longlength;i++)
    {
        for (int j=0;j<shortlength;j++)
        {
            if(*(longarr+i) == *(shortarr+j)){  //交集元素判断
                if (one_ele_in_one_arr(longarr,longlength,*(longarr+i))  <  one_ele_in_one_arr(shortarr, shortlength, *(shortarr+j))){  //长数组的该元素出现次数更少
                    k = k + one_ele_in_one_arr(longarr,longlength,*(longarr+i)) ;
                    botharr[i][1] = one_ele_in_one_arr(longarr,longlength,*(longarr+i));
                }
                else{
                    k = k + one_ele_in_one_arr(shortarr, shortlength, *(shortarr+j));
                    botharr[i][1] =one_ele_in_one_arr(shortarr, shortlength, *(shortarr+j));
                }
                botharr[i][0] = *(longarr+i);
                break;
            }
        }
    }

    printf("%d\n",k);
    for(int i=0;i<longlength;i++){
        if(botharr[i][0]!=-1){
        printxn(botharr[i][0],botharr[i][1]);
        }
    }

}

////////////////////////////////////////////////////////////////////


void inputarr(int *arr,int length)//辅助数组输入初始化函数
{
for(int i = 0;i<length;i++)
    {
        scanf("%d",(arr+i));
    }
}


int one_ele_in_one_arr(int *arr,int length,int tar)//  一个元素tar在一个数组里出现了多少次?
{
    int times = 0;
    for(int i = 0;i<length;i++)
    {
        if (*(arr+i) == tar)
        {
            times++;
        }
    }
    return times;
}

void printxn(int whattoprint,int n)
{
    for (int i=0;i<n;i++){
        printf("%d ",whattoprint);
    }
}