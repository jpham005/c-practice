#include <stdio.h>
//1110 0000 0100 0100
struct Flags {
    union {
        struct {
            unsigned int a : 3;
            unsigned int b : 4;
            unsigned int c : 7;
            unsigned int d : 2;
        };
        unsigned short e;
    };
};
 
int main()
{
    struct Flags f1 = { 0, };
 
    f1.a = 4; // 100
    f1.b = 8; // 1000
    f1.c = 64; //100 000 0
    f1.d = 3; //11

    printf("%u\n", f1.e);

    return 0;
}