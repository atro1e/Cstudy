#include <stdio.h>

void findMinMax(int *a, int n, int *minimum, int *maximum);

int main() {
  int length;
  scanf("%d", &length);

  int arr[length];
  for (int i = 0; i < length; i++) {
    scanf("%d", &arr[i]);
  }
  int min, max;

  findMinMax(arr, length, &min, &max);
  printf("%d %d", min, max);
  return 0;
}

void findMinMax(int *a, int n, int *minimum, int *maximum) {
  *minimum = *a;
  *maximum = *a;

  for (int i = 0; i < n; i++) {
    if (*(a + i) < *minimum) {
      *minimum = *(a + i);
    }
    if (*(a + i) > *maximum) {
      *maximum = *(a + i);
    }
  }
} 