#include <stdio.h>

/**
 * 올림 나눗셈
 * @param a 피제수
 * @param b 제수
 * @return ceil(a / b)
 */
int ceil_div(int a, int b) {
  return (a + b - 1) / b;
}

int main() {
  int a, b, v;

  scanf("%d %d %d", &a, &b, &v);
  printf("%d", ceil_div(v - a, a - b) + 1);
}