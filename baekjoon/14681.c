#include <stdio.h>

int main() {
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);

    if (num1 > 0 && num2 > 0) {
        printf("%d", 1);
        return 0;
    }

    if (num1 < 0 && num2 > 0) {
        printf("%d", 2);
        return 0;
    }

    if (num1 < 0 && num2 < 0) {
        printf("%d", 3);
        return 0;
    }

    if (num1 > 0 && num2 < 0) {
        printf("%d", 4);
        return 0;
    }

}