#include <stdio.h>

int main() {
    int a, b, A, B;

    scanf("%d %d", &a, &b);

    A = a % 10 * 100 + 
       (a % 100 - a % 10) + 
       (a % 1000 - a % 100) / 100;
    
    B = b % 10 * 100 + 
       (b % 100 - b % 10) + 
       (b % 1000 - b % 100) / 100; 

    if (A > B) {
        printf("%d", A);
    } else {
        printf("%d", B);
    }

    return 0;
}