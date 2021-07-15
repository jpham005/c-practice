#include <stdio.h>

int num() {
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[b + 1];

    for (int i = 0; i < b; i++) {
        arr[i] = i + 1;
    }
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b - 1; j++) {
            arr[j + 1] = arr[j] + arr[j + 1];
        }
    }

    if (b == 1) {
        printf("%d\n", 1);
    } else {
        printf("%d\n", arr[b - 1]);
    }

    return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        num();
    }
}