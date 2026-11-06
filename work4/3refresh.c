//已知:所有子数组中有且仅有一个最大值.size为n的数组有n*(n-1)/2个子数组.
//一个元素x在一个数组的所有子数组中至少出现的次数取决于其所在的位置.位置为i的元素出现的次数是i*(n-i+1).,相当于对finalsum有i*(n-i+1)*x的贡献.
//之后把这个数组的元素总数减一再重复即可?
//使用库stdlib白嫖最优的排序算法 之后从前往后做就可以了
//如果有数个重复的元素怎么办?不用担心 肯定存在n1 = n2但是n1 n2不同时出现的情况 这个时候并不需考虑重复

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b);

int main()
{
    long long size ;
    scanf("%lld",&size);

    long long inarr[size];
    for(long long i = 0;i < size;i++){
        scanf("%lld",&inarr[i]);
    }

    //qsort(arr, size, sizeof(long long), cmp);


}

int cmp(const void *a,const void *b)
{
    long long vala = *((long long *)a);
    long long valb = *((long long *)b);

    if (vala > valb) {
    return 1;
    }
    if (valb > vala) {
    return -1;
    }
    return 0;

}

