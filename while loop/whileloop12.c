#include<stdio.h>
int main() {
    int n,emi;
    scanf("%d",&n);
    int i=0,count=0,total=0;
    while (i<n) {
        scanf("%d",&emi);
        if (emi==0) {
            count++;
            if (total<count) {
                total=total+count;
            }
        }
        else {
            count=0;
        }
        i++;
    }
    printf("longest default streaks:%d",total);
    return 0;
}