#include<stdio.h>
int main(){
    int userRole;
    scanf("%d",&userRole);
    int loginTime;
    scanf("%d",&loginTime);
    switch (userRole){
        case 1:{
            printf("Full Access");
        }
            break;
        case 2:{
            if(loginTime>=9 && loginTime<=18){
                printf("Limited Access");
            }
            else{
                printf("Access Denied");
            }
        }
            break;
        default:
            printf("Invalid Role");
            break;
    }
}