#include<stdio.h>
int main(){
    int category;
    scanf("%d",&category);
    int distance;
    scanf("%d",&distance);
    switch (category){
        case 1:{
            if(distance<=30){
                printf("Eligible");
            }
            else{
                printf("Eligible with Extra Fee");
            }
        }
            break;
        case 2:{
            if(distance<=30){
                printf("Eligible");
            }
            else{
                printf("Not Eligible");
            }
        }
            break;

        default:
            printf("Invalid Category");
            break;
    }
}