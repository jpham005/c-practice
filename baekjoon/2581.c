#include <stdio.h>

int prime(int a) {
    for (int b = 2; b < a; b++) {
        if (a % b == 0) {
            return 0;
        }
    }

    if (a == 1) return 0;
    
    return 1;
}

int main() {
    int m, n, min, sum = 0;
    scanf("%d %d", &m, &n);

    for (int i = m; i <= n; i++) {
        if (1 == prime(i))
            sum += i;
    }

    for (int i = m; i <= n; i++) {
        if (1 == prime(i)) {
            min = i;
            break;
        }
    }

    if (sum == 0)
        printf("%d", -1);
        
    else 
        printf("%d\n%d", sum, min);

    return 0;
}