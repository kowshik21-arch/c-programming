#include<stdio.h>
int main(){
    printf("Type-1 Standard\n");
    printf("Type-2 Delux\n");
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    switch (b)
    {
        case 1:
            if("A"){
                printf(" %d",2500);
                break;
            }
            else if("B"){
                printf("%d",2000);
            }


        case 2:
            if("C"){
                printf("%d",4000);
                break;
            }
            else if("D"){
                printf("%d",3000);
                break;
            }

        default:
            printf("Invalid");
            break;
    }

}