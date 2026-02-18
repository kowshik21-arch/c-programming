#include<stdio.h>
int mux(float a) {
    a=(a*a)*3.14;
    printf("%.2f",a);
    return a;
}
int main() {
    int a;
    scanf("%d",&a);
    int b=mux(a);
    return 0;
}
