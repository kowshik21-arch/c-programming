#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int canclled;
    int success=0,failed=0;
    int i=0;
    while (i<n) {
        scanf("%d",&canclled);
        if (canclled==1) {
            success++;
        }
        else {
            failed++;
        }
        i++;
    }
    printf("successed:%d\n",success);
    printf("failed:%d\n",failed);
    if (success>=failed) {
        printf("safe");
    }
    else {
        printf("risk");
    }
    return 0;
}