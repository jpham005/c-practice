#include <stdio.h>
#include <string.h>

int result;
int flag[21];
int g1[21];
int g2[21];
int stat[20][20];

int compareGroup(int *g1, int *g2, int n) {
    int n1 = 0;
    int n2 = 0;

    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            n1 += stat[g1[i]][g1[j]];
            n2 += stat[g2[i]][g2[j]];
        }
    }

    return n1 > n2 ? n1 - n2 : n2 - n1;
}

void makeGroup(int start, int pos, int n) {
    if (pos == n / 2) {
        for (int i = 0, j = 0; j < n; j++) {
            if (flag[j] == 0) {
                g2[i] = j;
                i++;
            }
        }

        int diff = compareGroup(g1, g2, n);
        if (result > diff)
            result = diff;

        return;
    }

    for (int i = start; i < 6; i++) {
        g1[pos] = i;
        flag[i] = 1;
        makeGroup(i + 1, pos + 1, n);
        flag[i] = 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &stat[i][j]);
        }
    }

    memset(flag, 0, sizeof(int) * 21);
    result = 2000000000;

    makeGroup(0, 0, n);

    printf("%d\n", result);
}