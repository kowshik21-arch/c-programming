#include<stdio.h>
void maximum(int n,int arr[]){
     int *p=arr;
     int max=-10000;
     for(int i=0;i<n;i++){
        if(*(p+i)>max && *(p+i)<1000){
            max=*(p+i); 
        }
     }
     printf("%d",max);
    
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    maximum(n,arr);
   
}