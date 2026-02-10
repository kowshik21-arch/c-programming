#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&array[i]);
    }
    int target;
    scanf("%d",&target);
    int result1;
    int result2;
    for (int j=0;j<n;j++) {
        for (int k=0;k<n;k++) {
            if (array[k]+array[j]==target) {
                result1=array[k];
                result2=array[j];
            }
        }
    }
    if (result1+result2==target) {
        printf("%d ",result1);
        printf("%d",result2);
    }
    else {
        printf("no pair");
    }
    return 0;
}