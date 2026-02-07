#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i=0;i<n;i++) {
        scanf("%d", &array[i]);
    }
    int sum=0,count=0;
    for (int j=0;j<n;j++) {
        sum=sum+array[j];
    }
    sum=sum/n;
    for (int k=0;k<n;k++) {
        if (array[k]>sum) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}