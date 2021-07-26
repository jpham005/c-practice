#include <stdio.h>
#include <stdarg.h>
//gcc 기준 int 보다 작을시 int로, float일시 double로
int getSum(char *arg, ...) {
    int sum = 0;
    va_list(ap);

    va_start(ap, arg);
    while(*arg != '\0') {
        switch (*arg) {
            case 'i' :
                sum += va_arg(ap, int);
                break;
            
            case 'd' :
                va_arg(ap, double);
                break;
            
            case 's' :
                va_arg(ap, char*);
                break;
        }

        ++arg;
    }

    return sum;
}

int main()
{
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d\n", getSum("isi", num1, "C", 10));
    printf("%d\n", getSum("sdsi", "Hello, world!", 5.3, "A", num2));
    printf("%d\n", getSum("iiss", 25, 38, "k", "R"));
    printf("%d\n", getSum("sidii", "Hello, C", num3, 2.234567, 878, 1291));

    return 0;
}