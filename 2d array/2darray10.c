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
    int index=0;
    int count=0; 
    int max=0; 
    for(int i=0;i<r;i++){
        int mul=1;
        for(int j=0;j<c;j++){
            mul=mul*arr[i][j]; //6 -6
            if(mul>max){ //6 >0 T -6>0F
                max=arr[i][j];//max=6
                count++; //count=1
                
            }
            else{
                count=0;
            }
        }
        if(count>=1){
            index=i;
        }   
    }
    printf("%d",index);
}