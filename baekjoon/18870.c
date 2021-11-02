#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int n1 = *((int *)a);
    int n2 = *((int *)b);

    return (n1 > n2) - (n1 < n2);
}

int find(int *arr, int num, int start, int end) {
    if (arr[(start + end) / 2] < num)
        return find(arr, num, (start + end) / 2 + 1, end);
    if (arr[(start + end / 2)] > num)
        return find(arr, num, start, (start + end) / 2);
    return (start + end) / 2;
}

int findWhile(int *arr, int num, int start, int end) {
    int mid;
    while (start  < end) {
        mid = (start + end) / 2;
        if (arr[(start + end) / 2] < num)
            start = (start + end) / 2 + 1;
        else if (arr[(start + end) / 2] > num)
            end = (start + end) / 2 - 1;
        else
            return (start + end) / 2;
    }
    return start;
}

int main() {
    int n;
    int cnt;

    scanf("%d", &n);
    
    int *sortArr = malloc(sizeof(int) * n);
    int *arr = malloc(sizeof(int) * n);
    int *primeArr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        sortArr[i] = arr[i];
    }

    qsort(sortArr, n, sizeof(int), compare);

    cnt = 1;
    primeArr[0] = sortArr[0];
    for (int i = 1; i < n; i++) {
        if (sortArr[i] != sortArr[i - 1]) {
            primeArr[cnt] = sortArr[i];
            cnt++;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", findWhile(primeArr, arr[i], 0, cnt));
    }
}