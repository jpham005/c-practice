#include <stdio.h>

int main () {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a && b) {
        printf("참\n");
    }
    else {
        printf("거짓\n");
    }

    if (a || b) {
        printf("참\n");
    }
    else {
        printf("거짓\n");
    }

    if (!a) {
        printf("참\n");
    }
    else {
        printf("거짓\n");
    }
}