#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[100];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int max = a[0];
    int second = a[0];

    for(int i=1;i<n;i++) {
        if(a[i] > max) {
            second = max;
            max = a[i];
        }
        else if(a[i] < max && a[i] > second) {
            second = a[i];
        }
    }

    printf("%d", second);
    return 0;
}
