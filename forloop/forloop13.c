#include<stdio.h>
int main() {
    int m,n;
    int k=0;
    scanf("%d %d",&m,&n);
    for (int i=1;i<=n;i++) {
        if (i%m==0) {
            k=k+i;
        }
    }
    printf("%d",k);
    return 0;
}