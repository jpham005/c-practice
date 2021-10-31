#include <stdio.h>

void printHanoi(int n, int from, int to) {
    if (n == 0)
        return;
    
    printHanoi(n - 1, from, 6 - from - to);
    printf("%d %d\n", from, to);
    printHanoi(n - 1, 6 - from - to, to);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", (1 << n) - 1);
    printHanoi(n, 1, 3);
}