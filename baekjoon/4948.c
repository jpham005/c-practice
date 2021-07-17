#include <stdio.h>

void prime(int n, int arr[]) {
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

int a[250001];
int s[250002];

int main() {
    prime(250000, a);

    for (int i = 1; i < 250002; i++) {
        s[i] = s[i-1] + a[i-1];
    }

    while (1) {
        int n;
        scanf("%d", &n);
        if (n == 0) break;
        printf("%d\n", s[2*n+1] - s[n+1]);
    }

    return 0;
}