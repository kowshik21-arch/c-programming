#include <stdio.h>
int factorial(int n) {
    int mux=1;
    for (int i=1;i<=n;i++) {
        mux=mux*i;
    }
    return mux;
}
int main () {
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}