#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a, sum;

    for (int i = 1; i <= n; i++) {
        a = i;
        sum = a;
        while (a > 0) {
            sum += a % 10;
            a /= 10;
        }
        if (sum == n) {
            printf("%d", i);
            return 0;
        }
    }

    printf("0");
}