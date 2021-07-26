#include <stdio.h>
#include <stdlib.h>

//qsort(arr, n, sizearr, compare)

int compare(const void *a, const void *b) {
    int *num1 = *(int **)a;
    int *num2 = *(int **)b;

    for (int i = 0; i < 2; i++) {
        if (*num1 < *num2)
            return -1;
        if (*num1 > *num2)
            return 1;
        
        ++num1;
        ++num2;
    }

    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n][2];
    int *brr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    for (int i = 0; i < n; i++) {
        brr[i] = &arr[i][0];
    }

    qsort(brr, n, sizeof(int *), compare);

    for (int i = 0; i < n; i++) {
        printf("%d %d\n", *brr[i], *(brr[i] + 1));
    }

    return 0;
}