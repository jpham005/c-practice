#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);

    int v[26];
    for (int i = 0; i < 26; i++)
        v[i] = -1;

    for (int i = 0; i < strlen(s); i++) {
        int ch = s[i];
        
        if (v[s[i] - 'a'] < 0) {
            v[s[i] - 'a'] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", v[i]);
    }
}