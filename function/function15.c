#include<stdio.h>
int mux(int n) {
    for (int i=1;i<=10;i++) {
        printf("%d x %d = %d\n",i,n,i*n);
    }
    return 0;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",mux(n));
}