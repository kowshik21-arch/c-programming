#include <stdio.h>
int main() {
    int i,j,k;
    for(i=1;i<=4;i++) {
        for(j=1;j<=i;j++) {
            printf("%d",j);
        }
        for(k=1;k<= 2*(4-i);k++) {
            printf(" ");
        }
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}