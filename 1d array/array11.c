#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int a[100];
    for(int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < N; i++) {
        int found = 0;
        for(int j = 0; j < i; j++) {
            if(a[i] == a[j]) {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
