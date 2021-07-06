#include <stdio.h>

int main() {
  int n = -123;

  scanf("%d", &n);

  double sum = 0.0;
  double max = 0.0;
  for (int i = 0; i < n; i++) {
    int tmp;
    scanf("%d", &tmp);
    sum += tmp;
    if (tmp > max) {
      max = tmp;
    }
  }
  sum /= n;
  sum *= 100 / max;

  printf("%.3lf\n", sum);

  return 0;
}