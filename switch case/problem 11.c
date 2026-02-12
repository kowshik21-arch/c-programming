#include<stdio.h>
int main(){
    int choice;
    scanf("%d",&choice);
    int experience;
    scanf("%d",&experience);
    switch (choice){
        case 1:{
            int salary=50000;
            if(experience>=3){
                salary=salary+(experience*5000);
                printf("Salary ₹%d",salary);
            }
            else{
                printf("Salary ₹%d",salary);
            }

        }
            break;
        case 2:{
            int salary=35000;
            if(experience>=3){
                salary=salary+(experience*5000);
                printf("Salary ₹%d",salary);
            }
            else{
                printf("Salary ₹%d",salary);
            }
        }
            break;
        default:
            printf("Invalid Input");
            break;
    }
    return 0;
}