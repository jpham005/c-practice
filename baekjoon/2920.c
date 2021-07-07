#include <stdio.h>

int main() {
    int num;
    int nArr[8];
    int i;
    int j = 0;
    int k = 0;

    for (i = 0; i < 8; i++) {
        scanf("%d", &num);
        nArr[i] = num;
    }

    while (j < 7 && nArr[j] < nArr[j + 1]) {
        j++;
    }


    while (k < 7 && nArr[k] > nArr[k + 1]) {
        k++;
    }


    if (j == 7) {
        printf("%s", "ascending");
    } else if (k == 7) {
        printf("%s", "descending");
    } else {
        printf("%s", "mixed");
    }

    return 0;
}

/* 
int descending = 1;
for (int i = 0; i < 8; i++) {
  if (nArr[i] != 8-i) {
    descending = 0;
    break;
  }
}
if (descending) {
  puts("descending");
  return 0;
}

ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ

int ascending = 1;
int descending = 1;
for (int i = 0; i < 8; i++) {
  int tmp; scanf("%d", &tmp);
  if (tmp != i+1) ascending = 0;
  if (tmp != 8-i) descending = 0;
  if (!(ascending || descending)) break;
}
if (ascending) puts("ascending");
else if (descending) puts("descending");
else puts("mixed");

ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ

int state = 3;
for (int i = 0; i < 8; i++) {
  int tmp; scanf("%d", &tmp);
  if (tmp != i+1) state &= 2;
  if (tmp != 8-i) state &= 1;
  if (!tmp) break;
}
if (state & 1) puts("ascending");
else if (state & 2) puts("descending");
else puts("mixed");

ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ

#include <cstdio>
#include <cstring>
char a[9] = "12345678", b[9] = "87654321", c[9];

int main(){
    for (int i=0; i<8; i++) {
        scanf(" %c ",&c[i]);
    }
    if(strncmp(a,c,8) == 0) puts("ascending");
    else if(strncmp(b,c,8) == 0) puts("descending");
    else puts("mixed");
}
*/