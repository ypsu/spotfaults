#include <stdio.h>
#include <string.h>

int main(void) {
  for (int i = 0; i < 2; i++) {
    char str[110];
    if (scanf("%105s", str) != 1) {
      puts("not enough input.");
      return 1;
    }
    if (strlen(str) > 100) {
      puts("input string too long.");
      return 1;
    }
  }
  return 0;
}
