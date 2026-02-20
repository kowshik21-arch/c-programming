#include<stdio.h>
void reverse(int arr[],int n){
    int *start=arr;
    int *end=arr+n-1;

    while(start<end){
        int temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;


    }
    

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}