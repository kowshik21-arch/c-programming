#include<stdio.h>
int main() {;
    int a;
    for (int i=1;i<=5;i++) {
        for (int j=1;j<i+1;j++) {
            a=((i+j)%2);
            printf("%d",a);
        }
        printf("\n");
    }
}