#include<stdio.h>
int perfect(int n) {
    int dsum=0;
    for (int i=1; i<n; i++) {
        if (n%i==0) {
            dsum=dsum+i;
        }
    }
    if (dsum==n) {
        return 1;
    }
    return 0;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (perfect(n)) {
        printf("%d is a perfect number", n);
    }
    else {
        printf("%d is not a perfect number", n);
    }
}