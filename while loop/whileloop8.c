#include<stdio.h>
int main() {
    int n,work;
    int working=0,streak=0;
    scanf("%d",&n);
    int longest=0;
    int i=0;
    while (i<n) {
        scanf("%d",&work);
        if (work==0) {
            streak++;
            if (working<streak) {
                working=streak;
            }
        }
        else {
            streak=0;
        }
        i++;
    }
    printf("%d",working);
    return 0;
}