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

int main() {
    int t, n;
    int arr[10000];
    int brr[10000];
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        prime(n, arr);
        int len;

        for (int i = 0, j = 0; i <= n; i++) {
            if (arr[i] == 1) {
                brr[j] = i;
                j++;
                len = j;
            }
        }

        int c, d, min = 10000;
        for (int i = 0; i < len; i++) {
            for (int j = 0 + i; j < len; j++) {
                if ((brr[i] + brr[j] == n) && (brr[j] - brr[i] < min)) {
                    c = brr[i];
                    d = brr[j];
                    min = brr[j] - brr[i];
                }
            }
        }
        printf("%d %d\n", c, d);
    }
}