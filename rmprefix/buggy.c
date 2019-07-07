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
