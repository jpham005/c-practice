#include <stdio.h>

int main() {
    int n, a, b;
    scanf("%d", &n);
    
    if (n == 1 || n == 2 || n == 4 || n == 7) {
        printf("-1");
        return 0;
    }

    if (n % 5 == 0) {
        printf("%d", n / 5);
        return 0;
    }

    if ((n % 5) % 3 == 0) {
        a = (n % 5) / 3;
        b = n / 5;
        printf("%d", a + b);
        return 0;
    }

    for (int i = 1; i <= n / 5; i++) {        
            if ((n - (5 * (n / 5 - i))) % 3 == 0) {
                a = (n - (5 * (n / 5 - i))) / 3;
                b = n / 5 - i;
                printf("%d", a + b);
                return 0;
            }
    }
}