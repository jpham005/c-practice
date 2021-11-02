#include <stdio.h>

void ftPrintCombN(int n, int pos, int m, int *arr) {
    if (pos == m) {
        for (int i = 0; i < m; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 1; i < n + 1; i++) {
            arr[pos] = i;
            ftPrintCombN(n, pos + 1, m, arr);
    }
}

int main() {
    int n;
    int m;
    int arr[8];

    scanf("%d %d", &n, &m);

    ftPrintCombN(n, 0, m, arr);
}