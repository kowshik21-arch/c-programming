#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&array[i]);
    }
    int m;
    scanf("%d",&m);
    for (int j=m;j<n;j++) {
        printf("%d ",array[j]);
    }
    for (int k=0;k<m;k++) {
        printf("%d ",array[k]);
    }
    return 0;
}