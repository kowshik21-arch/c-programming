#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int power;
    int i=0;
    int count=0;
    int max=0;
    while (i<N) {
        scanf("%d",&power);
        if (power>5) {//3>5 F 6>5T 4>5F 8>5 T 2>5F 7>5T
            count++;//3
        }
        if (power>max) { //3>0 3
            max=power;
        }
        i++;
    }
    printf("Max Usage: %d\n",max);
    printf("Surge hours: %d",count);
    return 0;
}