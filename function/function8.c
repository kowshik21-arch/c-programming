#include<stdio.h>
int rev(int n) {
    int revs=0;
    while (n!=0) {
        revs=revs*10+n%10;
        n=n/10;
    }
    return revs;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The reversed number is: %d\n",rev(n));
    return 0;
}