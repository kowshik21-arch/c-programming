#include<stdio.h>
int main() {
    int maxweight;
    scanf("%d",&maxweight);
    int n,count=0;
    scanf("%d",&n);
    int i=0,weight,total=0;
    while (i<n) {
        scanf("%d",&weight);
        if (total<maxweight) {
            total=total+weight;
        }
        if (total>weight) {
            count++;
        }
        i++;
    }
    printf("passengers allowed:%d\n",count);
    if (count!=n) {
        printf("overload:yes");
    }
    else {
        printf("overload:no");
    }
}