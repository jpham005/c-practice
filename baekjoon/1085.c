#include <stdio.h>

int main() {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int arr[4] = {x, y, w - x, h - y};
    int min = 1000;

    for (int i = 0; i < 4; i++) {
        if (min > arr[i])
            min = arr[i];
    }

    printf("%d", min);


    return 0;
}