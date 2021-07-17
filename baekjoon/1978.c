#include <stdio.h>

int prime(int a) {
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            return 0;
        }
    }

    if (a == 1) return 0;
    
    return 1;
}

int main() {
    int n, m, cnt = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &m);
        if (1 == prime(m)) {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}