#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&array[i]);
    }
    int count=0;
    for (int i=0;i<n;i++) {
        int d=0;
        for (int j=0;j<i;j++) {
            if (array[i]==array[j]) {
                d=1;
            }
        }
        if (d==0) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}