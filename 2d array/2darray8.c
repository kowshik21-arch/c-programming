#include <stdio.h>

int main()
{
    int r,c;
    int i,j;
    int maxSum, sum;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    maxSum = a[0][0] + a[0][1] + a[1][0] + a[1][1];// 1 2
    for(i=0;i<r-1;i++){                            // 4 5
        for(j=0;j<c-1;j++){ 
            sum=a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1];
            if(sum > maxSum){
                maxSum=sum;
            }
        }
    }
    printf("%d", maxSum);
    return 0;
}
