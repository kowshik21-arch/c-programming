#include <stdio.h>
int main() {
    int n, dec = 0, base = 1;
    scanf("%d", &n);
    for (; n > 0; n /= 10) {
        dec += (n % 10) * base;
        base *= 2;
    }
    printf("%d", dec);
    return 0;
}