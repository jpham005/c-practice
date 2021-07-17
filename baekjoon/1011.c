#include <stdio.h>
#include <math.h>

int solve() {
    int x, y; scanf("%d%d", &x, &y);
    int d = y - x;
    int n = sqrt((double) (y - x)); // square root => sqrt
    int n2 = n * n;

    if (n2 == d) return 2*n - 1;
    if (d <= n2 + n) return 2*n;
    return 2*n + 1;
}

int main() {
    int t; scanf("%d", &t);
    while (t--) printf("%d\n", solve());
}
