#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    while (a > 0) {
        a -= 1200;
        if (a < 0) break;
        printf("%d\n", a);
    }
}