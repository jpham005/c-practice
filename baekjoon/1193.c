#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    int resultA = 1;
    int resultB = 1;
    int i;
    int num = 1;

    if (x == 1) {
        printf("%d/%d", 1, 1);
        return 0;
    }
    
    for (i = 0; num < x; i++) {
        num += i;
    }

    if (i % 2 == 1) {
        if (x == num) {
            resultA = i;
            resultB = 1;
        } else {
            for (int j = num; j > x; j--){
                if (j == num) {
                    resultA = i - 1;
                    resultB = 1;
                } else {
                    resultA--;
                    resultB++;
                }
            }
        }
    } else {
        if (x == num) {
            resultA = 1;
            resultB = i;
        } else {
            for (int j = num; j > x; j--) {
                if (j == num) {
                    resultA = 1;
                    resultB = i - 1;
                } else {
                    resultA++;
                    resultB--;
                }
            }
        }
    }

    printf("%d/%d", resultA, resultB);

    return 0;
}