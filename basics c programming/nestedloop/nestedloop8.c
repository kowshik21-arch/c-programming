#include<stdio.h>
int main() {
    for (int i=5;i>=1;i--) {
        for (int j=1;j<6-i;j++) {
            printf(" ");
        }
        for (int k=1;k<=i*2-1;k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}