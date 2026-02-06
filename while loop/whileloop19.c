#include<stdio.h>
int main() {
    int balance,widthdraw;
    scanf("%d",&balance);
    int n;
    scanf("%d",&n);
    int i=0,count=0;
    while(i<n) {
        scanf("%d",&widthdraw);
        if (widthdraw<balance) {
            balance=balance-widthdraw;
            count++;
        }
        i++;
    }
    printf("successfully purchase:%d\n",count);
    printf("remaining balance:%d",balance);
    return 0;
}