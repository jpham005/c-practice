#include <stdio.h>

void solve() {
    int x1, y1, r1, x2, y2, r2;
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
    int a = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

    if (x1 == x2 && y1 == y2 && r1 == r2) {
        printf("-1\n");
    }
    else if (((r1 + r2) * (r1 + r2) > a) && (a > (r1 - r2) * (r1 - r2))) {
        printf("2\n");
    } else if (((r1 + r2) * (r1 + r2) < a) || (r1 - r2) * (r1 - r2) > a){
        printf("0\n");
    } else
        printf("1\n");
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        solve();
    }
}