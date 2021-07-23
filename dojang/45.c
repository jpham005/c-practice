#include <stdio.h>
#include <string.h>

int main() {
    char s1[1001];
    scanf("%[^\n]s", s1);

    int i = 0;
    char *ptr = strtok(s1, " ");
    char *s2[1001] = {0, };

    while (ptr != NULL) {
        s2[i] = ptr;
        ptr = strtok(NULL, " ");
        i++;
    }

    int cnt = 0, a;
    for (int i = 0; i < 1001; i++) {
        if(s2[i] != NULL){
        a = strcmp(s2[i], "the");
        if (a == 0) {
            cnt++;
        } else{
        a = strcmp(s2[i], "the.");
        if (a  == 0)
            cnt++;
        }
        }
    }

    printf("%d", cnt);
}