#include<stdio.h>
void arm(int n){
    int temp = n, count = 0;
    while(temp != 0){
        count++;
        temp = temp / 10;
    }
    temp = n;
    int sum = 0;
    while(temp != 0){
        int digit = temp % 10;
        int power = 1;
        for(int i=0;i<count;i++){
            power = power * digit;
        }
        sum = sum + power;
        temp = temp / 10;
    }
    if(sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}
int main(){
    int n;
    scanf("%d",&n);
    arm(n);
    return 0;
}
