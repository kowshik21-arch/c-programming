#include<stdio.h>
int main() {
    int n,days;
    scanf("%d",&n);
    int i=0,total=0,count=0;
    while (i<n) {
        scanf("%d",&days);
        total=total+days;
        if (days>4) {
            count++;
        }
        i++;
    }
    printf("totalovertime:%d\n",total);
    printf("burnoutdays:%d\n",count);
    return 0;
}