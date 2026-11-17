#include <stdio.h>
int main() {
  int a[100];
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  //////////////////////////////////////
  for (int i = 0; i < n - 1; i++) {  //
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        int t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
      }
    }
  }



  int max_len = 1;
  int cur_len = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] == a[i - 1] + 1) {  //
      cur_len++;
      if (cur_len > max_len) {
        max_len = cur_len;
      }
    } else {
      cur_len = 1;
    }
  }

  
  printf("%d", max_len);
  getchar();
  getchar();
  return 0;
}