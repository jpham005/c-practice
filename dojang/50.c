#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p1;
    struct Point2D p2;
    double distance;

    scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);

    int a = p1.x - p2.x;
    int b = p1.y - p2.y;
    distance = sqrt(pow(a, 2) + pow(b, 2));

    printf("%f\n", distance);

    return 0;
}