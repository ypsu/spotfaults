#include <stdio.h>

int main(void) {
  int n, k;
  if (scanf("%d %d", &n, &k) != 2) {
    puts("bad input, missing n and k.");
    return 1;
  }
  if (n < 1 || n > 100) {
    puts("bad input, n out of range.");
    return 1;
  }
  if (k < 1 || k > n) {
    puts("bad input, k out of range.");
    return 1;
  }
  for (int i = 0; i < n; i++) {
    int a;
    if (scanf("%d ", &a) != 1) {
      puts("bad input, couldn't read the full array.");
      return 1;
    }
    if (a < 0 || a > 2000000000) {
      printf("bad input, %dth element out of range.\n", i);
      return 1;
    }
  }
  if (!feof(stdin)) {
    puts("bad input, too much input.");
    return 1;
  }
  return 0;
}
