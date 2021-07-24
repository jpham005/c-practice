#include <stdio.h>

struct Packet {
    char hi;
    char hw;
    char ase;
};

int main()
{
    struct Packet pkt;

    printf("%d\n", sizeof(pkt));

    return 0;
}