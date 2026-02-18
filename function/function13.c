#include<stdio.h>
int power(int a,int b) {
    int mux=1;
        for (int i=1;i<=b;i++) {
            mux=mux*a;
        }
    return mux;
}
int main() {
    int a,b;
    printf("Enter the number:");
    scanf("%d""%d",&a,&b);
    printf("%d",power(a,b));
}