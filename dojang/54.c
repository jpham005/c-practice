#include <stdio.h>
#include <stdlib.h>

union Data {
    short num1;
    int num2;
};

int main()
{
    union Data *d1 = malloc(sizeof(union Data));

    d1->num2 = 0x11111111;

    printf("0x%x 0x%x\n", d1->num1, d1->num2);

    free(d1);

    return 0;
}