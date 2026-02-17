#include <stdio.h>

int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int count1=0;
    for (int i=0;i<r;i++) {
        int count = 1;
        for (int j=1;j<c;j++) {
            if ((arr[i][j])<=(arr[i][j-1])) {
                count=0;
                break;
            } 
        }

        if (count==1) {
            count1++;
        }
    }
    printf("%d", count1);

    return 0;
}
