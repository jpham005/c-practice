#include <stdio.h>

int main() {
    int a, b, c, n;
    int arr[10] = {0,};
   

    scanf("%d %d %d", &a, &b, &c);
    int num = a * b * c;

    while (num >= 1) {
        n = num % 10;
        arr[n]++;
        num /= 10;
    }

    for(int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}