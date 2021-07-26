#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printFullName(char *a, char *b) {
    printf("%s%s", a, b);
}

int main()
{
    char familyName[31];
    char givenName[31];

    scanf("%s %s", familyName, givenName);

    printFullName(familyName, givenName);

    return 0;
}