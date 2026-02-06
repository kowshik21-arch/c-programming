#include<stdio.h>{
int main() {
    int capacity,members;
    scanf("%d",&capacity);
    int n,total=0;
    scanf("%d",&n);
    int i=0,count=0;
    while(i<n) {
        scanf("%d",&members);
        total=total+members;
        i++;
        if (total>capacity-10) {
            count=count+1;
        }
    }
    printf("final occupation beds:%d\n",total);
    printf("critical hours:%d",count);
    return 0;
}