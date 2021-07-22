#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;

    int *numPtr1 = malloc(sizeof(int));
    int *numPtr2 = malloc(sizeof(int));

    scanf("%d %d", &num1, &num2);

    *numPtr1 = num1;
    *numPtr2 = num2;

    printf("%d\n", *numPtr1 + *numPtr2);

    free(numPtr1);
    free(numPtr2);

    return 0;
}