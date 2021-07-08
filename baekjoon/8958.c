#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char string[80];

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%s", string);
            
        int score = 1;
        int sum = 0;
        
        for (int j = 0; j < strlen(string); j++) {
            if (string[j] ==  'O') {
                sum += score;
                score++;
                } else {
                    score = 1;
                }
        }

        printf("%d\n", sum);
    }

    return 0;
}