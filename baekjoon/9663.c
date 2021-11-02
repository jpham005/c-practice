#include <stdio.h>

char xFlags[14];
char rbFlags[27];
char lbFlags[27];
int  n;

int nQueen(int x) {
    int acc = 0;

    if (x == n) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (xFlags[i] == 0 && rbFlags[x + i] == 0 && lbFlags[13 - i + x] == 0) {
            xFlags[i] = 1;
            rbFlags[x + i] = 1;
            lbFlags[13 - i + x] = 1;
            acc += nQueen(x + 1);
            xFlags[i] = 0;
            rbFlags[x + i] = 0;
            lbFlags[13 - i + x] = 0;            
        }
    }

    return acc;
}

int main() {
    scanf("%d", &n);

    printf("%d", nQueen(0));
}