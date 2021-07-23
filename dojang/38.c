#include <stdio.h>
#include <stdlib.h>

int check(char **s, int a, int b, int m, int n) {
    int cnt = 0;
    for (int i = a - 1; i <= a + 1; i++) {
        if (i < 0 || i == m)
            continue;
        else {
            for (int j = b - 1; j <= b + 1; j++) {
                if (j < 0 || j == n)
                        continue;
                else if (s[i][j] == '*')
                    cnt++;
            }
        }
    }

    return cnt;
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    char **s = malloc(sizeof(char*) * m);
    for (int i = 0; i < m; i++) {
        s[i] = malloc(sizeof(char) * (n + 1));

        scanf("%s", s[i]);
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] == '*')
                printf("%c", '*');
            else
                printf("%d", check(s, i, j, m, n));
        }

        printf("\n");
    }
}