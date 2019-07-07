#include <stdio.h>

long long fib(long long n) {
  if (n <= 1) {
    return n;
  } else {
    return fib(n - 1) + fib(n - 2);
  }
}

int main(void) {
  long long n;
  scanf("%lld", &n);
  printf("%lld\n", fib(n));
  return 0;
}
