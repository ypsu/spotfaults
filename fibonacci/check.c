#include <stdio.h>

int main(void) {
  int n;
  if (scanf("%d ", &n) == 1) {
    if (n < 0) {
      puts("bad input, too small number.");
      return 1;
    }
    if (n > 90) {
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
