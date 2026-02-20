#include<stdio.h>
int vowel(char *a){
    return(*a=='a' || *a=='e' ||*a=='i' ||*a=='o' ||*a=='u' ||
    *a=='A' ||*a=='E' ||*a=='I' ||*a=='O' ||*a=='U' );
}
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char *p=str;
    int count=0;
    while(*p!='\0'){
        if(vowel(p)){
            count++;
        }
        p++;

    }
    printf("%d",count);
    return 0;

}