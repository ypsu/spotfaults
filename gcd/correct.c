#include <stdio.h>

int gcd(int a, int b) {
  if (a == 0 || b == 0) return a + b;
  // when a > b the program recursed infinitely.
  if (b > a) {
    return gcd(b - a, a);
  } else {
    return gcd(a - b, b);
  }
}

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", gcd(a, b));
  return 0;
}
