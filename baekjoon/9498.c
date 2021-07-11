#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    if (num >= 90){
        printf("%c", 'A');
        return 0;
    }
    
    if (num >= 80 && num <= 89) {
        printf("%c", 'B');
        return 0;
    }

    if (num >= 70 && num <= 79) {
        printf("%c", 'C');
        return 0;
    }

    if (num >= 60 && num <= 69) {
        printf("%c", 'D');
        return 0;
    }

    printf("%c", 'F');

    return 0;
}