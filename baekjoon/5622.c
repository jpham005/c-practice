#include <stdio.h>
#include <string.h>

int num(int a) {
    if (a <= 67) 
        return 3;

    if (a <= 70)
        return 4;

    if (a <= 73)
        return 5;

    if (a <= 76)
        return 6;

    if (a <= 79)
        return 7;

    if (a <= 83)
        return 8;

    if (a <= 86)
        return 9;

    if (a <= 90)
        return 10;

    return 0;
}

int main() {
    char s[16];

    scanf("%s", s);
    int len = strlen(s);
    
    int cnt = 0;
    for (int i = 0; i < len; i++) {
        cnt += num(s[i]);
    }

    printf("%d", cnt);

    return 0;
}
