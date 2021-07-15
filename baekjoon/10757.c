#include <stdio.h>
#include <string.h>

void reverse(char a[]) {
    int len = strlen(a);
    for (int i = 0; i < len / 2; i++) {
        char rev = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = rev;
    }
}

int main() {
    char a[10002] ={ 0, }, b[10002] = { 0, }, c[10003] = { 0, };
    scanf("%s %s", a, b);

    reverse(a);
    reverse(b);
    int len = strlen(a) > strlen(b) ? strlen(a) : strlen(b);

    int carry = 0;
    for(int i = 0; i < len; i++) {
        int sum = a[i] - '0' + b[i] - '0' + carry;
        while (sum < 0) sum += '0'; 
        if (sum >= 10) carry = 1;
        else carry = 0;
        c[i] = sum % 10 + '0';
    }
    if (carry == 1) c[len] = '1';

    reverse(c);
    printf("%s", c);
}