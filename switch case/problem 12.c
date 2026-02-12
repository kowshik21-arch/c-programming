#include<stdio.h>
int main(){
    int vehicleType;
    scanf("%d",&vehicleType);
    int trips;
    scanf("%d",&trips);
    switch (vehicleType){
        case 1:{
            if(trips>=10){
                trips=800;
                printf("₹%d",trips );
            }
            else{
                trips=trips*100;
                printf("₹%d",trips);
            }
        }
            break;
        case 2:{
            trips=trips*240;
            printf("₹%d",trips);
        }
            break;

        default:
            printf("Invalid Vehicle Type");
            break;
    }
}