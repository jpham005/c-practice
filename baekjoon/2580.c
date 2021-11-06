#include <stdio.h>
#include <string.h>

typedef struct flags {
    char x[10][10];
    char y[10][10];
    char sq[10][10][10];
} flags;

int checkFlag(int i, int x, int y, flags *flag) {
    return flag->x[x][i] ||
           flag->y[y][i] ||
           flag->sq[--x / 3][--y / 3][i];
}

void setFlag(int i, int x, int y, flags *flag, int c) {
    flag->x[x][i] = c;
    flag->y[y][i] = c;
    flag->sq[--x / 3][--y / 3][i] = c;
}

int solveSdoku(int board[10][10], int x, int y, flags *flag) {
    if (y == 10) {
        y = 1;
        x++;
    }
    
    if (x == 10) {
        return 1;
    }
    
    if (board[x][y] != 0) {
        return solveSdoku(board, x, y + 1, flag);
    }

    for (int i = 1; i < 10; i++) {
        if (!checkFlag(i, x, y, flag)) {
            setFlag(i, x, y, flag, 1);
            board[x][y] = i;
            if (solveSdoku(board, x, y + 1, flag))
                return 1;
            board[x][y] = 0;
            setFlag(i, x, y, flag, 0);
        }
    }

    return 0;
}

int main() {
    flags flag;
    memset(&flag, 0, sizeof(flag));
    
    int board[10][10];

    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            scanf("%d", &board[i][j]);
            if (board[i][j]) {
                setFlag(board[i][j], i, j, &flag, 1);
            }
        }
    }

    solveSdoku(board, 1, 1, &flag);

    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }    
}