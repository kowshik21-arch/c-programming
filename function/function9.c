#include<stdio.h>
int palindrome(int n) {
    int temp=n;
    int rev=0;
    while(temp!=0) {
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    if (n==rev) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (palindrome(n)) {
        printf("The number is a palindrome");
    }
    else {
        printf("The number is not a palindrome");
    }
    return 0;
}