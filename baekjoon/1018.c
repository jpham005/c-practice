#include <stdio.h>

int main() {
    int n, m;
    int black, white;
    int min = 64;
    
    char board[50][50];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%s", board[i]);
    }

    for (int i = 0; i < n - 7; i++) {
        for (int j = 0; j < m - 7; j++) {
            black = 0;
            white = 0;

            for (int a = i; a < i + 8; a++){
                for (int b = j; b < j + 8; b++) {
                    if ((a + b) % 2 == 0) {
                        if (board[a][b] == 'B')
                            white++;
                        else   
                            black++;
                    }
                    else {
                        if (board[a][b] == 'B')
                            black++;
                        else
                            white++;
                    }
                }
            }
            if (min < black)
                min = min;
            else
                min = black;

            if (min < white)
                min = min;
            else
                min = white;
        }
    }

    printf("%d", min);

    return 0;
}