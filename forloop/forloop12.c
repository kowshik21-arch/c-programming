#include<stdio.h>
int main() {
    int n,p;
    int num=1;
    scanf("%d %d",&n,&p);
    for (int i=1;i<=p;i++){
        num=num*n;
    }
    printf("%d",num);
    return 0;
}