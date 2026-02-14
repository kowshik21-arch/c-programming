#include<stdio.h>
int main() {
    int r,c;
    printf("Enter the row and colums:\n");
    scanf("%d %d",&r,&c);
    int array[r][c];
    printf("Enter the values:\n");
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&array[i][j]);
        }
    }
    int sum=0,avg=0,p=0,index=0;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            sum+=array[i][j];
        }
        avg=sum/c;
        if (avg>p) {
            p=avg;
            index=i;
        }
    }
    printf("%d",index);
}