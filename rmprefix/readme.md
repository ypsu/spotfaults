# remove the prefix

given two strings (one per line), `str` and `prefix`, remove `prefix` from
`str`'s beginning and print what remains. if `str` doesn't start with `prefix`,
just report an error.

## constraints

- both strings consist of lowercase english letters
- both strings' length is between 1 and 100 characters

## examples

### example 1

```
prefixedstring
prefix
```
```
edstring
```

### example 2

```
apple
pear
```
```
error
```

### example 3

```
string
stringstring
```
```
error
```

## solution

```c
#include <stdio.h>

static const char *stripprefix(const char *str, const char *prefix) {
  while (str && *str == *prefix) {
    str++;
    prefix++;
  }
  if (!*prefix) return str;
  return NULL;
}

int main(void) {
  char a[110] = "";
  char b[110] = "";
  scanf("%s %s", a, b);
  const char *p = stripprefix(a, b);
  if (p) {
    puts(p);
  } else {
    puts("error");
  }
  return 0;
}
```
