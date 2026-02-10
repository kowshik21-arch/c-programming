#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&array[i]);
    }
    int average=0;
    for (int j=0;j<n;j++) {
        average=average+array[j];
    }
    average=average/n;
    int count=0;
    for (int k=0;k<n;k++) {
        if (array[k]>average) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}