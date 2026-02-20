#include<stdio.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char *p=str;
    int count=1;
    while (*p!='\0'){
        if(*p==' '){
            count++;
        }
        p++;
    }
    printf("%d",count);
    
}