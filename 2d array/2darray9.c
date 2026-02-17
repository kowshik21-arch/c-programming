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
    int even=0;
    int odd=0;
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]%2==0){
                even++;
            }
            else if(arr[i][j]%2!=0){
                odd++;

            }
        }
            if(odd==even){
                count++;
            }
        
    }
    printf("%d",count);

}