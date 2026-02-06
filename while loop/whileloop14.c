#include<stdio.h>
int main() {
    int n,hours;
    scanf("%d",&n);
    int i=0,count=0;
    while (i<n) {
        scanf("%d",&hours);
        if (hours==0) {
            count++;
        }
        i++;
    }
    printf("%d\n",count);
    if (count>=3) {
        printf("risk status :high");
    }
    else {
        printf("risk status :low");
    }
}