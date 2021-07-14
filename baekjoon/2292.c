#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int num = 2;
    int i = 1;
    
    if (n >= 2) {
        while (1) {
            num += 6 * i;
            
            if (num > n) {
                break;
            }
            
            i++;
        }
        
        printf("%d", i + 1);
    } else {
        printf("1");
    }

    return 0;
}