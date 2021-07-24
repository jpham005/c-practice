#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s1[31], s2[31] = {0,};
    scanf("%[^\n]s", s1);
    int len = strlen(s1);

    for (int i = 0, j = 0; i < len; i++) {
        if (s1[i] != ' ') {
            s2[j] = s1[i];
            j++;
        }
    }

    bool pelindrome = true;
    len = strlen(s2);

    for (int i = 0; i < len / 2; i++) {
        if (s2[i] != s2[len - i - 1]) {            
            pelindrome = false;
            break;
        }
    }

    printf("%d", pelindrome);

    return 0;
}