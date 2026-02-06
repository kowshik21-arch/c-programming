#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int num=0;
    int i=1;
    while (i<=n) {
        if (n%2==0) {
            printf("%d",n);
        }
        i++;
    }
    return 0;
}