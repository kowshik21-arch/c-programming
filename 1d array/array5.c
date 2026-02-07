#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&array[i]);
    }
    int total=0;
    for (int j=0;j<n;j++) {
        total=array[j]+total;
    }
    int max=0;
    for (int k=0;k<n;k++) {
        if (max<array[k]) {
            max=array[k];
        }
    }
    printf("total vots:%d\n",total);
    printf("highest vote:%d",max);
    return 0;
}