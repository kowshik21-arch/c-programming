#include <stdio.h>
int main() {
    int n, rev = 0, org;
    scanf("%d", &n);
    org = n;
    for (; n > 0; n /= 10)
        rev = rev * 10 + n % 10;
    printf(org == rev ? "Yes" : "No");
    return 0;
}