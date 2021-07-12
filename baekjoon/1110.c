#include <stdio.h>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    int a = n;

    while (cnt == 0 || n != a) {
        if (a < 10) {
            a = a * 11;
        } else {
            int q = a / 10;
            int r = a % 10;
            a = r*10 + ((q+r)%10);
        }
        ++cnt;     
    }

    printf("%d", cnt);

    return 0;
}