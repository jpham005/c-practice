#include <stdio.h>
#include "shape.h"

int board[22][17] = {0,};
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

void moveDown() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[cposY + i][cposX + j] == 1 && board[cposY + 1 + i][cposX + j] >= 2)
                return;
        }

              
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[cposY + 3 - i][cposX + j] == 1) {
                board[cposY + 4 - i][cposX + j] = 1;
                board[cposY + 3 - i][cposX + j] = 0;
            }
        }  
    }
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
            board[cposY + i][cposX + j] = tetrimino_shapes[1][b][(i * 4)+ j];
        }
    }
}

void finish() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[cposY + i][cposX + j] == 1) {
                board[cposY + i][cposX + j] = 2;
            }
        }
    }    
}

void complete() {
    int arr[20] = {0,};

    for (int i = 1; i < 21; i++) {
        for (int j = 1; j < 11; j++) {
            if (board[i][j] != 2)
                break;
            
            if (j == 10){
                for (int k = 1; k < 11; k++) {
                    board[i][k] = 0;
                }
                
                arr[i] = i;
            }
        }
    }

    for (int i = 2; i < 21; i++) {
        if (i == arr[i]) {
            for (int j = i; j > 1; j--) {
                for (int k = 1; k < 11; k++) {
                    board[j][k] = board[j - 1][k];
                }
            }
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

int kbhit() {
    int ch = getchar();

    if(ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

void input() {
    while(1) {       
        if (kbhit() == 0)
            break;

        int ch = getchar();
        switch (ch) {
            case 27:
                if (getchar() == 91) {
                    int b = getchar();
                    
                    if (b == 66) { // d
                        moveDown();
                        print();
                    } else if (b == 67) { // r
                        moveRight();
                        print();
                    } else if (b == 68) { // left
                        moveLeft();
                        print();
                    }
                }
                break;
                
            case 122: // z
                rotate(-1, 0);
                print();
                break;
        
            case 99: // c
                rotate(1, 0);
                print();
                break;
            
            case 32:  //space
                finish();
                print();
                break;
        }        
    }
}

int main() {
    render();
    board[1][5] = 1;
    board[1][6] = 1;
    board[1][7] = 1;
    board[1][8] = 1;
    cposX = 5; 
    cposY = 0;
    moveDown();
    print();
}