#include <stdio.h>

int main(void) {
  // the good old integer overflow.
  long long n;
  scanf("%lld", &n);
  printf("%lld\n", 2 * n);
  return 0;
}
