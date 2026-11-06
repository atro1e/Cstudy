#include <stdio.h>


int main() {
  int a[100], n, i, j,t,p; // n是数组长度,i是几个数，j是外层排序几次,t是零时变量,m是次数
  scanf("%d", &n);

    i = 0;  // 改动1:把i的作用域放到整个main函数

  for (; i < n; i++) {
    scanf("%d",&a[i]);
  }//此时 i = n-1


  for (j= 0; j < i; j++) {  //这里i是不是没有定义了?因此循环是否会出现下标越界情况?  而且是否可以是j<n?
    for (i = 0; i < n - j; i++) {  
      if (a[i] < a[i + 1]) {
        t = a[i];
        a[i]=a[i+1];
        a[i+1]=t;//  进行相邻两个元素的冒泡交换
      }
    }
  }    //数组排序



  int b[50]; // 用于统计次数的数组，虽然似乎有些过于繁琐
  for (p = 0; p < 50; p++)
    b[p]=1;

  for (i = 0,p=0; i < n; i++) {
    if (a[i] - 1 == a[i + 1] && a[i+1]!=0) {  //i=n的时候呢?数组是否可能越界?
      b[p]++;
    }
    else {
    p++;
    }
  }
  for (j= 0; j < p; j++) {
    for (p = 0; p < n - j; p++) {
      if (b[p] < b[p + 1]) {
        t = b[p];
        b[p]=b[p+1];
        b[p+1]=t;
      }
        
    }
  }
  printf("%d", b[0]);
  return 0;
}