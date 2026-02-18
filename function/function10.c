#include<stdio.h>
int sum(int n) {
    int nsum=0;
    for (int i=1; i<=n; i++) {
        nsum+=i;
    }
    return nsum;
}
int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
