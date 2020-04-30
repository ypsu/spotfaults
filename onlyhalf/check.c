#include <stdio.h>
#include <string.h>

int main(void) {
  char str[110];
  if (scanf("%105s", str) != 1) {
    puts("not enough input.");
    return 1;
  }
  int len = strlen(str);
  if (len > 100) {
    puts("input string too long.");
    return 1;
  }
  if (len % 2 != 0) {
    puts("input string length not even.");
    return 1;
  }
  for (int i = 0; i < len; i++) {
    if (str[i] < 'a' || 'z' < str[i]) {
      puts("input string has invalid characters.");
      return 1;
    }
  }
  if (scanf("%105s ", str) != 1) {
    puts("not enough input.");
    return 1;
  }
  if (strlen(str) != 1) {
    puts("input character is not a single character.");
    return 1;
  }
  if (str[0] < 'a' || 'z' < str[0]) {
    puts("input character is not an english letter.");
    return 1;
  }
  if (!feof(stdin)) {
    puts("too much input.");
    return 1;
  }
  return 0;
}
