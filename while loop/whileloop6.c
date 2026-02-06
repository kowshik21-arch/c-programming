#include<stdio.h>
int main() {
    int n,tran;
    scanf("%d",&n);
    int amount;
    scanf("%d",&amount);
    int lowdays=0;
    int i=0;
    while (i<n) {
        scanf("%d",&tran);
        amount=amount+tran;
        if (amount>2000){
            lowdays++;
        }
        i++;
    }
    printf("%d\n",lowdays);
    printf("%d",amount);
}