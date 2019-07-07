#include <stdio.h>

int main(void) {
  int a, b;
  if (scanf("%d %d ", &a, &b) == 2) {
    if (a < 1 || b < 1) {
      puts("bad input, too small number.");
      return 1;
    }
    if (a > 1000 || b > 1000) {
      puts("bad input, too large number.");
      return 1;
    }
    if (!feof(stdin)) {
      puts("bad input, too much input.");
      return 1;
    }
    return 0;
  } else {
    puts("bad input, no number found.");
    return 1;
  }
  return 0;
}
