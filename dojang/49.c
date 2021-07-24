#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

typedef struct {
    char name[20];
    int number;
    int displacement;
} Car;
 
int main()
{
    struct Person *p1 = malloc(sizeof(struct Person));
    Car *c1 = malloc(sizeof(Car));

    strcpy(p1->name, "고길동");
    p1->age = 40;
    strcpy(p1->address, "서울시 서초구 반포동");

    strcpy(c1->name, "스텔라");
    c1->number = 3421;
    c1->displacement = 2000;

    printf("이름: %s\n", p1->name);
    printf("나이: %d\n", p1->age);
    printf("주소: %s\n", p1->address);

    printf("자동차 이름: %s\n", c1->name);
    printf("자동차 번호: %d\n", c1->number);
    printf("배기량: %dcc\n", c1->displacement);

    free(p1);
    free(c1);

    return 0;
}