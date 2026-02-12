#include<stdio.h>
int main() {
    int mark;
    scanf("%d",&mark);
    int m=mark/10;
    switch (m){
        case 9:
            printf("Grade A");
            break;
        case 8:
            printf("Grade B");
            break;
        case 7:
            printf("Grade c");
            break;
        case 6:
            printf("Grade d");
            break;
        case 5:
            printf("Grade E");
            break;
        case 4:
            printf("Grade F");
            break;
        case 3:
            printf("Supplementory");
            break;
        case 2:
            printf("Fail");
            break;
    }
}