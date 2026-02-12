#include<stdio.h>
int main(){
    int studentcategory;
    scanf("%d",&studentcategory);
    char ch;
    scanf(" %c",&ch);
    switch (studentcategory)
    {
        case 1:{
            if (ch=='R'){
                printf("₹5000");
            }
            else if(ch=='S'){
                printf("₹3000");
            }
            else{
                printf("Invalid Input");
            }
        }
            break;
        case 2:{
            if (ch=='R'){
                printf("₹9000");
            }
            else if(ch=='S'){
                printf("₹7000");
            }
            else{
                printf("Invalid Input");
            }
        }
            break;

        default:
            printf("Invalid Student Category");
            break;
    }
}