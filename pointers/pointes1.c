#include<stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d before swappint\n",&a);
    printf("%d before swappint\n",&);
    int temp=a;
    a=b;
    b=temp;
    printf("%d after swappint\n",&a);
    printf("%d after swappint\n",&b);
    return 0;
}