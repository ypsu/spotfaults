# fibonacci printer

the fibonacci number sequence is defined as follows:

```
f[0] = 0
f[1] = 1
f[n] = f[n-1] + f[n-2]
```

given `n`, print `f[n]`.

## constraints

- 0 <= `n` <= 90
- the result will fit into a 64 bit signed integer.

## examples

### example 1

```
2
```
```
1
```

### example 2

```
5
```
```
5
```

### example 3

```
10
```
```
55
```


## solution

```c
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
```
