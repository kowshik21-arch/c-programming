#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&array[i]);
    }
    for (int i=0;i<n;i++) {
        if (array[i]<0) {
            array[i]=0;
            printf("%d ",array[i]);
        }
        else {
            printf("%d ",array[i]);
        }
    }
    return 0;
}