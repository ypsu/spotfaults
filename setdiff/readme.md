# set difference

given two monotonically increasing list of integers (`n` and `m` long), print
the numbers that appear in first but not in the second.

the first line contains number `n` then `n` numbers follow, describing the first
list. the second line contains number `m` then `m` numbers follow.

the output is just the numbers that only appear in the first list, one per line.

## constraints

- 0 <= `n`, `m` <= 1,000
- each number in the lists is between 0 and 1,000,000, inclusively
- the lists are monotonically increasing

## examples

### example 1

```
1 1
1 1
```
```
```

### example 2

```
1 1
1 2
```
```
1
```

### example 3

```
3 1 2 3
3 2 4 5
```
```
1
3
```

## solution

```c
#include <stdio.h>

int n, m;
int a[1000], b[1000];

int main(void) {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) scanf("%d", &a[i]);
  scanf("%d", &m);
  for (int i = 0; i < m; i++) scanf("%d", &b[i]);
  int x = 0, y = 0;
  while (x < n && y < m) {
    if (a[x] == b[y]) {
      x++;
      y++;
    } else if (a[x] < b[y]) {
      printf("%d\n", a[x++]);
    } else {
      y++;
    }
  }
  return 0;
}
```
