#include <stdio.h>
#include <string.h>

int main() {
    char a[31], b[31];
    scanf("%s %s", a, b);

    int c = strcmp(a, b);
    if(c == 0)
        printf("0");
    else
        printf("%d", c);

}