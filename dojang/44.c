#include <stdio.h>
#include <string.h>

int main() {
    char s1[1001];
    scanf("%[^\n]s", s1);
    
    char *ptr = strchr(s1, ' ');
    int cnt = 0;
    while (ptr != NULL) {
        cnt++;
        ptr = strchr(ptr + 1, ' ');
    }

    printf("%d", cnt);
}