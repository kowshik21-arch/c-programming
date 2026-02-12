#include<stdio.h>
int main(){
    printf("Type-1 Savings\n");
    printf("Type-2 Deposit\n");
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    switch (a)
    {
        case 1:

            printf("intrest %d",4);
            break;


        case 2:
            if(b<=3){
                printf("intrest %d",5);
                break;
            }
            else{
                printf("intrest %d",7);
                break;
            }

        default:
            printf("Invalid");
            break;
    }

}