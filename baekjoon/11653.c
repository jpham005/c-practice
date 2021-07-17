#include <stdio.h>

int main() {
    int n, num;
    scanf("%d", &n);
    num = n;

    if (n == 1)
        return 0;

    for (int i = 2; i <= n; i++) {
         while (num % i == 0) {
            printf("%d\n", i);
            num /= i;  
        }
    }

    return 0;
}