#include <stdio.h>

int mem[1000];

int fibo(int x) {
  if (x <= 0) return 0;
  if (x == 1) return 1;
  if (mem[x]) return mem[x];
  mem[x] = fibo(x-1) + fibo(x-2);
  return mem[x];
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", fibo(n));
}