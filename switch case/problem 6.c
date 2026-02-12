#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("Type-1 Normal\n");
    printf("Type-2 Express\n");
    int b;
    scanf("%d",&b);
    switch (b)
    {
        case 1:

            printf("Delivery %d",50);
            break;


        case 2:
            if(a<1000){
                printf("Delivery %d",100);
                break;
            }
            else{
                printf("Free");
                break;
            }

        default:
            printf("Invalid");
            break;
    }

}