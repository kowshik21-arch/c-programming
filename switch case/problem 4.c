#include<stdio.h>
int main(){
    int class;
    int age;
    int amount;
    scanf("%d",&class);
    scanf("%d",&age);
    switch (class) {
        case 1:
            amount =300;
            if (age<12) {
                amount=amount*0.5;
            }
            else if (age>=60){
                amount=amount*0.667;
            }
            break ;
        case 2:
            amount =1000;
            if (age<12) {
                amount=amount*0.5;
            }
                break;
            }
    printf("%d",amount);
    return 0;
    }
// Created by Kowshik on 27-01-2026.
//