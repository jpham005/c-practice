#include <stdio.h>

int main() {
    int num;

    while (1) {
        scanf("%d", &num);

        if (num == 0)
            return 0;

        int reverse = 0;
        int temp = num;
        
        while (num != 0) {
            reverse = reverse * 10 + num % 10;
            num /= 10;
        }

        if (temp == reverse) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}