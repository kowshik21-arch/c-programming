#include<stdio.h>
int main() {
    printf("Enter the rows and colums\n");
    int r,c;
    scanf("%d %d",&r,&c);
    int array[r][c];
    printf("Enetr the values:\n");
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&array[i][j]);
        }
    }
    int sum=0;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            sum=sum+array[i][j];
        }
        printf("%d student mark is %d\n",i+1,sum);
    }
    return 0;
}