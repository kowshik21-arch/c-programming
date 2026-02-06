#include<stdio.h>
int main() {
    int n,delay;
    scanf("%d",&n);
    int i=0,sum=0,count=0;
    while (i<n) {
        scanf("%d",&delay);
        sum=sum+delay;
        if (delay>2) {
            count++;
        }
        i++;
    }
    printf("%d\n",sum);
    printf("%d",count);
    return 0;
}