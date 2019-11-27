#include <stdio.h>

int n;
int a[100];

int smallercnt(int limit) {
  int e = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] <= limit) e++;
  }
  return e;
}

int main(void) {
  int k;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) scanf("%d", &a[i]);
  int lo = 0;
  int hi = 2000000000;
  while (lo <= hi) {
    // mind the integer overflow at the higher end.
    int mid = lo + (hi - lo) / 2;
    if (smallercnt(mid) < k) {
      lo = mid + 1;
    } else {
      hi = mid - 1;
    }
  }
  printf("%d\n", lo);
  return 0;
}
