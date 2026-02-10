#include <stdio.h>
int main() {
    int n, sum = 0, d = 0, t;
    scanf("%d", &n);
    for (t = n; t > 0; t /= 10) d++;
    for (t = n; t > 0; t /= 10) {
        int rem = t % 10, p = 1;
        for (int i = 0; i < d; i++) p *= rem; // Manual power calculation
        sum += p;
    }
    printf(sum == n ? "Yes" : "No");
    return 0;
}