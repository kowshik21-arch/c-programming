#include<stdio.h>
int max(int a,int b,int c) {
    int intrest=(a*b*c)/100;
    return intrest;
}
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d=max(a,b,c);
    printf("%d",d);
}