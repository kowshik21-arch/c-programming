#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int sum = 0, x;
    for(int i = 0; i < N-1; i++) {
        scanf("%d", &x);
        sum += x;
    }

    int expected = N * (N + 1) / 2;
    int missing = expected - sum;

    printf("%d", missing);
    return 0;
}
