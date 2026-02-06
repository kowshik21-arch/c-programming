#include<stdio.h>
int main() {
    //daliy data usage//
    int total,daily;
    scanf("%d",&total);
    int n,data=0;
    scanf("%d",&n);
    int i=0;
    while (i>n) {
        scanf("%d",&daily);
        if (data<total) {
            data=daily-total;

        }
    }

}