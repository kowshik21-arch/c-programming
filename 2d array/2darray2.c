#include<stdio.h>
int main() {
    int r,c;
    printf("Enter the row and colum value:\n");
    scanf("%d %d",&r,&c);
    int array[r][c];
    printf("Enter the value for the array element:\n");
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&array[i][j]);
        }
    }
    int maxsum=0;
    int maxmonth=0;
    for (int k=0;k<r;k++) {
        int sum=0;
        for (int l=0;l<c;l++) {
            sum=sum+array[k][l];
        }
        if (sum>maxsum) {
            maxsum=sum;
            maxmonth=k;
        }
    }
    printf("%d has the highest sales\n",maxmonth+1);
    return 0;
}