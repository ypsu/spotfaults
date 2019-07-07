# greatest common divisor

the greatest common divisor between `a` and `b` is defined as the largest number
which divides the two numbers without remainders.

given `a` and `b` find `gcd(a, b)`.

## constraints

- 0 <= `a`, `b` <= 1000

## examples

### example 1

```
2 3
```
```
1
```

### example 2

```
7 14
```
```
7
```

### example 3

```
10 15
```
```
5
```

## solution

```c
#include <stdio.h>

int gcd(int a, int b) {
  if (a == 0 || b == 0) return a + b;
  return gcd(b - a, a);
}

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", gcd(a, b));
  return 0;
}
```
