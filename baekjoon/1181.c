#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * compare two char* variable for qsort in stdlib
 * @returns if a < b, -1, else a > b then 1, else 0
 */
int compare(const void * a, const void * b) {
    char * pa = *((char**)a);
    char * pb = *((char**)b);

    int len_a = strlen(pa), len_b = strlen(pb);
    if (len_a < len_b) return -1;
    if (len_a > len_b) return 1;

    while (*pa) {
        if (*pa < *pb) return -1;
        if (*pa > *pb) return 1;
        ++pa;
        ++pb;
    }

    return 0;
}

char words[20000][51];
char* arr[20000];

int main() {
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s", words[i]);

    for (int i = 0; i < n; i++)
        arr[i] = words[i];

    qsort(arr, n, sizeof(char*), compare);

    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
}
