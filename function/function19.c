#include<stdio.h>
int power(int a,int b) {
    int total=1;
    for (int i=0;i<b;i++) {
        total=total*a;
    }
    return total;
}
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d", power(a,b));
    return 0;
}