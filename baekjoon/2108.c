#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2)
        return -1;

    if (num1 > num2)
        return 1;

    return 0;
}

void sansool(int *a, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    
    double result = sum / n;
    printf("%.f\n", result);   
}

void middle(int *a, int n) {
    printf("%d\n", a[n / 2]);
}

void most(int *a, int n) {
    int temp = 0, result, cnt = 0, same = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            temp++;
        }
        else
            temp = 0;

        if (temp > cnt) {
            cnt = temp;
            result = a[i];
            same = 0;
        } else if (temp == cnt && same == 0) {
            result = a[i];
            same++;
        }
    }

    if (n == 1)
        printf("%d\n", a[0]);
    else if (cnt == 0)
        printf("%d\n", a[1]);
    else 
        printf("%d\n", result);
}

void range(int *a, int n) {
    printf("%d\n",a[n - 1] - a[0]);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    sansool(arr, n);
    middle(arr, n);
    most(arr, n);
    range(arr, n);    

    return 0;
}
