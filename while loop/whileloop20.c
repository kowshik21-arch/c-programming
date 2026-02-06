#include<stdio.h>
int main() {
    int capacity,load;
    scanf("%d",&capacity);
    int n;
    scanf("%d",&n);
    int i=0,safe=0,fail=0;
    while(i<n) {
        scanf("%d",&load);
        if (load<capacity) {
            safe++;
        }
        else {
            fail++;
        }
        i++;
    }
    printf("safehours:%d\n",safe);
    printf("failur count:%d",fail);
    return 0;
}
//18