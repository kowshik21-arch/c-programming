#include<stdio.h>
int main() {
    int n,i;
    int num=0;
    scanf("%d",&n);
    for (int ;n>0;) {
        i=n%10;
        n=n/10;
        num=num+i;
    }
    printf("%d",num);
    return 0;
}