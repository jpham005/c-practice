#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    int balance = 10000;    // 교통카드 잔액
    int age;

    scanf("%d", &age);

    if (age >= 7 && age <= 12)
        balance = 9550;
    else if (age >=13 && age <= 18)
        balance = 9280;
    else
        balance = 8800;  

    printf("%d\n", balance);

    return 0;
}