#include<stdio.h>
void fibo(int n) {
    int a = 0, b = 1;
    if(n >= 1)
        printf("%d ", a);
    if(n >= 2)
        printf("%d ", b);
    for(int i = 3; i <= n; i++) {
        int c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    fibo(n);
    return 0;
}
