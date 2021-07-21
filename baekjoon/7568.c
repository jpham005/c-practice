#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x[n], y[n], cnt;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    
    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = 0; j < n; j++) {
            if (x[i] < x[j] && y[i] < y[j]) {
                cnt++;
            }
        }
        printf("%d ", 1 + cnt);
    }
}