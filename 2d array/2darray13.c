#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           for (int k=c;k>0;k--){
            if(arr[i][j]==arr[k][i]){
                count=1;
            }
            else{
                count=0;
            }

           }
        }
        if(count=1){
            count++;
        }
    }
    printf("%d",count);
}