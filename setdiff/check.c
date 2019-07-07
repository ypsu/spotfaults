#include <stdio.h>

int main(void) {
  for (int i = 0; i < 2; i++) {
    int n;
    if (scanf("%d ", &n) == 1) {
      if (n < 0 || n > 1000) {
        puts("bad list length.");
        return 1;
      }
      int prevx = -1;
      for (int j = 0; j < n; j++) {
        int x;
        scanf("%d", &x);
        if (x < 0 || x > 1000000) {
          printf("number %d out of range.\n", x);
          return 1;
        }
        if (x <= prevx) {
          puts("numbers must be monotonically increasing.");
          return 1;
        }
        prevx = x;
      }
    } else {
      puts("bad input, no number found.");
      return 1;
    }
  }
  return 0;
}
