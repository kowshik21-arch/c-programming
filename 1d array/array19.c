#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    int min=0;

    for (int i=0;i<n;i++) {
        scanf("%d",&array[i]);
        min+=array[i];
    }
    for (int j=0;j<n;j++) {
        if (array[j]<min && array[j]>0) {
            min=array[j];
        }
    }
    if (min>0) {
        printf("%d",min);
    }
    else {
        printf("no positive numbers");
    }
    return 0;
}