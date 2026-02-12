#include<stdio.h>
int main(){
    int typeOfVehicle;
    scanf("%d",&typeOfVehicle);
    int hoursParked;
    scanf("%d",&hoursParked);
    switch (typeOfVehicle){
        case 1:{
            hoursParked=hoursParked*10;
            printf("Parking Fee ₹%d",hoursParked);
        }
            break;
        case 2:{
            hoursParked=hoursParked*20;
            printf("Parking Fee ₹%d",hoursParked);
        }
            break;
        default:
            hoursParked=hoursParked*20;
            printf("Parking Fee ₹%d",hoursParked);
            break;
    }

}