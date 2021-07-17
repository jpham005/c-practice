#include <stdio.h>

void prime(int n, int arr[]) {
    if (n <= 1) return;
    for (int i = 2; i <= n; i++) {
        arr[i] = 1;
    }

    for (int i = 2; i * i <= n; i++) {
        if (arr[i]) {
            for (int j = i * i; j <=n; j += i) {
                arr[j] = 0;
            }
        }
    }
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[n + 1];
    
    prime(n, a);

    for (int i = m; i <= n; i++) {
        if (a[i] == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}