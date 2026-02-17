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
    int max=0,diff=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int d1=0;
            for(int a=0;a<r;a++){
                for(int b=0;b<c;b++){
                    d1=arr[i][j]-arr[a][b];
                }
                if(d1<max){
                    max=d1; 
                    if(max<0){
                        diff=-max;
                    }else{
                        diff=max;
                    }
                }
            }
        }
    }
    printf("%d",diff);
}