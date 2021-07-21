#include <stdio.h>

int check(int i) {
    int cnt = 0;
    while (i > 0) {
        if (i % 1000 == 666)
            cnt++;
        i /= 10;
    }
    
    if (cnt >= 1)
        return 1;
    
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int cnt = 0;
    int i = 666;
    while (1) {
        
        if (check(i)) {
            cnt++;
        }

        if (cnt == n) {
            printf("%d", i);
            break;
        }

        i++;
    }
}