#include <stdio.h>
#include <string.h>

int main() {
    char s[1000001];
    
    scanf("%[^\n]s", s);
    int len = strlen(s);

    if (len == 1 && s[0] == ' ') {
        printf("%d", 0);
        return 0;
    }

    int cnt = 1;
    for (int i = 1; i < len - 1; i++) {
        if (s[i] == ' ')
            cnt++;
    }

    printf("%d", cnt);
}
