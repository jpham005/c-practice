#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[30];
    int age;
};

int main()
{
    struct Person *p[5];

    for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++) {
        p[i] = malloc(sizeof(struct Person));
        scanf("%s %d", p[i]->name, &p[i]->age);
    }

    int max = 0; int temp;
    for (int i = 0; i < 5; i++) {
        if (p[i]->age >= max){
            max = p[i]->age;
            temp = i;
        }
    }

    printf("%s", p[temp]->name);

    for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++)
    {
        free(p[i]);
    }

    return 0;
}