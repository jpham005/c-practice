#include <stdio.h>

int main() {
    int a, b, c;

    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        
        if (a == 0 && b == 0 && c == 0) {
            return 0;
        }
        
        int A, B, C;

        if ( a <= c && b <= c) {
            A = a;
            B = b;
            C = c;
        } else if ( a <= b && c <= b) {
            A = a;
            B = c;
            C = b;
        } else if (b <= a && c <= a) {
            A = b;
            B = c;
            C = a;
        }

        if (A * A + B * B == C * C) {
            printf("%s\n", "right");
        } else {
            printf("%s\n", "wrong");
        }
    }

    return 0;
}