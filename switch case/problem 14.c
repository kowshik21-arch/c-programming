#include<stdio.h>
int main(){
    int vehicleCategory;
    scanf("%d",&vehicleCategory);
    int vehicleAge;
    scanf("%d",&vehicleAge);
    switch (vehicleCategory){
        case 1:{
            if(vehicleAge>=0 && vehicleAge<=20){
                if(vehicleAge<=5){
                    printf("₹1500");
                }
                else{
                    printf("₹2500");
                }
            }
            else{
                printf("Invalid Vehicle Age");
            }
        }
            break;
        case 2:{
            if(vehicleAge>=0 && vehicleAge<=20)
            {
                if (vehicleAge<=5){
                    printf("₹4000");
                }
                else{
                    printf("₹6000");
                }
            }
            else{
                printf("Invalid Vehicle Age");

            }
            break;
            default:
            printf("Invalid Vehicle Category");
            break;
        }
            return 0;

    }
}