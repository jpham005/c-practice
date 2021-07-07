#include <stdio.h>

int main() {
    int N;
    int result;

    scanf("%d", &N);

    for (int i = 1; i <= 9; i++) {
        result = i * N;
        
        printf("%d * %d = %d\n", N, i, N * i);
    }

    return 0;
}