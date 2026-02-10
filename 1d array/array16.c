#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int total = 0;
    for(i=0;i<n;i++)
        total += a[i];
    int left = 0;
    for(i=0;i<n;i++) {
        if(left == total - left - a[i]) {
            printf("%d", i);
            return 0;
        }
        left += a[i];
    }
    printf("-1");
    return 0;
}
