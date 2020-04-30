# only the second half

given string `s` and character `ch`, determine if only the second half of `s`
contains `ch` or not. e.g. "tomato" => "tom" "ato": "a" is only contained only
in the second half, while "t" is not because the first half contains it, and "m"
is not either because the second half doesn't contain it.

## constraints

- `s` has even length
- 2 <= `strlen(s)` <= 100
- `s` and `ch` can contain only lowercase english letters

## examples

### example 1

```
tomato o
```
```
false
```

### example 2

```
tomato a
```
```
true
```

### example 3

```
tomato m
```
```
false
```

## solution

```c
#include <stdio.h>
#include <string.h>

// Return the position of ch in s. Return -1 if not found.
static int findchar(char *s, char ch) {
  char *q = s;
  while (*q != 0) {
    if (*q++ == ch) return q - s;
  }
  return -1;
}

int main(void) {
  char s[110], ch[2];
  scanf("%s %s", s, ch);
  size_t len = strlen(s), pos = findchar(s, ch[0]);
  if (pos >= len / 2) {
    puts("true");
  } else {
    puts("false");
  }
  return 0;
}
```
