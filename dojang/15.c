#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 0; i < 5; i++) {
        printf("%d ", num % 10);
        num /= 10;
    }

    return 0;
}