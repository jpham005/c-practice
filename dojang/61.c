#include <stdio.h>
#include <stdlib.h>

struct Point2D {
    int x;
    int y;
};

void *allocPoint2D() {
    struct Point2D *mem = malloc(sizeof(struct Point2D));
    mem->x = 90;
    mem -> y = 75;
    return mem;
}
 
int main()
{
    struct Point2D *pos1;

    pos1 = allocPoint2D();

    printf("%d %d\n", pos1->x, pos1->y);

    free(pos1);

    return 0;
}