#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&array[i]);
    }
    int even=0;
    int odd=0;
    for (int j=0;j<n;j++) {
        if (array[j]%2==0) {
            even++;
        }
        else {
            odd++;
        }
    }
    printf("even :%d",even);
    printf("\nodd :%d",odd);
    return 0;
}