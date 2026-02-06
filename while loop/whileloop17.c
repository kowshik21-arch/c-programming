#include<stdio.h>
int main() {
    int atmcash,widthdraw;
    scanf("%d",&atmcash);
    int n;
    scanf("%d",&n);
    int i=0,count=0;
    while(i<n) {
        scanf("%d",&widthdraw);
        if (widthdraw<atmcash) {
            atmcash=atmcash-widthdraw;
            count++;
        }
        i++;
    }
    printf("successfully widthdrawls:%d\n",count);
    printf("remaining case:%d",atmcash);
    return 0;
}