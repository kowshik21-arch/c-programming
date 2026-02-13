#include<stdio.h>
int main() {
    for (int i=1;i<=5;i++) {
        for (int j=1;j<6-i;j++) {
            printf(" ");
        }
        for (int k=1;k<=i*2-1;k++) {
            printf("*");
        }
        printf("\n");
        }
    for (int p=4;p>=1;p--) {
        for (int q=1;q<6-p;q++) {
            printf(" ");
        }
        for (int r=1;r<=p*2-1;r++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    }