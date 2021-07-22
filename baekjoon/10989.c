#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a, cnt[10001] = {0,};
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        cnt[a]++;
    }

   for (int i = 1; i <= 10000; i++) {
       if (cnt[i]) {
           for (int j = 0; j < cnt[i]; j++) {
               printf("%d\n", i);
           }
       }
   }
    
}