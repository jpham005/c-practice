#include <stdio.h>

int main() {
    int h;
    scanf("%d", &h);

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= 2 * h - 1; j++) {
            if (h - i < j && j < h + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}