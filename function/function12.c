#include<stdio.h>
int year(int n) {
    if ((n%400==0) || (n%4==0 && n%100!=0)) {
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (year(n)) {
        printf("leap year");
    }
    else {
        printf("not leap year");
    }
    return 0;
}