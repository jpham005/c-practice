#include <stdio.h>

void ftPrintCombN(int n, int pos, int m, int *arr) {
    int start;
    
    if (pos == m) {
        for (int i = 0; i < m; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }

    if (pos == 0)
        start = 1;
    else 
        start = arr[pos - 1];

    for (int i = start; i < n + 1; i++) {
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