#include <stdio.h>

int n, m;
int a[1000], b[1000];

int main(void) {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) scanf("%d", &a[i]);
  scanf("%d", &m);
  for (int i = 0; i < m; i++) scanf("%d", &b[i]);
  int x = 0, y = 0;
  while (x < n && y < m) {
    if (a[x] == b[y]) {
      x++;
      y++;
    } else if (a[x] < b[y]) {
      printf("%d\n", a[x++]);
    } else {
      y++;
    }
  }
  return 0;
}
