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
  // automatic sign conversions can hurt.
  int len = strlen(s), pos = findchar(s, ch[0]);
  if (pos >= len / 2) {
    puts("true");
  } else {
    puts("false");
  }
  return 0;
}
