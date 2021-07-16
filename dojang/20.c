#include <stdio.h>

int main() {
    char in;
    scanf("%c", &in);

    if (in != 'k') {
        printf("참\n");
    } else {
        printf("거짓\n");
    }

    printf("%s\n", in > 'h' ? "참" : "거짓");

    printf("%s\n", in <= 'o' ? "참" : "거짓");
}