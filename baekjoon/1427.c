#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2)
        return 1;
    if (num1 > num2)
        return -1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[10], i = 0;
    while (n) {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }

    qsort(arr, i, sizeof(int), compare);

    for (int j = 0; j < i; j++) {
        printf("%d", arr[j]);
    }
}