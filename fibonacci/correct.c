#include <stdio.h>

long long fib(long long n) {
  // exponential algorithms are slow. let's make it linear.
  static long long cache[100];
  if (cache[n] != 0) {
    return cache[n];
  } else if (n <= 1) {
    return n;
  } else {
    cache[n] = fib(n - 1) + fib(n - 2);
    return cache[n];
  }
}

int main(void) {
  long long n;
  scanf("%lld", &n);
  printf("%lld\n", fib(n));
  return 0;
}
