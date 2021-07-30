#include <stdio.h>
#include "shape.h"

int board[22][17];
int cposX, cposY, x, y, z;

void render() {
    for (int i = 0; i < 12; i++) {
        board[0][i] = 3;
        board[21][i] = 3;
    }

    for (int i = 0; i < 20; i++) {
        board[1 + i][0] = 3;
        board[1 + i][11] = 3;
    }
}

void moveRight() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[cposY + i][cposX + 3 - j] == 1 && board[cposY + i][cposX + 4 - j] >= 2) {
                return;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[cposY + i][cposX + 3 - j] == 1) {
                board[cposY + i][cposX + 4 - j] = 1;
                board[cposY + i][cposX + 3 - j] = 0;
            }
        }
    }
    
    cposX += 1;
}

void moveLeft() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[cposY + i][cposX + j] == 1 && board[cposY + i][cposX -1 + j] >= 2) {
                return;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[cposY + i][cposX + j] == 1) {
                board[cposY + i][cposX - 1 + j] = 1;
                board[cposY + i][cposX + j] = 0;
            }
        }
    }

    cposX -= 1;
}

void rotate(int a, int b) {
    if (a == 1) {
        if (b == 3)
            b = 0;
        else ++b;
    } else {
        if (b == 0)
            b = 3;
        else --b;
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            board[cposY + 3 - i][cposX + j] = tetrimino_shapes[7][b][(i * 4)+ j];
        }
    }
}

void print() {
    for (int i = 0; i < 22; i++) {
        for (int j = 0; j < 12; j++) {
            switch (board[i][j]) {
                case 0:
                    printf(" ");
                    break;
                case 1:
                case 2:
                    printf("▢");
                    break;
                case 3:
                    printf("■");
            }
        }
        printf("\n");
    }
}

int main() {
    render();
    board[10][5] = 1;
    board[10][6] = 1;
    board[11][5] = 1;
    board[11][6] = 1;
    cposX = 4, cposY = 9;
    print();

}