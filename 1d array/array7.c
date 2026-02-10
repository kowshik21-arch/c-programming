#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&array[i]);
    }
    int x,count=0;
    scanf("%d",&x);
    for (int j=0;j<n;j++) {
        if (array[j]==x) {
            count++;
        }
    }
    printf("frequency count:%d",count);
    return 0;
}