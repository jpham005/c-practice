#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    int x, y;

    x = a ^ c ^ e;
    y = b ^ d ^ f;

    printf("%d %d", x, y);
}