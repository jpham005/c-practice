#include <stdio.h>
#include <stdlib.h>

typedef struct sPerson {
    int  age;
    int  index;
    char *name;
} person;

person people[100000];
char namesBuffer[100000][101];

int compare(const void *a, const void *b) {
    person p1 = *(person *)a;
    person p2 = *(person *)b;

    if (p1.age != p2.age) {
        return (p1.age > p2.age) - (p1.age < p2.age);
    }

    return (p1.index > p2.index) - (p1.index < p2.index);
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %s", &people[i].age, namesBuffer[i]);
        people[i].name = namesBuffer[i];
        people[i].index = i;
    }

    qsort(people, n, sizeof(person), compare);

    for (int i = 0; i < n; i++) {
        printf("%d %s\n", people[i].age, people[i].name);
    }
}