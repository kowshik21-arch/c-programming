#include<stdio.h>
int main() {
    int fuel,trips;
    scanf("%d",&fuel);
    int n,count=0;
    scanf("%d",&n);
    int i=0;
    while (i<n) {
        scanf("%d",&trips);
        if (fuel>=trips) {
            fuel=fuel-trips;
            count++;
        }
    else {
        break;
    }
        i++;
    }
    printf("completed trip:%d\n",count);
    printf("remaining fuel:%d",fuel);
    return 0;
}