#include <stdio.h>

void ftPrintCombN(int n, int pos, int m, int start, int *arr) {
    if (pos == m) {
        for (int i = 0; i < m; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = start; i < n; i++) {
            arr[pos] = i + 1;
            ftPrintCombN(n, pos + 1, m, start + 1, arr);
            start++;
    }
}

int main() {
    int n;
    int m;
    int arr[8];

    scanf("%d %d", &n, &m);

    ftPrintCombN(n, 0, m, 0, arr);
}