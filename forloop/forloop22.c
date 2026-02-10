#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        int p = 1;
        for (int j = 2; j < i; j++)
            if (i % j == 0) { p = 0; break; }
        if (p) count++;
    }
    printf("%d", count);
    return 0;
}