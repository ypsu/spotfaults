#include <stdio.h>
#include <string.h>

int main(void) {
  for (int i = 0; i < 2; i++) {
    char str[110];
    if (scanf("%105s ", str) != 1) {
      puts("not enough input.");
      return 1;
    }
    int len = strlen(str);
    if (len > 100) {
      puts("input string too long.");
      return 1;
    }
    for (int i = 0; i < len; i++) {
      if (str[i] < 'a' || 'z' < str[i]) {
        puts("input string has invalid characters.");
        return 1;
      }
    }
  }
  if (!feof(stdin)) {
    puts("too much input.");
    return 1;
  }
  return 0;
}
