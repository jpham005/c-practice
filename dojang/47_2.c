#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s1[11];
    scanf("%d %s", &n, s1);
    int len = strlen(s1);

    if (len < n) {
        printf("wrong");
        return 0;
    }

    for (int i = 0; i < len - n + 1; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", s1[i + j]);
        }

        printf("\n");
    }
}