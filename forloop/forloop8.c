#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (;a!=0;a=a/10) {
        printf("%d",a%10);
    }
}