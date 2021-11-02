#include <stdio.h>

void ftPrintPermitation(int n, int pos, int m, char *check, int *arr) {
    if (pos == m) {
        for (int i = 0; i < m; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        if (check[i] == 0) {
            check[i] = 1;
            arr[pos] = i + 1;
            ftPrintPermitation(n, pos + 1, m, check, arr);
            check[i] = 0;
        }
    }
}

int main() {
    int n;
    int m;
    char check[8];
    int arr[8];

    scanf("%d %d", &n, &m);
    for (int i = 0; i < 8; i++) {
        check[i] = 0;
    }

    ftPrintPermitation(n, 0, m, check, arr);
}