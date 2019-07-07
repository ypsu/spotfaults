# double the number!

given `n`, print out its value doubled.

## constraints

- 0 <= `n` <= 2,000,000,000

## examples

### example 1

```
0
```
```
0
```

### example 2

```
3
```
```
6
```

### example 3

```
5
```
```
10
```

## solution

```c
#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  printf("%d\n", 2 * n);
  return 0;
}
```
