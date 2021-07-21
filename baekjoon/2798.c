#include <stdio.h>

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int n, m, t;
    int arr[100];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {         
            if (i == j)
                continue;
            for (int k = 0; k < n; k++) {              
                if (i == k || j == k)
                    continue;
                if (arr[i] + arr[j] + arr[k] <= m) {
                    sum = max(sum, arr[i] + arr[j] + arr[k]);
                }
            }
        }
    }

    printf("%d", sum);
}