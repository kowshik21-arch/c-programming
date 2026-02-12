#include<stdio.h>
int main(){
    int att;
    scanf("%d",&att);

    int mark;
    scanf("%d",&mark);
    if(att<75){
        printf("Fail");
    }
    else if(mark>=75){
        printf("Distinction");
    }
    else if(mark>=50 && mark<=74){
        printf("pass");
    }
    else if(mark<50){
        printf("Fail");
    }
    else{
        printf("Invalid");
    }

}