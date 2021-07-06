#include <stdio.h>

int main() {
  char s[101];
  scanf("%s%s", s, s);

  int sum = 0;
  for (char* ch = s; *ch != 0; ch++) {
    sum += (*ch) & 15;
  }
  printf("%d\n", sum);
}
