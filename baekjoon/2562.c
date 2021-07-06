/*https://electro-don.tistory.com/entry/scanf-n-%EA%B4%80%EB%A0%A8
scanf에 \n 사용시 문제점.
*/

#include <stdio.h>

int main() {
    int numArr[9];
    int maxNum;
    int index;
    
    for (int i = 0; i < 9; i++) {
        scanf("%d", &numArr[i]);
    }

    maxNum = numArr[0];
    index = 0;

    for (int i = 1; i < 9; i++) {
        if (maxNum < numArr[i]) {
            maxNum = numArr[i];
            index = i;
        }
    }

    printf("%d\n", maxNum);
    printf("%d", index + 1);

    return 0;
}