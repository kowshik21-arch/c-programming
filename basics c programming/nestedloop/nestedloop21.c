#include <stdio.h>
int main(){
    int i,j,n=4;
    for(i=0;i<2*n-1;i++){
        for(j=0;j<2*n-1;j++){
            int min=i<j?i:j;
            if(min>2*n-2-i) min=2*n-2-i;
            if(min>2*n-2-j) min=2*n-2-j;
            printf("%d ",n-min);
        }
        printf("\n");
    }
    return 0;
}
