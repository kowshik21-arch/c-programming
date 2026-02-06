#include<stdio.h>
int main() {
    int n;
     scanf("%d",&n);
    int i=1;
    int count=0;
    int streak=0,longest=0;
    int noice;
    while(i<=n) {
        scanf("%d",&noice);
        if (noice>70) {
            count++;
            longest++;
            if (longest>streak) {
                streak=longest;
            }
        }
        else {
            longest=0;
        }
        i++;
    }
    printf("Noice voilation:%d\n",count);
    printf("longest noice voilation:%d",streak);
}