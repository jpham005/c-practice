#include <stdio.h>

int main() {
    char a, b;
    scanf("%c", &a);

    for (int i = a - 97; i < 26; i++) {
        b = i + 97;
        printf("%c", b);
    }
}