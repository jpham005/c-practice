#include <stdio.h>
#include <string.h>

int check() {
    char s[101];
    scanf("%s", s);
    int len = strlen(s);
    
    int v[26];
    for (int i = 0; i < 26; i++) v[i] = 10000;
    
    for (int i = 0; i < len; i++) {
        char ch = s[i];
        if (i - v[ch - 'a'] > 1) return 0;
        v[ch - 'a'] = i;
    }

    return 1;
}

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    while (n--) {
        cnt += check();
    }
    printf("%d\n", cnt);
}