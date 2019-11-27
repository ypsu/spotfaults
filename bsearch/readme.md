# binary search

given an array of `n` integers, find the `k`th smallest number in it.

## constraints

- 1 <= `n` <= 100
- 1 <= `k` <= n
- 0 <= `a[i]` <= 2,000,000,000 for `i` in `[1, n]`

## examples

### example 1

```
1 1
5
```
```
5
```

### example 2

```
5 2
5 4 3 2 1
```
```
2
```

### example 3

```
8 6
14 12 15 13 16 10 11 17
```
```
15
```

## solution

```c
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
    int mid = (lo + hi) / 2;
    if (smallercnt(mid) < k) {
      lo = mid + 1;
    } else {
      hi = mid - 1;
    }
  }
  printf("%d\n", lo);
  return 0;
}
```
