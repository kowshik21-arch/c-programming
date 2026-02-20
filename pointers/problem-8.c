#include<stdio.h>
int main(){
    char s1[100];
    char s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    printf("%s",s1,s2);
    char *p=s1;
    while(*p!='\0'){
        p++;
    }
    char *q=s2;
    while(*q!='\0'){
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
    printf("%s",s2);

}