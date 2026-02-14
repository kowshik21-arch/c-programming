#include<stdio.h>
int main() {
    int r,c;
    printf("Enter the row and colum value:\n");
    scanf("%d %d",&r,&c);
    int array[r][c];
    printf("Enetr the value of array:\n");
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&array[i][j]);
        }
    }
    int largestmin=0;
    int smallestmin=0;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            if (array[i][j]<largestmin) {
                largestmin=array[i][j];
            }
            if (array[i][j]<smallestmin&&array[i][j]!=largestmin) {
                smallestmin=array[i][j];
            }
        }
    }
    int largestmax=0;
    int smallestmax=0;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            if (array[i][j]>largestmax) {
                largestmax=array[i][j];
            }
            if (array[i][j]>smallestmax&&array[i][j]!=largestmax) {
                smallestmax=array[i][j];
            }
        }
    }
    int sum1=0;
    int sum2=0;
    sum1=largestmax*smallestmax;
    sum2=largestmin*smallestmin;
    if (sum1>sum2) {
        printf("%d",sum1);
    }
    else {
        printf("%d",sum2);
    }
    return 0;
}