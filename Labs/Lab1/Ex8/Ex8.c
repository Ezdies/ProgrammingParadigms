#include <stdio.h>

int iloczyn_skalarny(int *x, int *y, int n) {
  int result = 0;
  for (int i = 0; i < n; i++) {
    result += x[i] * y[i];
  }
  return result;
}

int main() {
  const int n = 4;
  int x[] = {3, 5, 6, 7};
  int y[] = {1, 2, 3, 4};

  printf("%d\n", iloczyn_skalarny(x, y, n));
}