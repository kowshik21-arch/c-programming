#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int array[size];
    for (int i=0; i<size; i++) {
        scanf("%d", &array[i]);
    }
    int count=0;
    for (int j=0; j<size; j++) {
        if (array[j]==1) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}