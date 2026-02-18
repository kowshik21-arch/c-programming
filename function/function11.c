#include<stdio.h>
int digit(int n) {
    int count=0;
    int rev=0;
    while (n!=0) {
        n=n/10;
        count++;
    }
    return count;
}
int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d",digit(n));
    return 0;
}