#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int a, b;
    for (int i = 0; i < n - 1; i ++) {
        for (int j = 0; j < n - 1; j ++) {
            
            a = arr[j];
            b = arr[j + 1];
            
            if (arr[j] > arr[j + 1]) {
                arr[j] = b;
                arr[j + 1] = a;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}