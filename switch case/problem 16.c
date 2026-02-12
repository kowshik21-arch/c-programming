#include<stdio.h>
int main(){
    int flightClass;
    scanf("%d",&flightClass);
    int baggageWeight;
    scanf("%d",&baggageWeight);
    switch (flightClass){
        case 1:{
            baggageWeight=baggageWeight*300;
            printf("Extra Baggage Charge ₹%d",baggageWeight);

        }
            break;
        case 2:{
            if(baggageWeight<3){
                printf("Free");
            }
            else{
                baggageWeight=(baggageWeight-3)*300;
                printf("Extra Baggage Charge ₹%d",baggageWeight);
            }
        }
            break;
        default:
            printf("Invalid Flight Class");
            break;
    }
}