#include <stdio.h>

int check(int a) { 
    if (a < 100)
        return 1;

    int r2 = a / 100;
    int r1 = (a / 10) % 10;
    int r0 = a % 10;

    return r0 - r1 == r1 - r2;
}

int solve(int x) {
    int cnt = 0;
    for (int i = 1; i <= x; i++) {
        cnt += check(i);
    }
    return cnt;
}

int main() {
    int x; scanf("%d", &x);
    printf("%d\n", solve(x));
}