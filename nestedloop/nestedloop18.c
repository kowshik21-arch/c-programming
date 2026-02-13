#include <stdio.h>
int main(){
    int i,j,k;
    char ch='E';
    for(i=0;i<5;i++){
        for(k=0;k<4-i;k++)
            printf(" ");
        for(j=i;j>=0;j--)
            printf("%c ",ch-j);
        printf("\n");
    }
    return 0;
}
