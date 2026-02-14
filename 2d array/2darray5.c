#include<stdio.h>
int main() {
    int r,c;
    printf("Enter number of rows and columns of array\n");
    scanf("%d%d",&r,&c);
    int array[r][c];
    printf("Enter the values\n");
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&array[i][j]);
        }
    }
    int dup=0;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
              if (array[i][j]==array[i][j+1]) {
                  dup=1;
                  break;
              }
            if (dup==0) {
                printf("%d",array[i][j]);
            }
        }
    }
    return 0;
}