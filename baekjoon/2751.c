#include <stdio.h>
#include <stdlib.h>

//qsort(정렬할 배열, 요소개수, 요소크기 , 비교함수)

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2)
        return -1;
    
    if (num1 > num2)
        return 1;
    
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    for (int i= 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}