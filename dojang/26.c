#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char memu;

    scanf("%c", &memu);

    switch (memu)
    {
        case 'f' :
            printf("환타");
            break;
        case 'c' :
            printf("콜라");
            break;
        case 'p' :
            printf("포카리스웨트");
            break;
        default :
            printf("판매하지 않는 메뉴");
            break;
    }

    return 0;
}