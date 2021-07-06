#include <stdio.h>

int main() {
    float num1 = 1.8f;
    double num2 = 2.9;
    long double num3 = 3.7l;

    printf("%f %lf %Lf", num1, num2, num3);
    printf("%lu %lu\n", sizeof(num1), sizeof(num2));

    return 0;

}