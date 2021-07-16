#include <stdio.h>

int main() {
    int arr[5];
    int n, sum = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &n);
        if (n < 0 || n > 100) {
            printf("잘못된 점수");
            return 0;
        } else {
            sum += n;
        }
    }

    if (340 <= sum)
        printf("합격");
    else
        printf("불합격");

    return 0;

}