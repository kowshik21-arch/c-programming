#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&array[i]);
    }
    for (int j=0;j<n;j++) {
        if (array[j]<0) {
            array[j]=0;
            printf("%d ",array[j]);
        }
        else {
            printf("%d ",array[j]);
        }
    }
    return 0;
}