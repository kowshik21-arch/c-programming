#include<stdio.h>
int main(){
    char s1[100];
    char s2[100];
    fgets(s1,sizeof(s1),stdin);
    int *p1=s1;
    int *p2=s2;
    while(*p1!='\0'){
        *p2=*p1;
        p1++;
        p2++;
    }
    p1='\0';
    printf("%s",s2);
}