#include<stdio.h>
int main(){
    int a,b;
    int c=0;
    scanf("%d %d",&a,&b);
    switch (a)
    {
        case 1:
            if(100<b && 200>b){
                c=b-100;
                printf("%d",(300+(c*5))-80);
                break;
            }
            else if (b>=200){
                c=b-100;
                printf("%d",(300+(c*7))-80);
                break;
            }
            else{
                printf("%d",b*3);
                break;
            }
        case 2:
            c=b-100;
            printf("%d",(10*20)+700);
            break;
    }
}