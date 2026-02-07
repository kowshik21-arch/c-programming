#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i=0;i<n;i++) {
        scanf("%d", &array[i]);
    }
    int count=0;
    for (int j=0;j<n;j++) {
        if (array[j]>100) {
            count++;
        }
    }
    printf("this much count of houses are use more than 100 units:%d", count);
    return 0;
}