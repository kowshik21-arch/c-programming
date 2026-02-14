#include<stdio.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int array[r][c];
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&array[i][j]);
        }
    }
    int max1=0,max2=0;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            if (max1<array[i][j]) {
                max1=array[i][j];
            }
            if (max2<array[i][j]&&max1!=array[i][j]) {
                max2=array[i][j];
            }
        }
    }
    printf("%d\n",max1);
    printf("%d\n",max2);
}