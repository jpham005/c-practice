#include <stdio.h>

int main() {
    int num1, num2;
    int arr[1000000];

    scanf("%d", &num1);

    for (int i = 0; i < num1; i++) {
        scanf("%d", &num2);

        arr[i] = num2;
    }

    int min = arr[0], max = arr[0];

    for (int i = 0; i < num1; i++) {
        if (max <= arr[i]) {
            max = arr[i];
        }
    }

    for (int i = 0; i < num1; i++) {
        if (min >= arr[i]) {
            min = arr[i];
        }
    }

    printf("%d %d", min, max);

    return 0;
}