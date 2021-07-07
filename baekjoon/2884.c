#include <stdio.h>

int main() {
    int h, m;

    scanf("%d %d", &h, &m);
    
    if(h >= 1 && m < 45) {
        printf("%d %d", h - 1, m + 15);
    }

    if(h < 1 && m < 45) {
        printf("%d %d", 23, m + 15);
    }

    if(m >= 45) {
        printf("%d %d", h, m - 45);
    }

    return 0;
}