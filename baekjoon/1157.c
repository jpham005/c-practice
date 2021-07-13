#include <stdio.h>
#include <string.h>

int main() {
    char s[1000000];
    scanf("%s", s);
    int len = strlen(s);

    int v[26] = {0,};

    for (int i = 0; i < len; i++) {
        if (s[i] < 97) {
            v[s[i] - 'A']++;
        } else {
            v[s[i] - 'a']++;
        }
    }

    int max = -1;
    int result;

    for (int i = 0; i < 26; i++) {
        int ch = v[i];
        if (ch > max) {
            max = v[i];
            result = i;
        }   
    }
    
    for (int i = 0; i < 26; i++) {
        if (max == v[i] && i != result) {
            printf("%c", '?');
            return 0;
        }
    }

    printf("%c", result + 65);
}