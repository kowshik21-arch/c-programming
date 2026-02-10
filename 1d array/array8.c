#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&array[i]);
    }
    int count=0;
    for (int j=0;j<n;j++) {
        if (array[j]>=array[j-1]) {
            count++;
        }
        else {
            count=0;
        }
    }
    if (count>=n) {
        printf("yes");
    }
    else {
        printf("no");
    }

}