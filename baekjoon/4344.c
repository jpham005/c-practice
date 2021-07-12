#include <stdio.h>

int main() {
    int c, n;
    int arr[1000];

    scanf("%d", &c);

    while (c--) {
        scanf("%d", &n);
        int sum = 0, over = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        double average = (double)sum / (double)n;

        for (int j = 0; j < n; j++) {
            if (arr[j] > average) {
                over++;
            }
        }

        printf("%.3f%%\n", (double)over * 100 / n);
    }

    return 0;
}