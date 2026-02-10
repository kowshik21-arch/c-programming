#include <stdio.h>
int main() {
    int n, p = 1;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
        if (n % i == 0) p = 0;
    if (n > 1 && p) printf("Prime");
    else printf("Not Prime");
    return 0;
}